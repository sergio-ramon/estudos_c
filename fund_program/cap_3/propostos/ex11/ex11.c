/*
    Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor)/2. 
*/

#include <stdio.h>

int main() {
    float area, diagMaior, diagMenor;

    printf("Digite o tamanho da diagonal maior: ");
    scanf("%f%*c", &diagMaior);
    printf("Digite o tamanho da diagonal menor: ");
    scanf("%f%*c", &diagMenor);

    area = (diagMaior * diagMenor) / 2;

    printf("Tamanho da area: %.2f", area);

    return 0;
}