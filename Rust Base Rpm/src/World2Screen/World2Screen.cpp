#pragma once
#include "World2Screen.h"
#include "Math/Math.h"

uintptr_t W2S::g_CachedMatrixAddr = 0;
Matrix4x4 W2S::g_ViewMatrix = {};
std::chrono::steady_clock::time_point W2S::g_LastUpdateTime =
    std::chrono::steady_clock::now();

float W2S::g_ScreenW = (float)GetSystemMetrics(SM_CXSCREEN);
float W2S::g_ScreenH = (float)GetSystemMetrics(SM_CYSCREEN);

extern uint64_t g_gameBase;

bool W2S::UpdateMatrixAddress() {
  if (!Driver || !Driver->IsAttached() || !g_gameBase) {
    return false;
  }

  // Camera chain: [gameBase+typeinfo] -> +static_fields -> +mainCamera ->
  // +m_CachedPtr -> +0x2FC = matrix.
  g_CachedMatrixAddr = Driver->FollowPointerPath(
      g_gameBase,
      {MainCamera_Offsets::typeinfo, MainCamera_Offsets::static_fields,
       MainCamera_Offsets::mainCamera, Object_Offsets::m_CachedPtr, 0x2FC});

  return g_CachedMatrixAddr >= 0x10000;
}

bool W2S::ReadMatrixFromMemory() {
  if (!g_CachedMatrixAddr)
    return false;

  Matrix4x4 tmp = Driver-> Read<Matrix4x4>(g_CachedMatrixAddr);


  if (tmp._44 == 0.0f && tmp._11 == 0.0f)
    return false;

  g_ViewMatrix = tmp;
  return true;
}

bool W2S::PrepareMatrix() {
  if (!Driver|| !Driver -> IsAttached())
    return false;

  auto now = std::chrono::steady_clock::now();
  bool stale = g_CachedMatrixAddr == 0 ||
               std::chrono::duration_cast<std::chrono::milliseconds>(
                   now - g_LastUpdateTime)
                       .count() >= 100;

  if (stale) {
    if (!UpdateMatrixAddress())
      return false;
    g_LastUpdateTime = now;
  }

  if (ReadMatrixFromMemory())
    return true;

  if (!UpdateMatrixAddress())
    return false;
  g_LastUpdateTime = now;
  return ReadMatrixFromMemory();
}

bool W2S::WorldToScreen(const Vector3 &worldPos, Vector2 &screenPos) {
  const Matrix4x4 &m = g_ViewMatrix;
  float w =
      m._14 * worldPos.x + m._24 * worldPos.y + m._34 * worldPos.z + m._44;

  if (w < 0.001f)
    return false;

  float x =
      m._11 * worldPos.x + m._21 * worldPos.y + m._31 * worldPos.z + m._41;
  float y =
      m._12 * worldPos.x + m._22 * worldPos.y + m._32 * worldPos.z + m._42;

  screenPos.x = (g_ScreenW * 0.5f) * (1.0f + x / w);
  screenPos.y = (g_ScreenH * 0.5f) * (1.0f - y / w);

  if (screenPos.x < -1000.0f || screenPos.x > g_ScreenW + 1000.0f ||
      screenPos.y < -1000.0f || screenPos.y > g_ScreenH + 1000.0f)
    return false;

  return true;
}
