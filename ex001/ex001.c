/*
    Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números. 
*/

#include <stdio.h>

int main() {
    int num1, num2, num3, num4, soma;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%i", &num3);
    printf("Digite o quarto numero: ");
    scanf("%i", &num4);

    soma = num1 + num2 + num3 + num4;

    printf("Somando os numeros da: %d", soma);

    return 0;
}