/*
    Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário
*/

#include <stdio.h>

int main() {
    float salario, aumento, novoSalario, percentual;

    printf("Digite o salario atual: ");
    scanf("%f%*c", &salario);
    printf("Digite o percentual de aumento: ");
    scanf("%f%*c", &percentual);

    percentual = percentual / 100;
    aumento = salario * percentual;
    novoSalario = salario + aumento;

    printf("Novo salario: %.2f", novoSalario);

    return 0;
}