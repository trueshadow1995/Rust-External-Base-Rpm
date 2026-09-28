#pragma once

// Windows / DirectX
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>
#include <d3d11.h>
#include <dwmapi.h>
#include <dcomp.h>
#include <tlhelp32.h>
#include <Psapi.h>

// Standard Library
#include <vector>
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <atomic>
#include <thread>
#include <mutex>
#include <cstdint>
#include <cstdio>
#include <memory>
#include <unordered_map>

// ImGui
#include "../src/Libs/ImGui/imgui.h"

// Memory (RPM)
#include "../src/Driver/Rpm.h"

// Offsets
#include "../src/Offsets/Offsets.h"
