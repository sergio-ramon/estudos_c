/*
    Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber, sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base
*/

#include <stdio.h>

int main() {
    float salario, novoSalario;
    float gratf = 50, impst;

    printf("Digite o salario atual: ");
    scanf("%f%*c", &salario);

    impst = salario * 10/100;
    novoSalario = salario + gratf - impst;

    printf("Salario a receber: %.2f", novoSalario);

    return 0;
}