#ifndef PLAYER_PROPERTIES_H
#define PLAYER_PROPERTIES_H

#include <windows.h>
#include <stdbool.h>

float GetPlayerHealth(HANDLE hProcess);
float GetPlayerMaxHealth(HANDLE hProcess);
float GetPlayerArmour(HANDLE hProcess);
bool IsPlayerInVehicle(HANDLE hProcess);

#endif 
