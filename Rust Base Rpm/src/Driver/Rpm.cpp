#include "Rpm.h"
//thanks cloudy

Memory *Driver = nullptr;

Memory::Memory()
    : m_processHandle(nullptr), m_processId(0), m_isAttached(false) {
  EnableDebugPrivileges();
}

Memory::~Memory() { Detach(); }

void Memory::EnableDebugPrivileges() {
  HANDLE token;
  TOKEN_PRIVILEGES privileges;

  if (OpenProcessToken(GetCurrentProcess(),
                       TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &token)) {
    LookupPrivilegeValueW(nullptr, SE_DEBUG_NAME,
                          &privileges.Privileges[0].Luid);
    privileges.PrivilegeCount = 1;
    privileges.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

    AdjustTokenPrivileges(token, FALSE, &privileges, sizeof(privileges),
                          nullptr, nullptr);
    CloseHandle(token);
  }
}

DWORD Memory::GetProcessIdByName(const std::string &processName) {
  DWORD pid = 0;
  HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

  if (snapshot != INVALID_HANDLE_VALUE) {
    PROCESSENTRY32W entry;
    entry.dwSize = sizeof(PROCESSENTRY32W);

    if (Process32FirstW(snapshot, &entry)) {
      do {

        std::wstring wProcessName(entry.szExeFile);
        std::string narrowName(wProcessName.begin(), wProcessName.end());

        if (_stricmp(narrowName.c_str(), processName.c_str()) == 0) {
          pid = entry.th32ProcessID;
          break;
        }
      } while (Process32NextW(snapshot, &entry));
    }
    CloseHandle(snapshot);
  }

  return pid;
}

bool Memory::OpenProcessHandle(DWORD pid) {
  m_processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
  return (m_processHandle != nullptr);
}

bool Memory::Attach(const std::string &processName) {
  if (m_isAttached) {
    Detach();
  }

  m_processId = GetProcessIdByName(processName);
  if (m_processId == 0) {
    return false;
  }

  if (!OpenProcessHandle(m_processId)) {
    return false;
  }

  m_processName = processName;
  m_isAttached = true;

  return true;
}

bool Memory::AttachByPid(DWORD pid) {
  if (m_isAttached) {
    Detach();
  }

  if (!OpenProcessHandle(pid)) {
    return false;
  }

  m_processId = pid;

  // Get process name
  wchar_t buffer[MAX_PATH];
  if (GetModuleFileNameExW(m_processHandle, nullptr, buffer, MAX_PATH)) {
    std::wstring fullPath(buffer);
    size_t pos = fullPath.find_last_of(L"\\/");
    std::wstring wProcessName =
        (pos != std::wstring::npos) ? fullPath.substr(pos + 1) : fullPath;
    m_processName = std::string(wProcessName.begin(), wProcessName.end());
  }

  m_isAttached = true;
  return true;
}

void Memory::Detach() {
  if (m_processHandle != nullptr) {
    CloseHandle(m_processHandle);
    m_processHandle = nullptr;
  }

  m_processId = 0;
  m_processName.clear();
  m_isAttached = false;
}

bool Memory::IsProcessRunning() {
  if (!m_isAttached || m_processHandle == nullptr) {
    return false;
  }

  DWORD exitCode;
  if (GetExitCodeProcess(m_processHandle, &exitCode)) {
    return (exitCode == STILL_ACTIVE);
  }

  return false;
}

uint64_t Memory::GetModuleBase(const std::string &moduleName) {
  HANDLE snapshot = CreateToolhelp32Snapshot(
      TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, m_processId);

  if (snapshot == INVALID_HANDLE_VALUE) {
    return 0;
  }

  MODULEENTRY32W entry;
  entry.dwSize = sizeof(MODULEENTRY32W);

  if (Module32FirstW(snapshot, &entry)) {
    do {
      // Convert wide string to narrow string for comparison
      std::wstring wModuleName(entry.szModule);
      std::string narrowName(wModuleName.begin(), wModuleName.end());

      if (_stricmp(narrowName.c_str(), moduleName.c_str()) == 0) {
        CloseHandle(snapshot);
        return (uint64_t)entry.modBaseAddr;
      }
    } while (Module32NextW(snapshot, &entry));
  }

  CloseHandle(snapshot);
  return 0;
}

