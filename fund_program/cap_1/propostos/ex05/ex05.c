/*
    Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.
*/

#include <stdio.h>

int main() {
    float valor, desconto, novoValor;

    printf("Digite o valor do produto: ");
    scanf("%f%*c", &valor);

    desconto = valor * 10/100;
    novoValor = valor - desconto;

    printf("Valor com desconto: %.2f", novoValor);

    return 0;
}