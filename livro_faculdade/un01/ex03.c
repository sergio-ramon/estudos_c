/*
    Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e apresente o valor do rendimento e o valor total (valor do depósito + valor do rendimento).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    float dep, tax, rend, total;

    printf("Digite o valor depositado: ");
    scanf("%f%*c", &dep);
    printf("Digite a taxa de juros: ");
    scanf("%f%*c", &tax);

    rend = dep * tax/100;
    total = dep + rend;

    printf("\nO valor do rendimento é: %.2f", rend);
    printf("\nO valor acumulado é: %.2f", total);

    return 0;
}