uint64_t Memory::GetModuleSize(const std::string &moduleName) {
  HANDLE snapshot = CreateToolhelp32Snapshot(
      TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, m_processId);

  if (snapshot == INVALID_HANDLE_VALUE) {
    return 0;
  }

  MODULEENTRY32W entry;
  entry.dwSize = sizeof(MODULEENTRY32W);

  if (Module32FirstW(snapshot, &entry)) {
    do {
      // Convert wide string to narrow string for comparison
      std::wstring wModuleName(entry.szModule);
      std::string narrowName(wModuleName.begin(), wModuleName.end());

      if (_stricmp(narrowName.c_str(), moduleName.c_str()) == 0) {
        CloseHandle(snapshot);
        return entry.modBaseSize;
      }
    } while (Module32NextW(snapshot, &entry));
  }

  CloseHandle(snapshot);
  return 0;
}

std::vector<std::string> Memory::GetLoadedModules() {
  std::vector<std::string> modules;
  HANDLE snapshot = CreateToolhelp32Snapshot(
      TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, m_processId);

  if (snapshot == INVALID_HANDLE_VALUE) {
    return modules;
  }

  MODULEENTRY32W entry;
  entry.dwSize = sizeof(MODULEENTRY32W);

  if (Module32FirstW(snapshot, &entry)) {
    do {
      // Convert wide string to narrow string
      std::wstring wModuleName(entry.szModule);
      std::string narrowName(wModuleName.begin(), wModuleName.end());
      modules.push_back(narrowName);
    } while (Module32NextW(snapshot, &entry));
  }

  CloseHandle(snapshot);
  return modules;
}

// Reading functions
bool Memory::ReadBool(uint64_t address) { return Read<bool>(address); }
int8_t Memory::ReadInt8(uint64_t address) { return Read<int8_t>(address); }
int16_t Memory::ReadInt16(uint64_t address) { return Read<int16_t>(address); }
int32_t Memory::ReadInt32(uint64_t address) { return Read<int32_t>(address); }
int64_t Memory::ReadInt64(uint64_t address) { return Read<int64_t>(address); }
uint8_t Memory::ReadUInt8(uint64_t address) { return Read<uint8_t>(address); }
uint16_t Memory::ReadUInt16(uint64_t address) {
  return Read<uint16_t>(address);
}
uint32_t Memory::ReadUInt32(uint64_t address) {
  return Read<uint32_t>(address);
}
uint64_t Memory::ReadUInt64(uint64_t address) {
  return Read<uint64_t>(address);
}
float Memory::ReadFloat(uint64_t address) { return Read<float>(address); }
double Memory::ReadDouble(uint64_t address) { return Read<double>(address); }

// Writing functions
bool Memory::WriteBool(uint64_t address, bool value) {
  return Write<bool>(address, value);
}
bool Memory::WriteInt8(uint64_t address, int8_t value) {
  return Write<int8_t>(address, value);
}
bool Memory::WriteInt16(uint64_t address, int16_t value) {
  return Write<int16_t>(address, value);
}
bool Memory::WriteInt32(uint64_t address, int32_t value) {
  return Write<int32_t>(address, value);
}
bool Memory::WriteInt64(uint64_t address, int64_t value) {
  return Write<int64_t>(address, value);
}
bool Memory::WriteUInt8(uint64_t address, uint8_t value) {
  return Write<uint8_t>(address, value);
}
bool Memory::WriteUInt16(uint64_t address, uint16_t value) {
  return Write<uint16_t>(address, value);
}
bool Memory::WriteUInt32(uint64_t address, uint32_t value) {
  return Write<uint32_t>(address, value);
}
bool Memory::WriteUInt64(uint64_t address, uint64_t value) {
  return Write<uint64_t>(address, value);
}
bool Memory::WriteFloat(uint64_t address, float value) {
  return Write<float>(address, value);
}
bool Memory::WriteDouble(uint64_t address, double value) {
  return Write<double>(address, value);
}

