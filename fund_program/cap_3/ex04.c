/*
    Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda
*/

#include <stdio.h>

int main() {
    float n1, n2, mediaP;
    float p1 = 2, p2 = 3;

    printf("Digite a primeira nota: ");
    scanf("%f%*c", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f%*c", &n2);

    mediaP = (n1 * p1 + n2 * p2) / (p1 + p2);

    printf("Media ponderada: %5.2f", mediaP);

    return 0;
}