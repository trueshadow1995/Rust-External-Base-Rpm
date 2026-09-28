
#include <objbase.h>
#include <../src/libs/overlay/Overlay.h>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "dcomp.lib")

/*
 Self-owned DirectComposition overlay.
 Top-level layered WS_POPUP at screen size + DComp target + DComp visual
 whose content is our IDXGISwapChain1. Clear-to-zero + ImGui's default
 SRC_ALPHA/INV_SRC_ALPHA blend produces premultiplied output in the RT,
 which DComp with DXGI_ALPHA_MODE_PREMULTIPLIED composites correctly
 against whatever's underneath.
*/

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM,
                                                             LPARAM);

LRESULT CALLBACK c_overlay::WndProc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {
  if (ImGui_ImplWin32_WndProcHandler(hwnd, msg, wp, lp))
    return true;
  if (msg == WM_DESTROY) {
    PostQuitMessage(0);
    return 0;
  }
  return DefWindowProcW(hwnd, msg, wp, lp);
}

bool c_overlay::create_window() {
  WNDCLASSEXW wc = {};
  wc.cbSize = sizeof(wc);
  wc.style = CS_HREDRAW | CS_VREDRAW;
  wc.lpfnWndProc = &c_overlay::WndProc;
  wc.hInstance = GetModuleHandleW(nullptr);
  wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
  wc.lpszClassName = L"Phil9OverlayCls";

  wnd_class_atom = RegisterClassExW(&wc);
  if (!wnd_class_atom && GetLastError() != ERROR_CLASS_ALREADY_EXISTS)
    return false;

  const int screen_w = GetSystemMetrics(SM_CXSCREEN);
  const int screen_h = GetSystemMetrics(SM_CYSCREEN);

  DWORD ex_style =
      WS_EX_LAYERED | WS_EX_TOPMOST | WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE;
  if (click_through)
    ex_style |= WS_EX_TRANSPARENT;

  window_handle = CreateWindowExW(ex_style, L"Phil9OverlayCls", L"", WS_POPUP,
                                  0, 0, screen_w, screen_h, nullptr, nullptr,
                                  wc.hInstance, nullptr);
  if (!window_handle)
    return false;

  SetLayeredWindowAttributes(window_handle, 0, 255, LWA_ALPHA);

  ShowWindow(window_handle, SW_SHOW);
  UpdateWindow(window_handle);
  return true;
}

bool c_overlay::init_device() {
  CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);

  D3D_FEATURE_LEVEL feature_level;
  D3D_FEATURE_LEVEL feature_levels[3] = {
      D3D_FEATURE_LEVEL_11_0,
      D3D_FEATURE_LEVEL_10_1,
      D3D_FEATURE_LEVEL_10_0,
  };

  HRESULT hr = D3D11CreateDevice(
      nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr,
      D3D11_CREATE_DEVICE_BGRA_SUPPORT, // required for DComp interop
      feature_levels, 3, D3D11_SDK_VERSION, &d3d_device, &feature_level,
      &device_context);
  if (FAILED(hr))
    return false;

  IDXGIDevice *dxgi_device = nullptr;
  IDXGIAdapter *adapter = nullptr;
  IDXGIFactory2 *factory = nullptr;
  if (FAILED(d3d_device->QueryInterface(IID_PPV_ARGS(&dxgi_device))))
    return false;
  if (FAILED(dxgi_device->GetAdapter(&adapter))) {
    dxgi_device->Release();
    return false;
  }
  if (FAILED(adapter->GetParent(IID_PPV_ARGS(&factory)))) {
    adapter->Release();
    dxgi_device->Release();
    return false;
  }

  DXGI_SWAP_CHAIN_DESC1 sd = {};
  sd.Width = (UINT)window_width;
  sd.Height = (UINT)window_height;
  sd.Format = DXGI_FORMAT_B8G8R8A8_UNORM; // required for composition
  sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
  sd.BufferCount = 3; // room before Present blocks
  sd.SampleDesc.Count = 1;
  sd.SampleDesc.Quality = 0;
  sd.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
  sd.AlphaMode = DXGI_ALPHA_MODE_PREMULTIPLIED;

  hr = factory->CreateSwapChainForComposition(d3d_device, &sd, nullptr,
                                              &swap_chain);
  factory->Release();
  adapter->Release();
  dxgi_device->Release();
  if (FAILED(hr))
    return false;

  hr = DCompositionCreateDevice(nullptr, IID_PPV_ARGS(&dcomp_device));
  if (FAILED(hr))
    return false;
  hr = dcomp_device->CreateTargetForHwnd(window_handle, TRUE, &dcomp_target);
  if (FAILED(hr))
    return false;
  hr = dcomp_device->CreateVisual(&dcomp_visual);
  if (FAILED(hr))
    return false;
  dcomp_visual->SetContent(swap_chain);
  dcomp_target->SetRoot(dcomp_visual);
  dcomp_device->Commit();

  init_render_target();
  return true;
}

