/*
    Faça um programa que receba dois números e mostre o menor.
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d%*c", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d%*c", &num2);

    if (num1 < num2) {
        printf("%d", num1);
    } else {
        printf("%d", num2);
    }

    return 0;
}