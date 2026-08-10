#pragma once
#include <Psapi.h>
#include <TlHelp32.h>
#include <Windows.h>

#include <cstdint>
#include <string>
#include <vector>

#pragma comment(lib, "psapi.lib")

class Memory {
private:
  HANDLE m_processHandle;
  DWORD m_processId;
  std::string m_processName;
  bool m_isAttached;

  // Helper functions
  DWORD GetProcessIdByName(const std::string &processName);
  bool OpenProcessHandle(DWORD pid);
  void EnableDebugPrivileges();

public:
  Memory();
  ~Memory();

  // Process management
  bool Attach(const std::string &processName);
  bool AttachByPid(DWORD pid);
  void Detach();
  bool IsAttached() const { return m_isAttached; }
  bool IsProcessRunning();

  // Getters
  DWORD GetProcessId() const { return m_processId; }
  HANDLE GetProcessHandle() const { return m_processHandle; }
  std::string GetProcessName() const { return m_processName; }

  // Module operations
  uint64_t GetModuleBase(const std::string &moduleName);
  uint64_t GetModuleSize(const std::string &moduleName);
  std::vector<std::string> GetLoadedModules();

  // Memory reading
  template <typename T> T Read(uint64_t address);

  bool ReadBool(uint64_t address);
  int8_t ReadInt8(uint64_t address);
  int16_t ReadInt16(uint64_t address);
  int32_t ReadInt32(uint64_t address);
  int64_t ReadInt64(uint64_t address);
  uint8_t ReadUInt8(uint64_t address);
  uint16_t ReadUInt16(uint64_t address);
  uint32_t ReadUInt32(uint64_t address);
  uint64_t ReadUInt64(uint64_t address);
  float ReadFloat(uint64_t address);
  double ReadDouble(uint64_t address);

  std::vector<uint8_t> ReadBytes(uint64_t address, size_t size);
  std::string ReadString(uint64_t address, size_t maxLength = 256);
  std::wstring ReadWString(uint64_t address, size_t maxLength = 256);

  // Memory writing
  template <typename T> bool Write(uint64_t address, T value);

  bool WriteBool(uint64_t address, bool value);
  bool WriteInt8(uint64_t address, int8_t value);
  bool WriteInt16(uint64_t address, int16_t value);
  bool WriteInt32(uint64_t address, int32_t value);
  bool WriteInt64(uint64_t address, int64_t value);
  bool WriteUInt8(uint64_t address, uint8_t value);
  bool WriteUInt16(uint64_t address, uint16_t value);
  bool WriteUInt32(uint64_t address, uint32_t value);
  bool WriteUInt64(uint64_t address, uint64_t value);
  bool WriteFloat(uint64_t address, float value);
  bool WriteDouble(uint64_t address, double value);

  bool WriteBytes(uint64_t address, const std::vector<uint8_t> &bytes);
  bool WriteString(uint64_t address, const std::string &str);
  bool WriteWString(uint64_t address, const std::wstring &wstr);

  // Pointer operations
  uint64_t ReadPointer(uint64_t address);
  uint64_t FollowPointerPath(uint64_t baseAddress,
                             const std::vector<uint64_t> &offsets);

  template <typename T>
  T ReadPointerChain(uint64_t baseAddress,
                     const std::vector<uint64_t> &offsets);

  // Memory protection
  bool ChangeProtection(uint64_t address, size_t size, DWORD newProtection,
                        DWORD &oldProtection);
  bool RestoreProtection(uint64_t address, size_t size, DWORD oldProtection);
  DWORD GetProtection(uint64_t address);

  // Memory allocation
  uint64_t AllocateMemory(size_t size,
                          DWORD protection = PAGE_EXECUTE_READWRITE);
  bool FreeMemory(uint64_t address, size_t size);

  // Pattern scanning
  std::vector<uint64_t> PatternScan(const std::vector<uint8_t> &pattern,
                                    const std::vector<bool> &mask);
  std::vector<uint64_t> PatternScanModule(const std::string &moduleName,
                                          const std::vector<uint8_t> &pattern,
                                          const std::vector<bool> &mask);

  template <typename T> std::vector<uint64_t> ScanValue(T value);

  // Memory info
  MEMORY_BASIC_INFORMATION QueryMemory(uint64_t address);
  bool IsReadable(uint64_t address);
  bool IsWritable(uint64_t address);
  bool IsExecutable(uint64_t address);
};

// Global instance
extern Memory *g_Memory;

// Template implementations
template <typename T> T Memory::Read(uint64_t address) {
  T buffer{};
  SIZE_T bytesRead;

  if (ReadProcessMemory(m_processHandle, (LPCVOID)address, &buffer, sizeof(T),
                        &bytesRead)) {
    if (bytesRead == sizeof(T)) {
      return buffer;
    }
  }

  return T{};
}

template <typename T> bool Memory::Write(uint64_t address, T value) {
  SIZE_T bytesWritten;

  if (WriteProcessMemory(m_processHandle, (LPVOID)address, &value, sizeof(T),
                         &bytesWritten)) {
    return (bytesWritten == sizeof(T));
  }

  return false;
}

template <typename T>
T Memory::ReadPointerChain(uint64_t baseAddress,
                           const std::vector<uint64_t> &offsets) {
  uint64_t address = FollowPointerPath(baseAddress, offsets);
  if (address != 0) {
    return Read<T>(address);
  }
  return T{};
}

template <typename T> std::vector<uint64_t> Memory::ScanValue(T value) {
  std::vector<uint64_t> results;

  SYSTEM_INFO sysInfo;
  GetSystemInfo(&sysInfo);

  uint64_t currentAddress = (uint64_t)sysInfo.lpMinimumApplicationAddress;
  uint64_t maxAddress = (uint64_t)sysInfo.lpMaximumApplicationAddress;

  while (currentAddress < maxAddress) {
    MEMORY_BASIC_INFORMATION mbi;
    if (!VirtualQueryEx(m_processHandle, (LPCVOID)currentAddress, &mbi,
                        sizeof(mbi))) {
      break;
    }

    if (mbi.State == MEM_COMMIT && !(mbi.Protect & PAGE_GUARD) &&
        !(mbi.Protect & PAGE_NOACCESS)) {
      std::vector<uint8_t> buffer(mbi.RegionSize);
      SIZE_T bytesRead;

      if (ReadProcessMemory(m_processHandle, mbi.BaseAddress, buffer.data(),
                            mbi.RegionSize, &bytesRead)) {
        for (size_t i = 0; i <= bytesRead - sizeof(T); i++) {
          T *pValue = (T *)&buffer[i];
          if (*pValue == value) {
            results.push_back((uint64_t)mbi.BaseAddress + i);
          }
        }
      }
    }

    currentAddress += mbi.RegionSize;
  }

  return results;
}