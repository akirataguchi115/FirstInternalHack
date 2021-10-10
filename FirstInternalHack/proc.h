#pragma once

#include <vector>
#include <windows.h>
#include <TlHelp32.h>
#include "pch.h"

DWORD GetProcId(const wchar_t* procName);

uintptr_t GetModuleBaseAddress(DWORD procId, const wchar_t* modName);