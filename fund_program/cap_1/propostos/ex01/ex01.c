/*
    Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo.
*/

#include <stdio.h>

int main() {
    int num1, num2, res;

    printf("Digite o primeiro numero: ");
    scanf("%d%*c", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d%*c", &num2);

    res = num1 - num2;

    printf("Resultado de %d - %d = %d", num1, num2, res);

    return 0;
}