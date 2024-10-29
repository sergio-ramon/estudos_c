/*
    Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência. A procedência obedece à tabela a seguir.
        1               Sul
        2               Norte
        3               Leste
        4               Oeste
        5 ou 6          Nordeste
        7 ou 8 ou 9     Sudeste
        10 a 20         Centro-oeste
        21 a 30         Noroeste
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");

    int cod;
    float prc;

    printf("Digite o código do produto: ");
    scanf("%d%*c", &cod);
    printf("Digite o preço do produto: ");
    scanf("%f%*c", &prc);

    switch (cod) {
        case 1:
            printf("\nProcedência: Sul");
            break;
        case 2:
            printf("\nProcedência: Norte");
            break;
        case 3:
            printf("\nProcedência: Leste");
            break;
        case 4:
            printf("\nProcedência: Oeste");
            break;
        default:
            if (cod == 5 || cod == 6) {
                printf("\nProcedência: Nordeste");
            } else if (cod >= 7 || cod <= 9) {
                printf("\nProcedência: Sudeste");
            } else if (cod <= 20) {
                printf("\nProcedência: Centro-oeste");
            } else if (cod <= 30) {
                printf("\nProcedência: Nordeste");
            }
            break;
    }

    

    return 0;
}