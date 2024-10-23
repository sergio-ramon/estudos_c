/*
    Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.
*/

#include <stdio.h>

int main() {
    float pesoKg, pesoGr;

    printf("Digite o peso em kg: ");
    scanf("%f%*c", &pesoKg);

    pesoGr = pesoKg * 1000;

    printf("Peso em gramas: %.2f", pesoGr);

    return 0;
}