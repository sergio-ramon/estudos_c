/*
    Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% tammbém sobre o salário base
*/

#include <stdio.h>

#define percentualGratf 5/100;
#define percentualImpst 7/100;

int main() {
    float salario, salarioReceber, gratf, impst;

    printf("Digite o salario atual: ");
    scanf("%f%*c", &salario);

    gratf = salario * percentualGratf;
    impst = salario * percentualImpst;
    salarioReceber = (salario + gratf) - impst;

    printf("Salario a receber: %.2f", salarioReceber);

    return 0;
}