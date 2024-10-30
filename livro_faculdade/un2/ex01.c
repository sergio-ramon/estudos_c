/*
    É comum, em uma aplicação, ter de determinar quais números
    são o maior ou o menor, dentre todos os valores de um
    conjunto de dados. Assim sendo, escreva um programa que
    receba cinco números inteiros e apresente o maior e o menor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    int num1, num2, num3, num4, num5, maior, menor;

    printf("Digite o primeiro número: ");
    scanf("%d%*c", &num1);
    printf("Digite o segundo número: ");
    scanf("%d%*c", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d%*c", &num3);
    printf("Digite o quarto número: ");
    scanf("%d%*c", &num4);
    printf("Digite o quinto número: ");
    scanf("%d%*c", &num5);

    maior = num1;
    menor = num1;

    // Verifica maioes
    if (maior <= num1) {
        maior = num1;
    }
    if (maior <= num2) {
        maior = num2;
    }
    if (maior <= num3) {
        maior = num3;
    }
    if (maior <= num4) {
        maior = num4;
    }
    if (maior <= num5) {
        maior = num5;
    }

    // Verifica menores
    if (menor >= num1) {
        menor = num1;
    } 
    if (menor >= num2) {
        menor = num2;
    }
    if (menor >= num3) {
        menor = num3;
    }
    if (menor >= num4) {
        menor = num4;
    }
    if (menor >= num5) {
        menor = num5;
    }

    printf("\nO maior número é: %d", maior);
    printf("\nO menor número é: %d", menor);

    return 0;
}