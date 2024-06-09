#include <stdbool.h>
#include "player_properties.h"
#include "addresses.h"

float GetPlayerHealth(HANDLE hProcess) {
    DWORD baseAddress;
    ReadProcessMemory(hProcess, (LPVOID)PLAYER_BASE_ADDRESS, &baseAddress, sizeof(DWORD), NULL);
    DWORD healthAddress = baseAddress + HEALTH_ADDRESS;
    float healthValue;
    ReadProcessMemory(hProcess, (LPVOID)healthAddress, &healthValue, sizeof(float), NULL);
    return healthValue;
}

float GetPlayerMaxHealth(HANDLE hProcess) {
    DWORD baseAddress;
    ReadProcessMemory(hProcess, (LPVOID)PLAYER_BASE_ADDRESS, &baseAddress, sizeof(DWORD), NULL);
    DWORD healthAddress = baseAddress + MAX_HEALTH_ADDRESS;
    float healthValue;
    ReadProcessMemory(hProcess, (LPVOID)healthAddress, &healthValue, sizeof(float), NULL);
    return healthValue;
}

float GetPlayerArmour(HANDLE hProcess) {
    DWORD baseAddress;
    ReadProcessMemory(hProcess, (LPVOID)PLAYER_BASE_ADDRESS, &baseAddress, sizeof(DWORD), NULL);
    DWORD armourAddress = baseAddress + ARMOUR_ADDRESS;
    float armourValue;
    ReadProcessMemory(hProcess, (LPVOID)armourAddress, &armourValue, sizeof(float), NULL);
    return armourValue;
}

bool IsPlayerInVehicle(HANDLE hProcess) {
    DWORD baseAddress;
    ReadProcessMemory(hProcess, (LPVOID)PLAYER_BASE_ADDRESS, &baseAddress, sizeof(DWORD), NULL);
    
    DWORD currentVehiclePtr;
    ReadProcessMemory(hProcess, (LPVOID)IN_VEHICLE_ADDRESS, &currentVehiclePtr, sizeof(DWORD), NULL);
    
    return currentVehiclePtr != 0;
}