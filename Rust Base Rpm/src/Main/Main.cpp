#pragma comment(lib, "winmm.lib")
#include <timeapi.h>

extern Memory *g_Memory;
uint64_t g_gameBase = 0;
uint64_t g_unityBase = 0;

// #define STB_IMAGE_IMPLEMENTATION // used for logos and icons n ( textures) 
#include "../libs/overlay/Overlay.h"
#include "../src/Menu/Menu.h"

static bool Init() {
  timeBeginPeriod(1);

  g_Memory = new Memory();
  printf("[+] RPM ready\n");
  //get rustclient
  printf("[*] Waiting for RustClient.exe...\n");
  while (!g_Memory->Attach("RustClient.exe"))
    std::this_thread::sleep_for(std::chrono::seconds(10));
  printf("[+] RustClient.exe PID: %u\n", g_Memory->GetProcessId());
  // get gameassembly.dll
  printf("[*] Waiting for GameAssembly.dll...\n");
  while (!(g_gameBase = g_Memory->GetModuleBase("GameAssembly.dll")))
    std::this_thread::sleep_for(std::chrono::milliseconds(5));
  printf("[+] GameAssembly.dll: 0x%llX\n", g_gameBase);
  // get unityplayer.dll
  printf("[*] Waiting for UnityPlayer.dll...\n");
  while (!(g_unityBase = g_Memory->GetModuleBase("UnityPlayer.dll")))
    std::this_thread::sleep_for(std::chrono::milliseconds(5));

  printf("[+] UnityPlayer.dll: 0x%llX\n", g_unityBase);

  // g_entities = new BaseNetworkable(g_gameBase); later 
  // printf("[+] Entity system enabled\n");

  return true;
}

// Loop menu shit
static void HandleMenuToggle() {
  static bool keyDown = false;
  if (GetAsyncKeyState(VK_INSERT) & 0x8000) {
    if (!keyDown) {
      if (overlay) overlay->menu_open = !overlay->menu_open;
      keyDown = true;
    }
  } else {
    keyDown = false;
  }
}

static void Loop() {
  static auto s_lastFrameTime = std::chrono::high_resolution_clock::now();
  static auto s_lastPidCheck = std::chrono::steady_clock::now();

  while (overlay && !overlay->exit) { 
    auto nowSteady = std::chrono::steady_clock::now();
    if (std::chrono::duration<double>(nowSteady - s_lastPidCheck).count() >=
        1.0) {
      s_lastPidCheck = nowSteady;
      if (!g_Memory->IsProcessRunning()) {
        printf("[!] Game closed\n");
        break;
      }
    }

    HandleMenuToggle();
    if (!overlay->begin_frame())
      continue;
      
    if (overlay->menu_open)
      menu::Render();

    overlay->end_frame();
  }
}

int main() {
  if (!Init()) {
      printf("Failed to init\n");
      return 1;
  }

  overlay = new c_overlay();
  if (!overlay->is_ready()) {
      printf("Failed to setup overlay\n");
      delete overlay;
      return 1;
  }

  Loop();

  delete overlay;
  delete g_Memory;
  return 0;
}
