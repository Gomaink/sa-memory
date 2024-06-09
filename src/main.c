#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <windows.h>
#include "process_utils.h"
#include "memory_utils.h"
#include "addresses.h"
#include "zones.h"
#include "player_properties.h"

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
    printf("O jogador tem $%d de dinheiro.\n", playerMoney);

    int playerWanted = ReadInt(hProcess, WANTED_ADDRESS);
    printf("O jogador tem %d niveis de procurado.\n", playerWanted);

    float playerHealth = GetPlayerHealth(hProcess);
    float playerMaxHealth = GetPlayerMaxHealth(hProcess);
    printf("A vida do jogador e: %.2f/%.2f\n", playerHealth, playerMaxHealth);

    float playerArmour = GetPlayerArmour(hProcess);
    printf("O colete do jogador e: %.2f\n", playerArmour);

    float x = ReadFloat(hProcess, X_ADDRESS);
    float y = ReadFloat(hProcess, Y_ADDRESS);
    float z = ReadFloat(hProcess, Z_ADDRESS);
    printf("A localizacao do jogador e: X = %.2f, Y = %.2f, Z = %.2f\n", x, y, z);

    printf("A localizacao do jogador e: %s\n", getPlayerZone(x, y, z));

    CloseHandle(hProcess);
    return 0;
}