void c_overlay::dest_device() {
  dest_render_target();
  safe_release(dcomp_visual);
  safe_release(dcomp_target);
  safe_release(dcomp_device);
  safe_release(swap_chain);
  safe_release(device_context);
  safe_release(d3d_device);
}

void c_overlay::init_imgui() {
  IMGUI_CHECKVERSION();
  ImGui::CreateContext();
  ImGui::StyleColorsDark();

  ImGui::GetIO().IniFilename = nullptr;

  ImGui_ImplWin32_Init(window_handle);
  ImGui_ImplDX11_Init(d3d_device, device_context);
}

void c_overlay::dest_imgui() {
  ImGui_ImplDX11_Shutdown();
  ImGui_ImplWin32_Shutdown();
  ImGui::DestroyContext();
}

void c_overlay::init_render_target() {
  ID3D11Texture2D *back_buffer = nullptr;
  swap_chain->GetBuffer(0, IID_PPV_ARGS(&back_buffer));
  if (back_buffer) {
    d3d_device->CreateRenderTargetView(back_buffer, nullptr,
                                       &render_target_view);
    back_buffer->Release();
  }
}

void c_overlay::dest_render_target() {
  if (render_target_view) {
    render_target_view->Release();
    render_target_view = nullptr;
  }
}

void c_overlay::sync_click_through() {
  const bool want = !menu_open;
  if (want == click_through)
    return;
  LONG_PTR ex = GetWindowLongPtrW(window_handle, GWL_EXSTYLE);
  if (want)
    ex |= WS_EX_TRANSPARENT;
  else
    ex &= ~WS_EX_TRANSPARENT;
  SetWindowLongPtrW(window_handle, GWL_EXSTYLE, ex);
  click_through = want;
}

c_overlay::c_overlay() {
  window_width = (FLOAT)GetSystemMetrics(SM_CXSCREEN);
  window_height = (FLOAT)GetSystemMetrics(SM_CYSCREEN);

  if (!create_window())
    return;
  if (!init_device())
    return;
  init_imgui();
}

c_overlay::~c_overlay() {
  if (d3d_device) {
    dest_imgui();
    dest_device();
  }
  if (window_handle) {
    DestroyWindow(window_handle);
    window_handle = nullptr;
  }
  if (wnd_class_atom) {
    UnregisterClassW(L"Phil9OverlayCls", GetModuleHandleW(nullptr));
    wnd_class_atom = 0;
  }
}

bool c_overlay::begin_frame() {
  MSG msg = {};
  bool alive = true;

  while (::PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE)) {
    ::TranslateMessage(&msg);
    ::DispatchMessage(&msg);
    if (msg.message == WM_QUIT) {
      alive = false;
      break;
    }
  }

  sync_click_through();

  ImGui_ImplDX11_NewFrame();
  ImGui_ImplWin32_NewFrame();
  ImGui::NewFrame();

  init_draw_list();
  return alive;
}

