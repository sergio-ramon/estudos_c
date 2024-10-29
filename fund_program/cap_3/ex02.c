/*
    Faça um programa que receba três números, calcule e mostre a multiplicação desses números.
*/

#include <stdio.h>

int main() {
    int num1, num2, num3, res;

    printf("Digite o primeiro numero: ");
    scanf("%d%*c", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d%*c", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d%*c", &num3);

    res = num1 * num2 * num3;

    printf("O resultado de %d * %d * %d = %d", num1, num2, num3, res);

    return 0;
}