std::vector<uint8_t> Memory::ReadBytes(uint64_t address, size_t size) {
  std::vector<uint8_t> buffer(size);
  SIZE_T bytesRead;

  if (ReadProcessMemory(m_processHandle, (LPCVOID)address, buffer.data(), size,
                        &bytesRead)) {
    buffer.resize(bytesRead);
    return buffer;
  }

  return std::vector<uint8_t>();
}

bool Memory::ReadBytesInto(uint64_t address, void *buffer, size_t size) {
  SIZE_T bytesRead = 0;
  return ReadProcessMemory(m_processHandle, (LPCVOID)address, buffer, size,
                           &bytesRead) &&
         bytesRead == size;
}

bool Memory::WriteBytes(uint64_t address, const std::vector<uint8_t> &bytes) {
  SIZE_T bytesWritten;
  return WriteProcessMemory(m_processHandle, (LPVOID)address, bytes.data(),
                            bytes.size(), &bytesWritten) &&
         (bytesWritten == bytes.size());
}

std::string Memory::ReadString(uint64_t address, size_t maxLength) {
  std::vector<char> buffer(maxLength);
  SIZE_T bytesRead;

  if (ReadProcessMemory(m_processHandle, (LPCVOID)address, buffer.data(),
                        maxLength, &bytesRead)) {
    for (size_t i = 0; i < bytesRead; i++) {
      if (buffer[i] == '\0') {
        return std::string(buffer.data(), i);
      }
    }
    return std::string(buffer.data(), bytesRead);
  }

  return std::string();
}

bool Memory::WriteString(uint64_t address, const std::string &str) {
  SIZE_T bytesWritten;
  return WriteProcessMemory(m_processHandle, (LPVOID)address, str.c_str(),
                            str.length() + 1, &bytesWritten);
}

std::wstring Memory::ReadWString(uint64_t address, size_t maxLength) {
  std::vector<wchar_t> buffer(maxLength);
  SIZE_T bytesRead;

  if (ReadProcessMemory(m_processHandle, (LPCVOID)address, buffer.data(),
                        maxLength * sizeof(wchar_t), &bytesRead)) {
    size_t charCount = bytesRead / sizeof(wchar_t);
    for (size_t i = 0; i < charCount; i++) {
      if (buffer[i] == L'\0') {
        return std::wstring(buffer.data(), i);
      }
    }
    return std::wstring(buffer.data(), charCount);
  }

  return std::wstring();
}

bool Memory::WriteWString(uint64_t address, const std::wstring &wstr) {
  SIZE_T bytesWritten;
  return WriteProcessMemory(m_processHandle, (LPVOID)address, wstr.c_str(),
                            (wstr.length() + 1) * sizeof(wchar_t),
                            &bytesWritten);
}

uint64_t Memory::ReadPointer(uint64_t address) {
#ifdef _WIN64
  return Read<uint64_t>(address);
#else
  return Read<uint32_t>(address);
#endif
}

uint64_t Memory::FollowPointerPath(uint64_t baseAddress,
                                   const std::vector<uint64_t> &offsets) {
  if (offsets.empty())
    return baseAddress;

  // For a chain {a, b, c} we want [[[base+a]+b]+c]. Deref each intermediate
  // (base+a), (that+b), then return the FINAL address (that+c) so the caller
  // decides whether to Read/Write it. Adding the offset first (instead of
  // dereferencing first) is the fix vs. the old version.
  uint64_t address = baseAddress;
  for (size_t i = 0; i + 1 < offsets.size(); i++) {
    address = ReadPointer(address + offsets[i]);
    if (address == 0)
      return 0;
  }
  return address + offsets.back();
}

bool Memory::ChangeProtection(uint64_t address, size_t size,
                              DWORD newProtection, DWORD &oldProtection) {
  return VirtualProtectEx(m_processHandle, (LPVOID)address, size, newProtection,
                          &oldProtection) != 0;
}

