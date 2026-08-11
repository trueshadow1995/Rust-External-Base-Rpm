#include "EntityCaching.h"
#include "../Driver/Rpm.h"
#include "Entities.h"
#include <cstdio>

void BaseNetworkable::Tick() {
  if (!Driver || !Driver->IsAttached())
    return;

  uintptr_t entities = GetClientEntities();
  if (!entities)
    return;

  if (entities != m_lastEntitiesPtr) {
    m_lastEntitiesPtr = entities;
    m_entitiesPtr.store(entities, std::memory_order_release);
  }

  m_localPlayer.store(ReadLocalPlayer(), std::memory_order_release);

  std::vector<CachedEntity> list;
  for (uintptr_t address : FetchEntityList()) {
    std::string className = GetObjectClassName(address);
    if (className.empty())
      continue;

    CachedEntity entity;
    entity.address   = address;
    entity.className = className;
    entity.prefabID  = GetPrefabID(address);
    entity.position  = GetPosition(address);

    // turn that on to see the class names and prefab ids of the entities
    //printf("[*] 0x%llX %s prefab=%u pos=(%.1f, %.1f, %.1f)\n", entity.address,
    //       entity.className.c_str(), entity.prefabID, entity.position.x,
    //       entity.position.y, entity.position.z);

    list.push_back(entity);
  }
  m_cache.Set(std::move(list));
}
