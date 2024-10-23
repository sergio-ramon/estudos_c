/*
    Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que esse funcionário ganha.
*/

#include <stdio.h>

int main() {
    float salarioMin, salarioFunc, qntd;

    printf("Digite o valor do salario minimo: ");
    scanf("%f%*c", &salarioMin);
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f%*c", &salarioFunc);

    qntd = salarioFunc / salarioMin;

    printf("Ele recebe o equivalente a: %.2f salarios", qntd);

    return 0;
}