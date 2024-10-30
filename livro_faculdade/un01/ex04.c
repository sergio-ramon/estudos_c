/*
    Escreva um programa que receba dois números, calcule e apresente o resultado do primeiro número elevado ao segundo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    float num1, num2, res;

    printf("Digite o primeiro número: ");
    scanf("%f%*c", &num1);
    printf("Digite o segundo número: ");
    scanf("%f%*c", &num2);

    res = pow(num1, num2);

    printf("\nO resultado de %.2f elevado a %.2f é: %.2f", num1, num2, res);

    return 0;
}