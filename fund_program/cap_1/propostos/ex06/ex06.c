/*
    Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final.
*/

#include <stdio.h>

int main() {
    float salarioFixo, vendas, comissao, salarioFinal;

    printf("Digite o salario fixo: ");
    scanf("%f%*c", &salarioFixo);
    printf("Digite o valor das vendas: ");
    scanf("%f%*c", &vendas);

    comissao = vendas * 4/100;
    salarioFinal = salarioFixo + comissao;

    printf("Comissao: %.2f", comissao);
    printf("Salario final: %.2f", salarioFinal);

    return 0;
}