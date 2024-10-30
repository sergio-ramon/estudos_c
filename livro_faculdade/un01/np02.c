/*
    Escreva um programa que leia um número positivo inteiro e apresente o quadrado e a raiz quadrada deste número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    unsigned int num;
    int quad;
    float raiz;

    printf("Digite um número inteiro positivo: ");
    scanf("%u%*c", &num);

    quad = num * num;
    raiz = sqrt(num);

    printf("\nO quadrado do número é: %d", quad);
    printf("\nA raiz quadrada do número é: %.2f", raiz);

    return 0;
}