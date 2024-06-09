# SA Memory

This is a simple project developed for fun and to test knowledge. It consists of a program that reads information from the game GTA: San Andreas while it's running.

The program features functions that return:

- Health/Maximum health
- Armor
- Money
- Current weapon
- Wanted level
- Player state (In a vehicle or on foot)
- Location (X, Y, Z and/or District)

## Compilation and Execution
- Clone this repository to your local system.
- Ensure that the version of GTA: San Andreas is 1.0 and it is running.
- Open a terminal in the project folder.
- Compile the code using a compatible C/C++ compiler. For example, with GCC:

`gcc -o src/main src/main.c src/process_utils.c src/memory_utils.c src/addresses.c src/zones.c src/player_properties.c src/weapons.c src/vehicles.c -lpsapi`

- Execute the compiled program:

`./src/main.exe`

## Memory addresses documentation
I'd like to give credits to the website <a href="https://gtamods.com/wiki/Memory_Addresses_(SA)">gtamods</a>, where I found the memory addresses for GTA.
