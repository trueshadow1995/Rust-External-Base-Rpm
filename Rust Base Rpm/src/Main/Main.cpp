#pragma comment(lib, "winmm.lib")
#include <timeapi.h>
#include "../GetEntities/Entities.h"
#include "../libs/overlay/Overlay.h"
#include "../src/Menu/Menu.h"
#include "../src/Features/Visuals/Esp/Esp.h"

// #define STB_IMAGE_IMPLEMENTATION
// used for logos and icons n ( textures)

uint64_t         g_gameBase  = 0;
uint64_t         g_unityBase = 0;
BaseNetworkable* g_entities  = nullptr;

static bool Init() {
    timeBeginPeriod(1);

    Driver = new Memory();
    printf("[+] RPM ready\n");
    // get rust client
    printf("[*] Waiting for RustClient.exe...\n");
    while (!Driver->Attach("RustClient.exe"))
        std::this_thread::sleep_for(std::chrono::seconds(10));
    printf("[+] RustClient.exe PID: %u\n", Driver->GetProcessId());

    // get gameassembly.dll
    printf("[*] Waiting for GameAssembly.dll...\n");
    while (!(g_gameBase = Driver->GetModuleBase("GameAssembly.dll")))
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    printf("[+] GameAssembly.dll: 0x%llX\n", g_gameBase);

    // get unityplayer.dll
    printf("[*] Waiting for UnityPlayer.dll...\n");
    while (!(g_unityBase = Driver->GetModuleBase("UnityPlayer.dll")))
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    printf("[+] UnityPlayer.dll: 0x%llX\n", g_unityBase);

    // start entity system
    g_entities = new BaseNetworkable(g_gameBase);
    printf("[+] Entity system enabled\n");

    return true;
}

// Loop menu shit
static void HandleMenuToggle() {
    static bool keyDown = false;
    if (GetAsyncKeyState(VK_INSERT) & 0x8000) {
        if (!keyDown) {
            if (overlay)
                overlay->menu_open = !overlay->menu_open;
            keyDown = true;
        }
    } else {
        keyDown = false;
    }
}
// main loop for logic and rendering
static void Loop() {
    static auto s_lastFrameTime = std::chrono::high_resolution_clock::now();
    static auto s_lastPidCheck  = std::chrono::steady_clock::now();
    // while the overlay is running  and the target process
    while (overlay && !overlay->exit) {
        auto nowSteady = std::chrono::steady_clock::now();
        if (std::chrono::duration<double>(nowSteady - s_lastPidCheck).count() >=
            1.0) {
            s_lastPidCheck = nowSteady;
            // stop if we dont have game
            if (!Driver->IsProcessRunning()) {
                printf("[!] Game closed\n");
                break;
            }
        }
        // handle the menu toggles off and on
        HandleMenuToggle();
        // begin rendering everthing u want to render goes below
        if (!overlay->begin_frame())
            continue;

        // render esp inside rendering loop
        esp::Render();

        // if menu is opened, render it
        if (overlay->menu_open)
            menu::Render();

        overlay->end_frame();
    }
}

int main() {
    // gets the modules and attaches
    if (!Init()) {
        printf("Failed to init\n");
        return 1;
    }
    // create overlay
    overlay = new c_overlay();
    if (!overlay->is_ready()) {
        printf("Failed to setup overlay\n");
        delete overlay;
        return 1;
    }

    // start our loop with our "feature logic"
    Loop();

    // delete heap allocated objects
    delete g_entities;
    delete overlay;
    delete Driver;
    return 0;
}
