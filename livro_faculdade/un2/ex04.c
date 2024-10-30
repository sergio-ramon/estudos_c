/*
    Elabore um programa que receba o salário de um funcionário e o
    código do cargo e apresente o cargo, o valor do aumento e o
    novo salário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    float sal, aum, novo;
    int cod;

    printf("Digite o valor do salário: ");
    scanf("%f%*c", &sal);
    printf("Digite o código do cargo: ");
    printf("\n1 - Servente");
    printf("\n2 - Pedreiro");
    printf("\n3 - Mestre de obras");
    printf("\n4 - Técnico de segurança\n");
    scanf("%d%*c", &cod);

    if (sal > 0) {
        switch (cod) {
            case 1:
                aum = sal * 40/100;
                novo = sal + aum;

                printf("\nO valor do aumento é: %.2f", aum);
                printf("\nO novo salário é: %.2f", novo);
                break;
            case 2:
                aum = sal * 35/100;
                novo = sal + aum;

                printf("\nO valor do aumento é: %.2f", aum);
                printf("\nO novo salário é: %.2f", novo);
                break;
            case 3:
                aum = sal * 20/100;
                novo = sal + aum;

                printf("\nO valor do aumento é: %.2f", aum);
                printf("\nO novo salário é: %.2f", novo);
                break;
            case 4:
                aum = sal * 10/100;
                novo = sal + aum;

                printf("\nO valor do aumento é: %.2f", aum);
                printf("\nO novo salário é: %.2f", novo);
                break;
            default:
                printf("Código inválido");
        }
    } else {
        printf("Sem salário para cálculo");
    }

    return 0;
}