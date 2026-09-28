#include "Esp.h"
#include "libs/overlay/Overlay.h"
#include "../../../GetEntities/Entities.h"
#include "../../../GetEntities/Prefabs/Prefabs.h"
#include "../../../World2Screen/World2Screen.h"


extern BaseNetworkable *g_entities;

namespace esp {

static void DrawPlayerBox(const Vector3 &feetWorld, const std::string &label) {

  if (feetWorld.x == 0.0f && feetWorld.y == 0.0f && feetWorld.z == 0.0f)
    return;

  Vector3 headWorld{feetWorld.x, feetWorld.y + 1.8f, feetWorld.z};

  Vector2 feet, head;
  if (!W2S::WorldToScreen(feetWorld, feet))
    return;
  if (!W2S::WorldToScreen(headWorld, head))
    return;

  float height = feet.y - head.y;
  if (height < 4.0f || height > 2000.0f)
    return;

  float width = height * 0.5f;
  if (width < 2.0f)
    return;

  ImDrawList *dl = ImGui::GetBackgroundDrawList();
  if (!dl)
    return;

  ImVec2 topLeft(feet.x - width * 0.5f, head.y);
  ImVec2 bottomRight(topLeft.x + width, topLeft.y + height);

  ImU32 color  = IM_COL32(255, 60, 60, 255);
  ImU32 shadow = IM_COL32(0, 0, 0, 200);

  dl->AddRect(topLeft, bottomRight, color, 0.0f, 0, 1.0f);

  if (!label.empty()) {
    ImVec2 textSize = ImGui::CalcTextSize(label.c_str());
    ImVec2 textPos(feet.x - textSize.x * 0.5f, head.y - textSize.y - 2.0f);
    dl->AddText(ImVec2(textPos.x + 1, textPos.y + 1), shadow, label.c_str());
    dl->AddText(textPos, color, label.c_str());
  }
}

void Render() {
  if (!overlay || !g_entities)
    return;
  if (!players && !resources)
    return;
  if (!W2S::PrepareMatrix())
    return;

  auto snapshot = g_entities->Snapshot();
  bool skippedLocal = false;
  for (const auto &e : snapshot) {
    bool isPlayer   = players && Prefabs::IsPlayer(e.prefabID);
    bool isResource = !isPlayer && resources && Prefabs::IsResource(e.prefabID);
    if (!isPlayer && !isResource)
      continue;

    if (isPlayer && !skippedLocal) {
      skippedLocal = true;
      continue;
    }

    std::string label = Prefabs::GetPrettyName(e.prefabID);
    if (label.empty())
      label = e.className;

    if (isPlayer) {
      DrawPlayerBox(e.position, label);
      continue;
    }

    //Resources just a label
    Vector2 screen;
    if (!W2S::WorldToScreen(e.position, screen))
      continue;
    overlay->text(ImVec2(screen.x, screen.y),
                  label, IM_COL32(80, 220, 120, 255));
  }
}

}