bool Memory::RestoreProtection(uint64_t address, size_t size,
                               DWORD oldProtection) {
  DWORD temp;
  return VirtualProtectEx(m_processHandle, (LPVOID)address, size, oldProtection,
                          &temp) != 0;
}

DWORD Memory::GetProtection(uint64_t address) {
  MEMORY_BASIC_INFORMATION mbi;
  if (VirtualQueryEx(m_processHandle, (LPCVOID)address, &mbi, sizeof(mbi))) {
    return mbi.Protect;
  }
  return 0;
}

uint64_t Memory::AllocateMemory(size_t size, DWORD protection) {
  LPVOID address = VirtualAllocEx(m_processHandle, nullptr, size,
                                  MEM_COMMIT | MEM_RESERVE, protection);
  return (uint64_t)address;
}

bool Memory::FreeMemory(uint64_t address, size_t size) {
  return VirtualFreeEx(m_processHandle, (LPVOID)address, size, MEM_RELEASE) !=
         0;
}

std::vector<uint64_t> Memory::PatternScan(const std::vector<uint8_t> &pattern,
                                          const std::vector<bool> &mask) {
  std::vector<uint64_t> results;

  if (pattern.size() != mask.size()) {
    return results;
  }

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
        for (size_t i = 0; i <= bytesRead - pattern.size(); i++) {
          bool found = true;

          for (size_t j = 0; j < pattern.size(); j++) {
            if (mask[j] && buffer[i + j] != pattern[j]) {
              found = false;
              break;
            }
          }

          if (found) {
            results.push_back((uint64_t)mbi.BaseAddress + i);
          }
        }
      }
    }

    currentAddress += mbi.RegionSize;
  }

  return results;
}

std::vector<uint64_t>
Memory::PatternScanModule(const std::string &moduleName,
                          const std::vector<uint8_t> &pattern,
                          const std::vector<bool> &mask) {
  std::vector<uint64_t> results;

  uint64_t moduleBase = GetModuleBase(moduleName);
  uint64_t moduleSize = GetModuleSize(moduleName);

  if (moduleBase == 0 || moduleSize == 0) {
    return results;
  }

  if (pattern.size() != mask.size()) {
    return results;
  }

  std::vector<uint8_t> buffer = ReadBytes(moduleBase, moduleSize);

  if (buffer.empty()) {
    return results;
  }

  for (size_t i = 0; i <= buffer.size() - pattern.size(); i++) {
    bool found = true;

    for (size_t j = 0; j < pattern.size(); j++) {
      if (mask[j] && buffer[i + j] != pattern[j]) {
        found = false;
        break;
      }
    }

    if (found) {
      results.push_back(moduleBase + i);
    }
  }

  return results;
}

MEMORY_BASIC_INFORMATION Memory::QueryMemory(uint64_t address) {
  MEMORY_BASIC_INFORMATION mbi = {0};
  VirtualQueryEx(m_processHandle, (LPCVOID)address, &mbi, sizeof(mbi));
  return mbi;
}

bool Memory::IsReadable(uint64_t address) {
  MEMORY_BASIC_INFORMATION mbi = QueryMemory(address);
  return (mbi.State == MEM_COMMIT && !(mbi.Protect & PAGE_GUARD) &&
          !(mbi.Protect & PAGE_NOACCESS));
}

bool Memory::IsWritable(uint64_t address) {
  MEMORY_BASIC_INFORMATION mbi = QueryMemory(address);
  return (mbi.State == MEM_COMMIT &&
          (mbi.Protect & PAGE_READWRITE || mbi.Protect & PAGE_WRITECOPY ||
           mbi.Protect & PAGE_EXECUTE_READWRITE ||
           mbi.Protect & PAGE_EXECUTE_WRITECOPY));
}

bool Memory::IsExecutable(uint64_t address) {
  MEMORY_BASIC_INFORMATION mbi = QueryMemory(address);
  return (mbi.State == MEM_COMMIT &&
          (mbi.Protect & PAGE_EXECUTE || mbi.Protect & PAGE_EXECUTE_READ ||
           mbi.Protect & PAGE_EXECUTE_READWRITE ||
           mbi.Protect & PAGE_EXECUTE_WRITECOPY));
}
