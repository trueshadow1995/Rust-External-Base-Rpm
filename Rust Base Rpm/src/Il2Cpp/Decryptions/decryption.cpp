#pragma once
#include "decryption.h"
#include "../src/offsets/Offsets.h"
#include "../../src/Driver/Rpm.h"

namespace Decryption {

// auto generated decrypt: cl_active_item

uint64_t cl_active_item(uint64_t encrypted) {
    uint32_t* chunks = reinterpret_cast<uint32_t*>(&encrypted);

    for (int i = 0; i < 2; i++) {
        uint32_t v = chunks[i];
        v          = (v >> 0x17) | (v << 0x9);  // ROR 23
        v += 0x7303DEF;
        v ^= 0x7177D799;
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

    uint32_t* chunks = reinterpret_cast<uint32_t*>(&value);

    for (int i = 0; i < 2; i++) {
        uint32_t v = chunks[i];
        v          = (v << 0x10) | (v >> 0x10);  // ROL 16
        v += 0x28668909;
        v ^= 0xB67D1881;
        v += 0x5AE7B7EE;
        chunks[i] = v;
    }

    return Il2CppHandle::Il2cppGetHandle(value, gameAssemblyBase);
}

// auto generated decrypt: entity_list

uintptr_t decrypt_entity_list(uintptr_t address, uintptr_t gameAssemblyBase) {
    uint64_t value = Driver->Read<uint64_t>(address + 0x18);
    if (!value)
        return 0;

    uint32_t* chunks = reinterpret_cast<uint32_t*>(&value);

    for (int i = 0; i < 2; i++) {
        uint32_t v = chunks[i];
        v          = (v << 0xb) | (v >> 0x15);  // ROL 11
        v += 0x5212012c;
        v         = (v << 0x12) | (v >> 0xe);   // ROL 18
        chunks[i] = v;
    }

    return Il2CppHandle::Il2cppGetHandle(value, gameAssemblyBase);
}

// auto generated decrypt: player_eyes

uintptr_t decrypt_player_eyes(uintptr_t address, uintptr_t gameAssemblyBase) {
    uint64_t value = Driver->Read<uint64_t>(address + 0x18);
    if (!value)
        return 0;

    uint32_t* chunks = reinterpret_cast<uint32_t*>(&value);

    for (int i = 0; i < 2; i++) {
        uint32_t v = chunks[i];
        v += 0xc4421db7;
        v = (v << 0xf) | (v >> 0x11);          // ROL 15
        v ^= 0x8F17AD9A;
        v         = (v << 0x6) | (v >> 0x1a);  // ROL 6
        chunks[i] = v;
    }

    return Il2CppHandle::Il2cppGetHandle(value, gameAssemblyBase);
}

// auto generated decrypt: player_inventory

uintptr_t DecryptPlayerInventory(uintptr_t address,
                                 uintptr_t gameAssemblyBase) {
    uint64_t value = Driver->Read<uint64_t>(address + 0x18);
    if (!value)
        return 0;

    uint32_t* chunks = reinterpret_cast<uint32_t*>(&value);

    for (int i = 0; i < 2; i++) {
        uint32_t v = chunks[i];
        v          = (v << 0x1c) | (v >> 0x4);  // ROL 28
        v ^= 0x65B9B225;
        v += 0x2F961B1E;
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

}  // namespace Decryption
