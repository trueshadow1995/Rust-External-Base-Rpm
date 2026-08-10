#include "il2cpp.h"
#include "../../src/Driver/Rpm.h"
#include <cstdint>

extern Memory* g_Memory;

namespace Il2CppHandle {

// Replaces the pre-Unity-6 gc_handles[]
// table-indexed formula entirely.
//
// Layout of the slab page (per IDA on Unity 6 GameAssembly.dll):
//   page_base = handle & ~0x1FFF
//   page_base + 0x10 : pointer to allocation bitmap (uint32_t[] per 32 slots)
//   page_base + 0x1C : slot count (uint32_t)
//   page_base + 0x20 : type byte (0/1 = weak-ish, >1 = normal; >=4 = invalid)
//   page_base + 0x28 : start of slot data; slots are uint64_t each
//
// slot_index = (handle - page_base - 0x28) >> 3
// object_ptr = read64(page_base + 8 * (slot_index + 5))   // +5 = offset past
// header in qwords For type <= 1, the stored value is bitwise-inverted.

uintptr_t Il2cppGetHandle(uint64_t ObjectHandleID, uintptr_t gameAssemblyBase) {
  if (!ObjectHandleID)
    return 0;

  uint64_t page_base = ObjectHandleID & 0xFFFFFFFFFFFFE000ULL;

  uint8_t type = g_Memory->Read<uint8_t>(page_base + 0x20);
  if (type >= 4)
    return 0;

  int64_t slot = (int64_t)(ObjectHandleID - page_base - 0x28) >> 3;

  uint32_t size = g_Memory->Read<uint32_t>(page_base + 0x1C);
  if ((uint32_t)slot >= size)
    return 0;

  uint64_t bitmap_ptr = g_Memory->Read<uint64_t>(page_base + 0x10);
  uint32_t bitmask =
      g_Memory->Read<uint32_t>(bitmap_ptr + 4 * ((uint32_t)slot >> 5));
  if (!((bitmask >> (slot & 0x1F)) & 1))
    return 0;

  uint64_t entry =
      g_Memory->Read<uint64_t>(page_base + 8 * ((uint32_t)slot + 5));

  if (type > 1)
    return (uintptr_t)entry;
  else
    return (uintptr_t)~entry;
}

} // namespace Il2CppHandle
