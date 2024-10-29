/*
    Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule emostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.

        Até R$ 350,00           R$ 100,00
        R$ 350,00 R$ 600,00     R$ 75,00
        R$ 600,00 R$ 900,00     R$ 50,00
        Acima de R$ 900,00      R$ 35,00
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");

    float salarioBruto, salario, imposto, aReceber;
    
    printf("Digite o valor do salário bruto: ");
    scanf("%f%*c", &salarioBruto);

    if (salarioBruto > 0) {
        if (salarioBruto <= 350) {
            salario = salarioBruto + 100;
            imposto = salario * 7/100;
            aReceber = salario - imposto;
        } else if (salarioBruto <= 600) {
            salario = salarioBruto + 75;
            imposto = salario * 7/100;
            aReceber = salario - imposto;
        } else if (salarioBruto <= 900) {
            salario = salarioBruto + 50;
            imposto = salario * 7/100;
            aReceber = salario - imposto;
        } else {
            salario = salarioBruto + 35;
            imposto = salario * 7/100;
            aReceber = salario - imposto;
        }
    } else {
        printf("\nSem salário para cálculo");
        return 0;
    }

    printf("\nSalário a receber: R$ %.2f", aReceber);

    return 0;
}