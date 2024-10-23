/*
    Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número de diagonais desse polígono. Sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do polígono. 
*/

#include <stdio.h>

int main() {
    int lados;
    float diagonais;

    printf("Digite o numero de lados: ");
    scanf("%d%*c", &lados);

    diagonais = (lados * (lados - 3))/2;

    printf("Numero de diagonais: %.2f", diagonais);

    return 0;
}