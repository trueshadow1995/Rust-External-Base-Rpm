#pragma once

#include <Windows.h>
#include <winternl.h>
#include <TlHelp32.h>
#include <string>
#include <vector>
#include <cstdint>
#include <cstring>
#include <cstdio>

namespace driver {

	inline constexpr auto ke_magic = 0x4040;

	enum : UINT32
	{
		kernel_id_write = 0U,
		kernel_id_read = 1U,
		kernel_id_module = 2U,
		kernel_id_get_process_exe_base = 3U,
		kernel_id_running = 4U,
		kernel_id_spoof_thread = 5U
	};

	typedef struct _kernel_request
	{
		UINT32 magic; // 0x4040
		UINT32 id;
		PVOID pid;
		PVOID peb;
		PVOID dst;
		PVOID out;
		ULONGLONG size;
		BOOLEAN physhical;
		LPCWSTR name;
	} kernel_request, * p_kernel_request;

	namespace detail {

		inline void* function;
		inline unsigned __int64 process_id;
		inline std::string process_name;
		inline ULONG64 process_base;
		inline IMAGE_DOS_HEADER dos_header;
		inline IMAGE_NT_HEADERS64 nt_headers;

		inline unsigned __int64 get_process_id(const char* process_name) {

			unsigned __int64 identifier = 0;

			HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
			if (!snapshot || snapshot == INVALID_HANDLE_VALUE)
				return 0;

			std::wstring wide_name(process_name, process_name + strlen(process_name));
			PROCESSENTRY32 pe32{ sizeof(PROCESSENTRY32) };
			if (Process32First(snapshot, &pe32))
				while (Process32Next(snapshot, &pe32))
					if (wcscmp(pe32.szExeFile, wide_name.c_str()) == 0) {
						identifier = pe32.th32ProcessID;
						break;
					}

			CloseHandle(snapshot);
			return identifier;
		}

		template<typename T>
		bool send(T& args)
		{
			__int64(*usermode_caller)(__int64, __int64, __int64, unsigned int, __int64, __int64, char, void*, void*) = 0;
			usermode_caller = (decltype(usermode_caller))detail::function;

			NTSTATUS status;
			usermode_caller(0x1337, 0x1337, 0x1337, 0x1337, 0x1337, 0x1337, 0, &args, &status);
			return (status == 0ull);
		}
	}

	inline bool running();

	template<typename T> inline T read(uint64_t address);
	template<typename T> inline T reada(uint64_t address, void* buffer, size_t size);
	template<typename T> inline bool write(uint64_t address, T value);

	inline uint64_t get_module_base_peb(const wchar_t* module_name);


	inline bool initialize(const std::string& process_name)
	{
		HMODULE win32u = LoadLibraryW(L"win32u.dll");
		LoadLibraryW(L"user32.dll");

		if (!win32u)
			return false;

		*(FARPROC*)&detail::function = GetProcAddress(win32u, "NtDCompositionRegisterThumbnailVisual");
		if (!detail::function)
			return false;

		detail::process_id = 0;
		detail::process_name = process_name;
		detail::process_base = 0;

		return running();
	}

	inline bool running()
	{
		_kernel_request message;
		message.magic = ke_magic;
		message.id = kernel_id_running;

		detail::send(message);
		return (message.out == (PVOID)0x2000);
	}

	inline bool read_memory(void* address, void* buffer, uint64_t size)
	{
		if (!address || !buffer || size <= 0) return false;

		_kernel_request message;
		message.magic = ke_magic;
		message.id = kernel_id_read;
		message.pid = reinterpret_cast<PVOID>(detail::process_id);
		message.dst = address;
		message.out = buffer;
		message.size = size;
		message.physhical = FALSE;

		return detail::send(message);
	}

	inline bool write_memory(void* address, void* buffer, std::uint64_t size)
	{
		if (!address || !buffer || size <= 0) return false;

		_kernel_request message;
		message.magic = ke_magic;
		message.id = kernel_id_write;
		message.pid = reinterpret_cast<PVOID>(detail::process_id);
		message.dst = address;
		message.out = buffer;
		message.size = size;
		message.physhical = FALSE;

		return detail::send(message);
	}

	inline uint64_t get_base_address()
	{
		_kernel_request message;
		message.magic = ke_magic;
		message.id = kernel_id_get_process_exe_base;
		message.pid = reinterpret_cast<PVOID>(detail::process_id);

		return (detail::send(message) ? (uint64_t)message.out : 0);
	}

	inline uint64_t get_module_base_toolhelp(const wchar_t* module_name)
	{
		if (!detail::process_id || !module_name)
			return 0;

		HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, (DWORD)detail::process_id);
		if (snapshot == INVALID_HANDLE_VALUE)
			return 0;

