#include "Menu.h"
#include "../Driver/Rpm.h"
#include "../Features/Visuals/Esp/Esp.h"
#include "../src/Pch/Pch.h"

extern uint64_t g_gameBase;
extern uint64_t g_unityBase;
extern Memory *Driver;

namespace menu {
void Render() {
  ImGui::SetNextWindowSize(ImVec2(400, 300), ImGuiCond_FirstUseEver);
  ImGui::Begin("Rust Base RPM");

  ImGui::Text("ESP");
  ImGui::Checkbox("Players", &esp::players);

  ImGui::Dummy(ImVec2(0, 10));
  ImGui::Dummy(ImVec2(0, 10));
  ImGui::Dummy(ImVec2(0, 10));

  ImGui::Text("Resources");
  ImGui::Checkbox("Resources", &esp::resources);

  ImGui::End();
}
}
