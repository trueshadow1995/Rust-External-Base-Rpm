#pragma once
#include <cstdint>
#include <mutex>
#include <string>
#include <vector>
#include "../World2Screen/Math/Math.h"


struct CachedEntity {
  uintptr_t address;
  std::string className;
  uint32_t prefabID;
  Vector3 position;
};

class EntityCache {
public:
  void Set(std::vector<CachedEntity> fresh) {
    std::lock_guard<std::mutex> lock(m_mutex);
    m_entities = std::move(fresh);
  }

  std::vector<CachedEntity> Get() {
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_entities;
  }

private:
  std::mutex m_mutex;
  std::vector<CachedEntity> m_entities;
};
