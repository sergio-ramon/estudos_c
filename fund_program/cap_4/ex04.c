/*
    Faça um programa que receba três números e mostre o maior
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d%*c", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d%*c", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d%*c", &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d", num1);
        } else {
            printf("%d", num3);
        }
    } else {
        if (num2 > num3) {
            printf("%d", num2);
        } else {
            printf("%d", num3);
        }
    }

    return 0;
}