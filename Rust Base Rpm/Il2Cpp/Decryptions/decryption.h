#pragma once
#include <cstdint>

#include "../GcHandle/il2cpp.h"

namespace Decryption {

uintptr_t decrypt_client_entities(uintptr_t address,
                                  uintptr_t gameAssemblyBase);

uintptr_t decrypt_entity_list(uintptr_t address, uintptr_t gameAssemblyBase);

uint64_t cl_active_item(uint64_t encrypted);

uintptr_t decrypt_player_eyes(uintptr_t address, uintptr_t gameAssemblyBase);

uintptr_t DecryptPlayerInventory(uintptr_t address, uintptr_t gameAssemblyBase);

uint32_t encrypt_fov(uint32_t val);
uint32_t decrypt_fov(uint32_t val);

} // namespace Decryption