		MODULEENTRY32W me{ sizeof(MODULEENTRY32W) };
		uint64_t result = 0;
		if (Module32FirstW(snapshot, &me)) {
			do {
				if (_wcsicmp(me.szModule, module_name) == 0) {
					result = (uint64_t)me.modBaseAddr;
					break;
				}
			} while (Module32NextW(snapshot, &me));
		}
		CloseHandle(snapshot);
		return result;
	}

	inline uint64_t get_module_base(const wchar_t* module_name)
	{
		if (!module_name)
			return 0;

		uint64_t base = get_module_base_toolhelp(module_name);
		if (base)
			return base;

		_kernel_request message;
		message.magic = ke_magic;
		message.id = kernel_id_module;
		message.pid = reinterpret_cast<PVOID>(detail::process_id);
		message.dst = (PVOID)module_name;
		message.name = module_name;

		if (detail::send(message) && message.out)
			return (uint64_t)message.out;

		return get_module_base_peb(module_name);
	}

	inline uint64_t get_module_base_peb(const wchar_t* module_name)
	{
		if (!detail::process_id || !module_name)
			return 0;

		uint64_t peb = 0;
		HANDLE process = OpenProcess(PROCESS_QUERY_INFORMATION, FALSE, (DWORD)detail::process_id);
		if (process) {
			PROCESS_BASIC_INFORMATION pbi{};
			if (NT_SUCCESS(NtQueryInformationProcess(process, ProcessBasicInformation,
				&pbi, sizeof(pbi), nullptr)))
				peb = (uint64_t)pbi.PebBaseAddress;
			CloseHandle(process);
		}
		if (!peb)
			return 0;

		uint64_t ldr = read<uint64_t>(peb + 0x18);
		if (!ldr)
			return 0;

		uint64_t head = read<uint64_t>(ldr + 0x20);
		uint64_t cur = head;
		size_t guard = 0;

		do {
			if (!cur)
				return 0;

			uint64_t entry = cur - 0x10;
			uint64_t dllBase = read<uint64_t>(entry + 0x30);
			uint16_t nameLen = read<uint16_t>(entry + 0x58);
			uint64_t nameBuf = read<uint64_t>(entry + 0x60);

			if (dllBase && nameBuf && nameLen > 0 && nameLen < 512) {
				std::wstring name;
				name.resize(nameLen / 2);
				if (read_memory((void*)nameBuf, &name[0], nameLen)) {
					if (_wcsicmp(name.c_str(), module_name) == 0)
						return dllBase;
				}
			}

			cur = read<uint64_t>(entry + 0x10);
			if (++guard > 4096)
				break;
		} while (cur && cur != head);

		return 0;
	}

	inline bool is_process_running()
	{
		return detail::process_id != 0 &&
			detail::get_process_id(detail::process_name.c_str()) == detail::process_id;
	}

	template<typename T>
	inline T read(uint64_t address)
	{
		T buffer;
		bool result = read_memory((void*)address, &buffer, sizeof(buffer));
		return (result ? buffer : T());
	}
	template<typename T>
	inline T reada(uint64_t address, void* buffer, size_t size)
	{
		T value;
		memset(&value, 0, sizeof(T));
		bool result = read_memory((void*)address, &value, size);
		return (result ? value : T());
	}

	template<typename T>
	inline bool write(uint64_t address, T value)
	{
		bool result = write_memory((void*)address, &value, sizeof(value));
		return result;
	}

	inline uint64_t read_pointer(uint64_t address)
	{
		return read<uint64_t>(address);
	}

	inline uint64_t follow_pointer_path(uint64_t baseAddress,
		const std::vector<uint64_t>& offsets)
	{
		if (offsets.empty())
			return baseAddress;

		uint64_t address = baseAddress;
		for (size_t i = 0; i + 1 < offsets.size(); i++) {
			address = read_pointer(address + offsets[i]);
			if (address == 0)
				return 0;
		}
		return address + offsets.back();
	}

	template<typename T>
	inline T read_pointer_chain(uint64_t baseAddress,
		const std::vector<uint64_t>& offsets)
	{
		uint64_t address = follow_pointer_path(baseAddress, offsets);
		if (address != 0)
			return read<T>(address);
		return T{};
	}

	inline bool valid_address(uint64_t address)
	{
		return (address > 0 && address < INT64_MAX);
	}

	inline bool address_inside_process(uint64_t address)
	{
		return (address > 0 && address <= (detail::process_base + detail::nt_headers.OptionalHeader.SizeOfImage));
	}

	inline bool attach()
	{
		do
		{
			detail::process_id = detail::get_process_id(detail::process_name.c_str());

		} while (detail::process_id <= 0);

		printf("[KERNEL] PID = %llu\n", detail::process_id);

		do
		{
			detail::process_base = get_base_address();
			
		} while (detail::process_base <= 0);

		printf("[KERNEL] Baseaddress = 0x%llX\n", detail::process_base);

		do
		{
			detail::dos_header = read<IMAGE_DOS_HEADER>(detail::process_base);

                  printf("[KERNEL] DOS Header = 0x%llX\n",
                         detail::dos_header.e_lfanew);

         if (detail::dos_header.e_magic == IMAGE_DOS_SIGNATURE) {
          break;
         }

		} while (detail::dos_header.e_lfanew <= 0);

		detail::nt_headers = read<IMAGE_NT_HEADERS64>(detail::process_base + detail::dos_header.e_lfanew);
                printf("[KERNEL] SizeOfImage = 0x%llX\n",
                       detail::nt_headers.OptionalHeader.SizeOfImage);
	
		return (detail::process_id > 0 && detail::process_base > 0 && detail::dos_header.e_lfanew > 0 && detail::nt_headers.OptionalHeader.SizeOfImage > 0);
                printf("[KERNEL] DOS Header = 0x%llX\n",
                       detail::dos_header.e_lfanew);
	}
}