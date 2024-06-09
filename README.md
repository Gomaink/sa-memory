# SA Memory

Este é um projeto simples desenvolvido por diversão e para testar conhecimentos. Consiste em um programa que lê informações do jogo GTA: San Andreas em execução.

O programa conta com funções que retornam:
- Vida/Máximo de vida
- Colete
- Dinheiro
- Arma atual
- Nível de procurado
- Localização (X, Y, Z e/ou Bairro)

## Compilação e Execução
- Clone este repositório para o seu sistema local.

- Certifique-se de que a versão do GTA: San Andreas é a 1.0 e que está em execução.

- Abra um terminal na pasta do projeto.

- Compile o código usando um compilador C/C++ compatível. Por exemplo, com o GCC:

`gcc -o src/main src/main.c src/process_utils.c src/memory_utils.c src/addresses.c src/zones.c src/player_properties.c src/weapons.c -lpsapi`

- Execute o programa compilado:

`./src/main.exe`

## Documentação dos endereços de memória

Gostaria de deixar os créditos ao site <a href="https://gtamods.com/wiki/Memory_Addresses_(SA)">gtamods</a>, que foi por onde encontrei os endereços de memória do GTA.
