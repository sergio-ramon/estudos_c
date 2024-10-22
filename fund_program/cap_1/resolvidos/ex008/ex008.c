/*
    Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento
*/

#include <stdio.h>

int main() {
    float deposito, juros, rendimento, total;

    printf("Digite o valor do deposito: ");
    scanf("%f%*c", &deposito);
    printf("Digite a taxa de juros: ");
    scanf("%f%*c", &juros);

    juros = juros / 100;
    rendimento = deposito * juros;
    total = deposito + rendimento;

    printf("Total apos rendimenot: %.2f", total);

    return 0;
}