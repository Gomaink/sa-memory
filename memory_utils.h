#ifndef MEMORY_UTILS_H
#define MEMORY_UTILS_H

#include <windows.h>

int ReadInt(HANDLE hProcess, DWORD address);
float ReadFloat(HANDLE hProcess, DWORD address);

#endif 
