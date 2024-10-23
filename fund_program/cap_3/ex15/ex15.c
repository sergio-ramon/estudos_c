/*
    João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de João.
*/

#include <stdio.h>

int main() {
    float salario, conta1, conta2;

    printf("Digite o salario: ");
    scanf("%f%*c", &salario);
    printf("Digite o valor da primeira conta: ");
    scanf("%f%*c", &conta1);
    printf("Digite o valor da segunda conta: ");
    scanf("%f%*c", &conta2);

    conta1 = conta1 + (conta1 * 2/100);
    conta2 = conta2 + (conta2 * 2/100);
    salario = salario - conta1 - conta2;

    printf("Vai sobrar: %.2f", salario);

    return 0;
}