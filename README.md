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
### Prerequisites

- Make sure that the GTA: San Andreas version is 1.0 and the game is running.
- You need to have CMake installed on your system. You can download it here.
- On Windows, you need to have Visual Studio or MinGW installed.
- On Linux, you need GCC or Clang installed.

### Steps to compile on Windows and Linux
#### 1. Clone this repository to your local machine.

```bash
git clone https://your-repository.git
cd sa-memory
```

#### 2. Create the build directory:

- Create a new build folder inside the project:
```bash
mkdir build
cd build
```
#### 3. Run CMake to configure the project:

- CMake will automatically detect the correct compiler and generate the appropriate build files.
```bash
cmake ..
```
#### 4. Build the project:

- On Windows:
```bash
cmake --build . --config Release
```
- On Linux:
```bash
make
```

#### 5. Run the compiled program:

- On Windows, the generated program will be samemory.exe, and on Linux, it will be samemory (without the .exe suffix).
#### On Windows:

```sh
./samemory.exe
```
#### On Linux:

```sh
./samemory
```

## Memory Address Documentation

Special thanks to <a href="https://gtamods.com/wiki/Memory_Addresses_(SA)">gtamods</a>, where I found the memory addresses for GTA: San Andreas.
