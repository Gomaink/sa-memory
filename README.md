# SA Memory

Este é um projeto simples desenvolvido por diversão e para testar conhecimentos. Consiste em um programa que lê informações do jogo GTA: San Andreas em execução.

O programa conta com funções que retornam:
- Vida/Máximo de vida
- Colete
- Dinheiro
- Nível de procurado
- Localização (X, Y, Z e/ou Bairro)

## Compilação e Execução
- Clone este repositório para o seu sistema local.

- Certifique-se de que o GTA: San Andreas está em execução.

- Abra um terminal na pasta do projeto.

- Compile o código usando um compilador C/C++ compatível. Por exemplo, com o GCC:

`gcc -o src/main src/main.c src/process_utils.c src/memory_utils.c src/addresses.c src/zones.c src/player_properties.c -lpsapi`

- Execute o programa compilado:

`./src/main.exe`