void c_overlay::end_frame() {
  ImGui::Render();
  float clear[4] = {0.f, 0.f, 0.f, 0.f};
  device_context->OMSetRenderTargets(1, &render_target_view, nullptr);
  device_context->ClearRenderTargetView(render_target_view, clear);
  ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

  swap_chain->Present(0, DXGI_PRESENT_DO_NOT_WAIT);
}

void c_overlay::init_draw_list() { draw_list = ImGui::GetBackgroundDrawList(); }

void c_overlay::crosshair(const FLOAT aSize, ImU32 color) {
  draw_list->AddLine({window_width / 2, window_height / 2 - (aSize + 1)},
                     {window_width / 2, window_height / 2 + (aSize + 1)}, color,
                     2);
  draw_list->AddLine({window_width / 2 - (aSize + 1), window_height / 2},
                     {window_width / 2 + (aSize + 1), window_height / 2}, color,
                     2);
}

void c_overlay::box(const ImVec2 &pos, const FLOAT width, const FLOAT height,
                    ImU32 color, const FLOAT line_width) {
  ImVec2 pts[4] = {
      pos,
      {pos.x + width, pos.y},
      {pos.x + width, pos.y + height},
      {pos.x, pos.y + height},
  };
  draw_list->AddPolyline(pts, 4, color, true, line_width);
}

void c_overlay::boxfilled(const ImVec2 &pos, const FLOAT width,
                          const FLOAT height, ImU32 color) {
  draw_list->AddRectFilled(pos, {pos.x + width, pos.y + height}, color);
}

void c_overlay::line(const ImVec2 &point1, const ImVec2 point2, ImU32 color,
                     const FLOAT line_width) {
  draw_list->AddLine(point1, point2, color, line_width);
}

void c_overlay::circle(const ImVec2 &point, const FLOAT radius, ImU32 color,
                       const FLOAT width) {
  draw_list->AddCircle(point, radius, color, 200, width);
}

void c_overlay::text(const ImVec2 &pos, const std::string &s, ImU32 color,
                     bool outline, bool /*background*/) {
  if (outline) {
    draw_list->AddText({pos.x + 1, pos.y}, IM_COL32_BLACK, s.c_str());
    draw_list->AddText({pos.x - 1, pos.y}, IM_COL32_BLACK, s.c_str());
    draw_list->AddText({pos.x, pos.y + 1}, IM_COL32_BLACK, s.c_str());
    draw_list->AddText({pos.x, pos.y - 1}, IM_COL32_BLACK, s.c_str());
  }
  draw_list->AddText(pos, color, s.c_str());
}

void c_overlay::radial_gradient(const ImVec2 &center, float radius,
                                ImU32 col_in, ImU32 col_out) {
  if (((col_in | col_out) & IM_COL32_A_MASK) == 0 || radius < 0.5f)
    return;

  const int count = draw_list->_Path.Size - 1;
  if (count <= 0)
    return;

  unsigned int vtx_base = draw_list->_VtxCurrentIdx;
  draw_list->PrimReserve(count * 3, count + 1);

  const ImVec2 uv = draw_list->_Data->TexUvWhitePixel;
  draw_list->PrimWriteVtx(center, uv, col_in);
  for (int n = 0; n < count; n++)
    draw_list->PrimWriteVtx(draw_list->_Path[n], uv, col_out);

  for (int n = 0; n < count; n++) {
    draw_list->PrimWriteIdx((ImDrawIdx)(vtx_base));
    draw_list->PrimWriteIdx((ImDrawIdx)(vtx_base + 1 + n));
    draw_list->PrimWriteIdx((ImDrawIdx)(vtx_base + 1 + ((n + 1) % count)));
  }
  draw_list->_Path.Size = 0;
}

bool c_overlay::in_screen(const ImVec2 &pos) {
  return !(pos.x > window_width || pos.x < 0 || pos.y > window_height ||
           pos.y < 0);
}
