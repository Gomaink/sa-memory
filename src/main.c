#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <windows.h>
#include "process_utils.h"
#include "addresses.h"
#include "zones.h"
#include "player_data.h"
#include "weapons.h"
#include "vehicles.h"

int main() {
    const char* processName = "gta_sa.exe";

    DWORD processId = GetProcessIdByName(processName);
    if (processId == 0) {
        fprintf(stderr, "GTA: San Andreas is not running.\n");
        return 1;
    }

    HANDLE hProcess = OpenProcess(PROCESS_VM_READ, FALSE, processId);
    if (hProcess == NULL) {
        fprintf(stderr, "Failed to open GTA San Andreas.\n");
        return 1;
    }

    float x, y, z;
    GetPlayerPosition(hProcess, &x, &y, &z);
    int playerMoney = GetPlayerMoney(hProcess);
    int playerWanted = GetPlayerWantedLevel(hProcess);
    int playerWeapon = GetPlayerWeapon(hProcess);
    int playerVehicle = GetPlayerVehicle(hProcess);
    float playerHealth = GetPlayerHealth(hProcess);
    float playerMaxHealth = GetPlayerMaxHealth(hProcess);
    float playerArmour = GetPlayerArmour(hProcess);
    bool playerInVehicle = IsPlayerInVehicle(hProcess);

    
    printf("Player information:\n\
        Health: %.2f/%.2f\n\
        Armour: %.2f\n\
        Money: %d\n\
        Weapon: %s\n\
        Wanted Level: %d\n\
        Player is %s%s\n\
        Location: %s (X = %.2f, Y = %.2f, Z = %.2f)\n",
        playerHealth, playerMaxHealth,
        playerArmour,
        playerMoney,
        GetWeaponName(playerWeapon),
        playerWanted,
        playerInVehicle ? "in a vehicle, " : "on foot.",
        playerInVehicle ? GetVehicleName(playerVehicle) : "",
        getPlayerZone(x, y, z), x, y, z);

    CloseHandle(hProcess);
    return 0;
}