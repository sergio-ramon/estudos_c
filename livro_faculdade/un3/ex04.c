/*
    É muito comum que programas tenham de implementar 
    funcionalidades para identificar características específicas e 
    realizar operações sobre um conjunto de dados. Dessa forma, 
    faça um programa que apresenta a soma de todos os números 
    inteiros ímpares entre 200 e 500.
*/

#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 200; i <= 500; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("\nSoma dos numeros impares de 200 a 500: %d", soma);

    return 0;
}