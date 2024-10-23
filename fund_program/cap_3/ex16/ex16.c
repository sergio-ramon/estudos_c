/*
    Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float catetoOp, catetoAdj, soma, hip;

    printf("Digite o valor do cateto oposto: ");
    scanf("%f%*c", &catetoOp);
    printf("Digite o valor do cateto adjascente: ");
    scanf("%f%*c", &catetoAdj);

    soma = (catetoOp * catetoOp) + (catetoAdj * catetoAdj);
    hip = sqrt(soma);

    printf("Valor da hipotenusa: %.2f", hip);

    return 0;
}