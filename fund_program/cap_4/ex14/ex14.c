/*
    Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre o novo salário.
        FAIXA SALARIAL         % DE AUMENTO
        Até R$ 300,00               50%
        R$ 300,00 R$ 500,00         40%
        R$ 500,00 R$ 700,00         30%
        R$ 700,00 R$ 800,00         20%
        R$ 800,00 R$ 1.000,00       10%
        Acima de R$ 1.000,00        5%
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");

    float salario, aumento, novoSalario;

    printf("Digite o valor do salário: ");
    scanf("%f%*c", &salario);

    if (salario > 0) {
        if (salario <= 300) {
            aumento = salario * 50/100;
            novoSalario = salario + aumento;
        } else if (salario <= 500) {
            aumento = salario * 40/100;
            novoSalario = salario + aumento;
        } else if (salario <= 700) {
            aumento = salario * 30/100;
            novoSalario = salario + aumento;
        } else if (salario <= 800) {
            aumento = salario * 20/100;
            novoSalario = salario + aumento;
        } else if (salario <= 1000) {
            aumento = salario * 10/100;
            novoSalario = salario + aumento;
        } else {
            novoSalario = salario;
        }
    } else {
        printf("\nNão há salário para verificação");
        return 0;
    }

    printf("\nNovo salário: R$ %.2f", novoSalario);
    
    return 0;
}