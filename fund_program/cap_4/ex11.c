/*
    Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e mostre o valor do aumento e o novo salário.
        Até R$ 300,00           15% 
        R$ 300,00 R$ 600,00     10% 
        R$ 600,00 R$ 900,00     5% 
        Acima de R$ 900,00      0%
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float salarioAtual, aumento, novoSalario;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f%*c", &salarioAtual);

    if (salarioAtual > 0) {
        if (salarioAtual <= 300) {
            aumento = salarioAtual * 15/100;
            novoSalario = salarioAtual + aumento;
        } else if (salarioAtual <= 600) {
            aumento = salarioAtual * 10/100;
            novoSalario = salarioAtual + aumento;
        } else if (salarioAtual <= 900) {
            aumento = salarioAtual * 5/100;
            novoSalario = salarioAtual + aumento;
        } else {
            novoSalario = salarioAtual;
        }
    } else {
        printf("\nNão existe salário a ser analisado");
        return 0;
    }

    printf("\nO valor do aumento é: %.2f", aumento);
    printf("\nO novo salário será: %.2f", novoSalario);

    return 0;
}