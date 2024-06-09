#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <windows.h>
#include "process_utils.h"
#include "memory_utils.h"
#include "addresses.h"
#include "zones.h"
#include "player_properties.h"
#include "weapons.h"

int main() {
    const char* processName = "gta_sa.exe";

    DWORD processId = GetProcessIdByName(processName);
    if (processId == 0) {
        fprintf(stderr, "GTA: San Andreas nao esta em execução.\n");
        return 1;
    }

    HANDLE hProcess = OpenProcess(PROCESS_VM_READ, FALSE, processId);
    if (hProcess == NULL) {
        fprintf(stderr, "Falha ao abrir o GTA San Andreas.\n");
        return 1;
    }

    int playerMoney = ReadInt(hProcess, MONEY_ADDRESS);
    int playerWanted = ReadInt(hProcess, WANTED_ADDRESS);
    int playerWeapon = ReadInt(hProcess, WEAPON_ID_ADDRESS);
    float playerHealth = GetPlayerHealth(hProcess);
    float playerMaxHealth = GetPlayerMaxHealth(hProcess);
    float playerArmour = GetPlayerArmour(hProcess);
    float x = ReadFloat(hProcess, X_ADDRESS);
    float y = ReadFloat(hProcess, Y_ADDRESS);
    float z = ReadFloat(hProcess, Z_ADDRESS);


    printf("Informacoes do jogador:\n\
    Vida: %.2f/%.2f\n\
    Colete: %.2f\n\
    Dinheiro: %d\n\
    Arma atual: %s\n\
    Nivel de procurado: %d\n\
    Localizacao do jogador: %s (X = %.2f, Y = %.2f, Z = %.2f)\n", 
    playerHealth, playerMaxHealth,
    playerArmour,
    playerMoney,
    GetWeaponName(playerWeapon),
    playerWanted,
    getPlayerZone(x, y, z), x, y, z);

    CloseHandle(hProcess);
    return 0;
}