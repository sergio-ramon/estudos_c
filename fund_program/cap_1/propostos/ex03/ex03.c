/*
    Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo  segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar com validações.
*/

#include <stdio.h>

int main() {
    float num1, num2, res;

    printf("Digite o primeiro numero: ");
    scanf("%f%*c", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f%*c", &num2);

    res = num1 / num2;

    printf("O resultado de %5.2f / %5.2f = %5.2f", num1, num2, res);

    return 0;
}