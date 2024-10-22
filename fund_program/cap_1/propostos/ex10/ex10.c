/*
    Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.
*/

#include <stdio.h>

int main() {
    float area, lado;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%f%*c", &lado);

    area = lado * lado;

    printf("Tamanho da area: %.2f", area);

    return 0;
}