#include "Entities.h"
#include "../Driver/Rpm.h"
#include "../Offsets/Offsets.h"
#include "../Il2Cpp/Decryptions/decryption.h"
#include <chrono>
#include <cstdio>

extern uint64_t g_gameBase;
// Init for threading
BaseNetworkable::BaseNetworkable(uintptr_t gameAssembly)
    : gameAssemblyBase(gameAssembly), m_entitiesPtr(0), m_localPlayer(0),
      m_lastEntitiesPtr(0) {
    m_worker.Start([this] { Tick(); }, std::chrono::milliseconds(0));
    printf("[+] Entity Thread started\n");
}
uintptr_t BaseNetworkable::GetInstance() {
    uintptr_t Instance = Driver->Read<uintptr_t>(
        gameAssemblyBase + BaseNetworkable_Static_Offsets::typeinfo);
    if (!Instance || Instance < 0x10000)
        return 0;

    return Driver->Read<uintptr_t>(Instance +
                                   BaseNetworkable_Static_Offsets::static_fields);
}

uintptr_t BaseNetworkable::GetClientEntities() {
    uintptr_t instance = GetInstance();
    if (!instance)
        return 0;

    uintptr_t clientEntities = Driver->Read<uintptr_t>(
        instance + BaseNetworkable_Static_Offsets::clientEntities);
    if (!clientEntities)
        return 0;

    uintptr_t decryptedEntities =
        Decryption::decrypt_client_entities(clientEntities, g_gameBase);
    // printf("[+] Decrypted client entities: 0x%llX\n", decryptedEntities);
    if (!decryptedEntities)
        return 0;

    uintptr_t addr = Driver->Read<uintptr_t>(
        decryptedEntities + BaseNetworkable_EntityRealm_Offsets::entityList);
    if (!addr)
        return 0;

    uintptr_t entPtr = Decryption::decrypt_entity_list(addr, g_gameBase);
    // printf("[+] Decrypted entity list: 0x%llX\n", entPtr);

    uintptr_t vals =
        Driver->Read<uintptr_t>(entPtr + System_ListDictionary_Offsets::vals);
    if (!vals || vals < 10000)
        return 0;

    return vals;
}

std::vector<uintptr_t> BaseNetworkable::FetchEntityList() {
    uintptr_t BufferList = GetClientEntities();
    if (!BufferList)
        return {};

    uintptr_t EntityArray =
        Driver->Read<uintptr_t>(BufferList + System_BufferList_Offsets::buffer);
    int32_t count =
        Driver->Read<int32_t>(BufferList + System_BufferList_Offsets::count);

    if (!EntityArray || count <= 0 || count > 50000)
        return {};

    std::vector<uintptr_t> entities;
    entities.reserve(count);
    for (int i = 0; i < count; i++) {
        uintptr_t entity =
            Driver->Read<uintptr_t>(EntityArray + i * sizeof(uintptr_t));
        if (entity && entity >= 0x10000)
            entities.push_back(entity);
    }
    return entities;
}

struct CharBuf {
    char data[128];
};

std::string BaseNetworkable::GetObjectClassName(uintptr_t entity) {
    if (!entity || entity < 0x10000)
        return {};
    const auto klass = Driver->Read<uintptr_t>(entity);
    if (!klass || klass < 0x10000)
        return {};
    const auto namePtr =
        Driver->Read<uintptr_t>(klass + Object_Offsets::m_CachedPtr);
    if (!namePtr || namePtr < 0x10000)
        return {};

    CharBuf cb   = Driver->Read<CharBuf>(namePtr);
    cb.data[127] = '\0';
    char c0      = cb.data[0];
    if (!((c0 >= 'A' && c0 <= 'Z') || (c0 >= 'a' && c0 <= 'z')))
        return {};
    int len = 0;
    while (len < 127 && cb.data[len])
        ++len;
    if (len < 2 || len > 100)
        return {};
    return std::string(cb.data, len);
}

uint32_t BaseNetworkable::GetPrefabID(uintptr_t entity) {
    if (!entity || entity < 0x10000)
        return 0;
    return Driver->Read<uint32_t>(entity + BaseNetworkable_Offsets::prefabID);
}

Vector3 BaseNetworkable::GetPosition(uintptr_t entity) {
    uintptr_t nativeComponent =
        Driver->Read<uintptr_t>(entity + Object_Offsets::m_CachedPtr);
    if (!nativeComponent || nativeComponent < 0x10000)
        return {};

    uintptr_t gameObject = Driver->Read<uintptr_t>(
        nativeComponent + Unity_Component_Native::m_GameObject);
    if (!gameObject || gameObject < 0x10000)
        return {};

    uintptr_t componentData = Driver->Read<uintptr_t>(
        gameObject + Unity_GameObject_Native::m_Component);
    if (!componentData || componentData < 0x10000)
        return {};

    uintptr_t transform = Driver->Read<uintptr_t>(componentData + 0x08);
    if (!transform || transform < 0x10000)
        return {};

    uintptr_t hierarchy =
        Driver->Read<uintptr_t>(transform + Unity_Transform_Native::m_Hierarchy);
    if (!hierarchy || hierarchy < 0x10000)
        return {};

    return Driver->Read<Vector3>(
        hierarchy + Unity_TransformHierarchy_Native::m_LocalPosition);
}

uintptr_t BaseNetworkable::ReadLocalPlayer() {
    return Driver->ReadPointerChain<uintptr_t>(
        gameAssemblyBase, {LocalPlayer_Static_Offsets::typeinfo, LocalPlayer_Static_Offsets::static_fields, LocalPlayer_Static_Offsets::Entity});
    printf("[+] Local player address: 0x%llX\n", m_localPlayer.load());
}