/*
    Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2
*/

#include <stdio.h>

int main() {
    float area, base, altura;

    printf("Digite a base do triangulo: ");
    scanf("%f%*c", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f%*c", &altura);

    area = (base * altura) / 2;

    printf("Area do triangulo: %5.2f", area);

    return 0;
}