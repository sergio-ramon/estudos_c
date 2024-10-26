/*
    Faça um programa que receba:
        ■ o código do produto comprado;
        ■ a quantidade comprada do produto.
    Calcule e mostre:
        ■ o preço unitário do produto comprado, seguindo a Tabela I; 
        ■ o preço total da nota;
        ■ o valor do desconto, seguindo a Tabela II e aplicado sobre o
        preço total da nota;
        ■ o preço final da nota depois do desconto.

            TABELA I
        Código      PREÇO
        1 a 10      R$ 10,00
        11 a 20     R$ 15,00
        21 a 30     R$ 20,00
        31 a 40     R$ 30,00

                            TABELA II
        PREÇO TOTAL DA NOTA                 % DE DESCONTO
        Até R$ 250,00                       5%
        Entre R$ 250,00 e R$ 500,00         10%
        Acima de R$ 500,00                  15%
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");
    system("cls");

    int cod, qntd;
    float precoUnit, precoTotal, desconto, precoFinal;

    printf("Digite o código do produto: ");
    scanf("%d%*c", &cod);
    printf("Digite a quantidade comprada: ");
    scanf("%d%*c", &qntd);

    if (cod > 0) {
        if (cod <= 10) {
            precoUnit = 10;
            precoTotal = precoUnit * qntd;
        } else if (cod <= 20) {
            precoUnit = 15;
            precoTotal = precoUnit * qntd;
        } else if (cod <= 30) {
            precoUnit = 20;
            precoTotal = precoUnit * qntd;
        } else if (cod <= 40) {
            precoUnit = 30;
            precoTotal = precoUnit * qntd;
        } else {
            printf("\nPreço digitado inválido");
        }
    } else {
        printf("\nCódigo inválido");
        return 0;
    }

    if (precoTotal <= 250) {
        desconto = precoTotal * 5/100;
        precoFinal = precoTotal - desconto;
    } else if (precoTotal <= 500) {
        desconto = precoTotal * 10/100;
        precoFinal = precoTotal - desconto;
    } else {
        desconto = precoTotal * 15/100;
        precoFinal = precoTotal - desconto;
    }

    printf("\nDesconto: R$ %.2f", desconto);
    printf("\nPreço final: R$ %.2f", precoFinal);

    return 0;
}