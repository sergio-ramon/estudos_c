/*
    Construa um programa que, dado um número inteiro, informe o mês
    correspondente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    int num;

    printf("Digite um número inteiro de 1 a 7: ");
    scanf("%d%*c", &num);

    switch (num) {
        case 1:
            printf("\nSegunda-feira");
            break;
        case 2:
            printf("\nTerça-feira");
            break;
        case 3:
            printf("\nQuarta-feira");
            break;
        case 4:
            printf("\nQuinta-feira");
            break;
        case 5:
            printf("\nSexta-feira");
            break;
        case 6:
            printf("\nSábado");
            break;
        case 7:
            printf("\nDomingo");
            break;
        default:
            printf("\nValor inválido");
    }

    return 0;
}