#pragma once
#include "../Threading/Threading.h"
#include "EntityCaching.h"
#include <atomic>
#include <cstdint>
#include <string>
#include <vector>
#include <World2Screen/Math/Math.h>


struct EntityPos {
  uintptr_t address = 0;
  Vector3 position{};
  uintptr_t transform = 0;
  bool transformValid = false;
  bool destroyed = false;
  uintptr_t parentEntity = 0;
  std::string name;
};


class BaseNetworkable {
public:
  explicit BaseNetworkable(uintptr_t gameAssembly);
  ~BaseNetworkable() = default;

  uintptr_t GetEntities() const {
    return m_entitiesPtr.load(std::memory_order_acquire);
  }

  std::vector<CachedEntity> Snapshot() { return m_cache.Get(); }

  uintptr_t GetLocalPlayer() const {
    return m_localPlayer.load(std::memory_order_acquire);
  }

private:
  void Tick();

  uintptr_t GetInstance();
  uintptr_t GetClientEntities();
  std::vector<uintptr_t> FetchEntityList();
  uintptr_t ReadLocalPlayer();

  std::string ReadIl2CppString(uintptr_t address);
  std::string GetObjectClassName(uintptr_t entity);

  uint32_t GetPrefabID(uintptr_t entity);
  uint32_t GetTeamID(uintptr_t entity);
  Vector3 GetPosition(uintptr_t entity);

  uintptr_t gameAssemblyBase;
  std::atomic<uintptr_t> m_entitiesPtr;
  std::atomic<uintptr_t> m_localPlayer;
  uintptr_t m_lastEntitiesPtr;
  EntityCache m_cache;
  PollingThread m_worker;
};
