#pragma once
#include <chrono>
#include "Math/Math.h"

class W2S {
public:
  static Matrix4x4 *FindViewMatrix() { return &g_ViewMatrix; }
  static bool PrepareMatrix();
  static bool WorldToScreen(const Vector3 &worldPos, Vector2 &screenPos);
  static void ResetCache() { g_CachedMatrixAddr = 0; }

  static float g_ScreenW;
  static float g_ScreenH;

private:
  static uintptr_t g_CachedMatrixAddr;
  static Matrix4x4 g_ViewMatrix;
  static std::chrono::steady_clock::time_point g_LastUpdateTime;

  static constexpr int UPDATE_INTERVAL_MS = 0;
  static constexpr size_t MATRIX_SIZE = sizeof(Matrix4x4);

  static bool UpdateMatrixAddress();
  static bool ReadMatrixFromMemory();
};
