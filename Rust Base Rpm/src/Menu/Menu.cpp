#include "Menu.h"
#include "../Driver/Rpm.h"
#include "Pch.h"

extern uint64_t g_gameBase;
extern uint64_t g_unityBase;
extern Memory *g_Memory;

namespace menu {
void Render() {
  ImGui::SetNextWindowSize(ImVec2(400, 300), ImGuiCond_FirstUseEver);
  ImGui::Begin("Rust Base RPM");

  ImGui::Text("Status: %s", (g_Memory && g_Memory->IsAttached())
                                ? "Attached"
                                : "Not Attached");
  ImGui::Separator();

  if (g_Memory && g_Memory->IsAttached()) {
    ImGui::Text("PID: %u", g_Memory->GetProcessId());
    ImGui::Text("GameAssembly.dll: 0x%llX", g_gameBase);
    ImGui::Text("UnityPlayer.dll:  0x%llX", g_unityBase);
  } else {
    ImGui::Text("Waiting for game...");
  }

  ImGui::End();
}
}
