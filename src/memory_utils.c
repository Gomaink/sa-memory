#include "memory_utils.h"


int ReadInt(HANDLE hProcess, DWORD address) {
    int value = 0;
    ReadProcessMemory(hProcess, (LPVOID)address, &value, sizeof(value), NULL);
    return value;
}


float ReadFloat(HANDLE hProcess, DWORD address) {
    float value = 0;
    ReadProcessMemory(hProcess, (LPVOID)address, &value, sizeof(value), NULL);
    return value;
}
