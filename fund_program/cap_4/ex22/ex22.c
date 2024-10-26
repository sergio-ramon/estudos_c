/*
    Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre em qual grupo de risco essa pessoa se encaixa.
        IDADE                                    PESO
                            Até 60      Entre 60 e 90       Acima de 90
        Menores que 20      9           8                   7
        De 20 a 50          6           5                   4
        Maiores que 50      3           2                   1
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");

    int idade;
    float peso;

    printf("Digite a idade: ");
    scanf("%d%*c", &idade);
    printf("Digite o peso: ");
    scanf("%f%*c", &peso);

    if (idade > 0 && peso > 0) {
        if (idade <= 20) {
            if (peso <= 60) {
                printf("Grupo: 9");
            } else if (peso <= 90) {
                printf("Grupo: 8");
            } else {
                printf("Grupo: 7");
            }
        } else if (idade <= 50) {
            if (peso <= 60) {
                printf("Grupo: 6");
            } else if (peso <= 90) {
                printf("Grupo: 5");
            } else {
                printf("Grupo: 4");
            }
        } else {
            if (peso <= 60) {
                printf("Grupo: 3");
            } else if (peso <= 90) {
                printf("Grupo: 2");
            } else {
                printf("Grupo: 1");
            }
        }
    } else {
        printf("Valores inválidos");
    }

    return 0;
}