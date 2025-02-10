# SA Memory

This is a simple project developed for fun and to test knowledge. It consists of a program that reads information from the running game GTA: San Andreas.

The program includes functions that return:
- Health / Max Health
- Armor
- Money
- Current Weapon
- Wanted Level
- Location (X, Y, Z, and/or Neighborhood)

## Functions:
```c
float GetPlayerHealth(HANDLE hProcess);
float GetPlayerMaxHealth(HANDLE hProcess);
float GetPlayerArmour(HANDLE hProcess);
float GetPlayerPosition(HANDLE hProcess, float* x, float* y, float* z);

int GetPlayerMoney(HANDLE hProcess);
int GetPlayerWantedLevel(HANDLE hProcess);
int GetPlayerWeapon(HANDLE hProcess);
int GetPlayerVehicle(HANDLE hProcess);

bool IsPlayerInVehicle(HANDLE hProcess);
```

## Compilation and Execution
- Clone this repository to your project.

- Make sure your version of GTA: San Andreas is 1.0 and is running.

- Open a terminal in the project folder.

- Compile the code using a compatible C/C++ compiler. For example, with GCC:

`gcc -o src/main src/main.c src/process_utils.c src/addresses.c src/zones.c src/player_data.c src/vehicles.c src/weapons.c -lpsapi`

- Run the compiled program:

`./src/main.exe`

## Memory Address Documentation

Special thanks to <a href="https://gtamods.com/wiki/Memory_Addresses_(SA)">gtamods</a>, where I found the memory addresses for GTA: San Andreas.
