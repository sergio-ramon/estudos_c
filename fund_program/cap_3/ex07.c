/*
    Faça um programa que receba o peso de uma pessoa, calcule e mostre: 
        a) o novo peso, se a pessoa engordar 15% sobre o peso digitado; 
        b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.
*/

#include <stdio.h>

int main() {
    float peso, peso15, peso20;

    printf("Digite o peso atual: ");
    scanf("%f%*c", &peso);

    peso15 = peso + (peso * 15/100);
    peso20 = peso + (peso * 20/100);

    printf("\nCaso ganhe 15%% a mais de peso: %.2f", peso15);
    printf("\nCaso ganhe 20%% a mais de peso: %.2f", peso20);

    return 0;
}