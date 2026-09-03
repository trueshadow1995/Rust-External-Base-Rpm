#include "decryption.h"
#include "../src/offsets/Offsets.h"
#include "../../src/Driver/Rpm.h"

extern Memory* Driver;

namespace Decryption {

uint64_t cl_active_item(uint64_t encrypted) {
  uint32_t* chunks = reinterpret_cast<uint32_t*>(&encrypted);

  for (int i = 0; i < 2; i++) {
    uint32_t v = chunks[i];
    v = (v >> 0x1) | (v << 0x1f);  // ROR 1
    v += 0x1F2ABE36;
    v ^= 0x3788ADB3;
    chunks[i] = v;
  }

  return encrypted;
}

// auto generated decrypt: client_entities

uintptr_t decrypt_client_entities(uintptr_t address,
                                  uintptr_t gameAssemblyBase) {
  uint64_t value = Driver->Read<uint64_t>(address + 0x18);
  if (!value) return 0;

  uint32_t* chunks = reinterpret_cast<uint32_t*>(&value);

  for (int i = 0; i < 2; i++) {
    uint32_t v = chunks[i];
    v ^= 0xDD40083B;
    v += 0xa9b665a8;
    v ^= 0x74FA9C91;
    chunks[i] = v;
  }

  return Il2CppHandle::Il2cppGetHandle(value, gameAssemblyBase);
}

// auto generated decrypt: entity_list

uintptr_t decrypt_entity_list(uintptr_t address, uintptr_t gameAssemblyBase) {
  uint64_t value = Driver->Read<uint64_t>(address + 0x18);
  if (!value) return 0;

  uint32_t* chunks = reinterpret_cast<uint32_t*>(&value);

  for (int i = 0; i < 2; i++) {
    uint32_t v = chunks[i];
    v += 0x3F41EF1E;
    v = (v << 0xf) | (v >> 0x11);  // ROL 15
    v += 0xc46447c5;
    v = (v << 0xf) | (v >> 0x11);  // ROL 15
    chunks[i] = v;
  }

  return Il2CppHandle::Il2cppGetHandle(value, gameAssemblyBase);
}

// auto generated decrypt: player_eyes

uintptr_t decrypt_player_eyes(uintptr_t address, uintptr_t gameAssemblyBase) {
  uint64_t value = Driver->Read<uint64_t>(address + 0x18);
  if (!value) return 0;

  uint32_t* chunks = reinterpret_cast<uint32_t*>(&value);

  for (int i = 0; i < 2; i++) {
    uint32_t v = chunks[i];
    v += 0x5B4DF5EB;
    v ^= 0x110654CE;
    v = (v << 0x4) | (v >> 0x1c);  // ROL 4
    v += 0x83412945;
    chunks[i] = v;
  }

  return Il2CppHandle::Il2cppGetHandle(value, gameAssemblyBase);
}

// auto generated decrypt: player_inventory

uintptr_t decrypt_player_inventory(uintptr_t address,
                                   uintptr_t gameAssemblyBase) {
  uint64_t value = Driver->Read<uint64_t>(address + 0x18);
  if (!value) return 0;

  uint32_t* chunks = reinterpret_cast<uint32_t*>(&value);

  for (int i = 0; i < 2; i++) {
    uint32_t v = chunks[i];
    v ^= 0xAC06348A;
    v = (v << 0x14) | (v >> 0xc);  // ROL 20
    v += 0x5a4e87e2;
    v = (v >> 0x8) | (v << 0x18);  // ROR 8
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
