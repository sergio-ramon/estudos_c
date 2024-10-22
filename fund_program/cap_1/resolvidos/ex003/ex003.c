/*
    Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.
*/

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Digite a primeira nota: ");
    scanf("%f%*c", &nota1);
    printf("Digite o primeiro peso: ");
    scanf("%f%*c", &peso1);
    printf("Digite a segunda nota: ");
    scanf("%f%*c", &nota2);
    printf("Digite o segundo peso: ");
    scanf("%f%*c", &peso2);
    printf("Digite a terceira nota: ");
    scanf("%f%*c", &nota3);
    printf("Digite o terceiro peso: ");
    scanf("%f%*c", &peso3);

    media = (nota1*peso1 + nota2*peso2 + nota3*peso3);

    printf("Media ponderada: %5.2f", media);

    return 0;
}