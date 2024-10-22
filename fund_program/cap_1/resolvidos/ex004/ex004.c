/*
    Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%
*/

#include <stdio.h>

#define porcentagem 25/100;

int main() {
    int salario, aumento, novoSalario;

    printf("Digite o salario atual: ");
    scanf("%d%*c", &salario);

    aumento = salario * porcentagem;
    novoSalario = salario + aumento;

    printf("Novo salario: %d", novoSalario);

    return 0;
}