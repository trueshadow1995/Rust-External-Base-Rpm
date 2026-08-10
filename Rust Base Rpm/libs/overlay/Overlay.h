#pragma once

/*
 overlay.hpp self-owned DirectComposition overlay.
 Creates a top-level layered WS_POPUP window at screen size, attaches a
 DirectComposition target + visual to it, and drives that visual with an
 IDXGISwapChain1 built via CreateSwapChainForComposition. Renders
 transparently over whatever's on the desktop.

 Main.cpp lifecycle:
   overlay = new c_overlay();
   overlay->begin_frame();
   draw ESP/menu
   overlay->end_frame();
   delete overlay;
*/

#include <d3d11.h>
#include <dcomp.h>
#include <dxgi1_2.h>
#include <string>
#include <windows.h>

#include "../imgui/imgui.h"
#include "../imgui/imgui_impl_dx11.h"
#include "../imgui/imgui_impl_win32.h"
#include "../imgui/imgui_internal.h"

#ifndef OVERLAY_H_
#define OVERLAY_H_

/*
 Hybrid-GPU laptops: force the discrete GPU. NVIDIA reads NvOptimusEnablement,
 AMD reads AmdPowerXpressRequestHighPerformance. Both must be dllexport'd from
 the exe for the drivers to see them.
*/
extern "C" {
__declspec(dllexport) inline DWORD NvOptimusEnablement = 0x00000001;
__declspec(dllexport) inline int AmdPowerXpressRequestHighPerformance = 1;
}

class c_overlay {
public:
  c_overlay();
  ~c_overlay();

  // Per-frame split so main.cpp can draw ESP/menu between begin and end.
  // Returns false if the message pump saw WM_QUIT.
  bool begin_frame();
  void end_frame();

  bool is_ready() const { return d3d_device != nullptr; }
  HWND get_hwnd() const { return window_handle; }

  // (IconLoader for belt icons, App::Brand for the sidebar PNG).
  ID3D11Device *get_device() const { return d3d_device; }

  // Drawing helpers  -> used by ESP/menu code.
  void init_draw_list();
  void crosshair(const FLOAT aSize, ImU32 color);
  void box(const ImVec2 &pos, const FLOAT width, const FLOAT height,
           ImU32 color, const FLOAT line_width = 1.f);
  void boxfilled(const ImVec2 &pos, const FLOAT width, const FLOAT height,
                 ImU32 color);
  void line(const ImVec2 &point1, const ImVec2 point2, ImU32 color,
            const FLOAT line_width = 1.f);
  void circle(const ImVec2 &point, const FLOAT radius, ImU32 color,
              const FLOAT width = 1.f);
  void text(const ImVec2 &pos, const std::string &text,
            ImU32 color = ImColor(240, 248, 255), bool outline = true,
            bool background = true);
  void radial_gradient(const ImVec2 &center, float radius, ImU32 col_in,
                       ImU32 col_out);
  bool in_screen(const ImVec2 &pos);

  // Public state read by main.cpp.
  FLOAT window_width = 0.f;
  FLOAT window_height = 0.f;
  bool exit = false;      // set true when WM_QUIT observed
  bool menu_open = false; // toggled by main.cpp's key handler
  ImDrawList *draw_list = nullptr;

private:
  template <typename T> void safe_release(T *&p) {
    if (p) {
      p->Release();
      p = nullptr;
    }
  }

  bool create_window();
  bool init_device();
  void dest_device();
  void init_imgui();
  void dest_imgui();
  void init_render_target();
  void dest_render_target();
  void sync_click_through();

  static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

  HWND window_handle = nullptr;
  ATOM wnd_class_atom = 0;
  ID3D11Device *d3d_device = nullptr;
  ID3D11DeviceContext *device_context = nullptr;
  IDXGISwapChain1 *swap_chain = nullptr;
  ID3D11RenderTargetView *render_target_view = nullptr;
  IDCompositionDevice *dcomp_device = nullptr;
  IDCompositionTarget *dcomp_target = nullptr;
  IDCompositionVisual *dcomp_visual = nullptr;

  // Reflects the last-applied click-through state so we don't hammer
  // SetWindowLongPtr every frame.
  bool click_through = true;
};

// Global instance
inline c_overlay *overlay = nullptr;

#endif
