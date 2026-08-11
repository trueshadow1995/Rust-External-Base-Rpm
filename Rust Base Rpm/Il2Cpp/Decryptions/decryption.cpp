#include "decryption.h"
#include "../src/offsets/Offsets.h"
#include "../../src/Driver/Rpm.h"

extern Memory* Driver;

namespace Decryption {

uint64_t cl_active_item(uint64_t encrypted) {
  uint32_t *chunks = reinterpret_cast<uint32_t *>(&encrypted);

  for (int i = 0; i < 2; i++) {
    uint32_t v = chunks[i];
    v ^= 0xC7F486D7;
    v += 0x21AB371;
    v = (v >> 0x15) | (v << 0xb); // ROR 21
    v += 0x70077F50;
    chunks[i] = v;
  }

  return encrypted;
}

// auto generated decrypt: client_entities

uintptr_t decrypt_client_entities(uintptr_t address,
                                  uintptr_t gameAssemblyBase) {
  uint64_t value = Driver->Read<uint64_t>(address + 0x18);
  if (!value)
    return 0;

  uint32_t *chunks = reinterpret_cast<uint32_t *>(&value);

  for (int i = 0; i < 2; i++) {
    uint32_t v = chunks[i];
    v = (v << 0x1f) | (v >> 0x1); // ROL 31
    v += 0x8f7f58e3;
    v = (v << 0x1f) | (v >> 0x1); // ROL 31
    v ^= 0x64DE867F;
    chunks[i] = v;
  }

  return Il2CppHandle::Il2cppGetHandle(value, gameAssemblyBase);
}

// auto generated decrypt: entity_list

uintptr_t decrypt_entity_list(uintptr_t address, uintptr_t gameAssemblyBase) {
  uint64_t value = Driver->Read<uint64_t>(address + 0x18);
  if (!value)
    return 0;

  uint32_t *chunks = reinterpret_cast<uint32_t *>(&value);

  for (int i = 0; i < 2; i++) {
    uint32_t v = chunks[i];
    v += 0x374D4FA;
    v = (v << 0x1b) | (v >> 0x5); // ROL 27
    v ^= 0x5DD1D7B5;
    v += 0xef288be8;
    chunks[i] = v;
  }

  return Il2CppHandle::Il2cppGetHandle(value, gameAssemblyBase);
}

// auto generated decrypt: player_

uintptr_t decrypt_player_eyes(uintptr_t address, uintptr_t gameAssemblyBase) {
  uint64_t value = Driver->Read<uint64_t>(address + 0x18);
  if (!value)
    return 0;

  uint32_t *chunks = reinterpret_cast<uint32_t *>(&value);

  for (int i = 0; i < 2; i++) {
    uint32_t v = chunks[i];
    v = (v << 0x12) | (v >> 0xe); // ROL 18
    v += 0x1c8ee44a;
    v = (v << 0x10) | (v >> 0x10); // ROL 16
    v += 0x865742e4;
    chunks[i] = v;
  }
  return Il2CppHandle::Il2cppGetHandle(value, gameAssemblyBase);
}

uintptr_t DecryptPlayerInventory(uintptr_t address,
                                 uintptr_t gameAssemblyBase) {
  uint64_t value = Driver->Read<uint64_t>(address + 0x18);
  if (!value)
    return 0;

  uint32_t *chunks = reinterpret_cast<uint32_t *>(&value);

  for (int i = 0; i < 2; i++) {
    uint32_t v = chunks[i];
    v = (v << 0x1d) | (v >> 0x3); // ROL 29
    v ^= 0xE60CEE42;
    v = (v << 0x19) | (v >> 0x7); // ROL 25
    v += 0x5A393770;
    v += 0xFFC6C890;
    v = (v << 0x7) | (v >> 0x19); // ROL 7
    chunks[i] = v;
  }

  return Il2CppHandle::Il2cppGetHandle(value, gameAssemblyBase);
}

uint32_t encrypt_fov(uint32_t val) {
  val = (val >> 0x1E) | (val << 0x2);
  val ^= 0xBF1B783D;
  val = (val >> 0x1B) | (val << 0x5);
  return val;
}

uint32_t decrypt_fov(uint32_t val) {
  val = (val << 0x1B) | (val >> 0x5);
  val ^= 0xBF1B783D;
  val = (val << 0x1E) | (val >> 0x2);
  return val;
}

} // namespace Decryption
