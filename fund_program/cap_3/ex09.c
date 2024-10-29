/*
    Faça um programa que calcule e mostre a área de um trapézio. 
    Sabe-se que: A = ((base maior + base menor) * altura)/2
*/

#include <stdio.h>

int main() {
    float area, baseMaior, baseMenor, altura;

    printf("Digite a base maior do trapezio: ");
    scanf("%f%*c", &baseMaior);
    printf("Digite a base menor do trapezio: ");
    scanf("%f%*c", &baseMenor);
    printf("Digite a altura do trapezio: ");
    scanf("%f%*c", &altura);

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("Tamanho da area: %.2f", area);

    return 0;
}