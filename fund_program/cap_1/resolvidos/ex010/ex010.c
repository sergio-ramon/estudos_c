/*
    Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = pi * R2
*/

#include <stdio.h>

#define pi 3.14159265358979323846;

int main() {
    float area, raio;

    printf("Digite o raio do circulo: ");
    scanf("%f%*c", &raio);

    raio = raio * raio;
    area = raio * pi;

    printf("Area do circulo: %5.2f", area);

    return 0;
}