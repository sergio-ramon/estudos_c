/*
    Nada melhor do que uma máquina para realizar tarefas 
    repetitivas, evitando esforçohumano desnecessário. Assim sendo, 
    elabore um programa que leia uma frase e o número de vezes que 
    deseja imprimi-la.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    char palavra[30];
    int vezes;

    printf("Digite a palavra: ");
    scanf("%s%*c", palavra);
    printf("Quantas vezes desja repetir a frase? ");
    scanf("%d%*c", &vezes);

    for (int i = 0; i < vezes; i++) {
        printf("%s\n", palavra);
    }

    return 0;
}