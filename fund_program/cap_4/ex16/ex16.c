/*
    Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.
        PREÇO ATUAL                     % DE DESCONTO
        Até R$ 30,00                    Sem desconto
        Entre R$ 30,00 e R$ 100,00      10%
        Acima de R$ 100,00              15%
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void setLocale() {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");
}

int main() {
    setLocale();

    float preco, desconto, precoFinal;
    int codigo;

    printf("Digite o código do produto: ");
    scanf("%f%*c", &preco);
    printf("Digite o preço do produto: ");
    scanf("%d%*c", &codigo);

    if (preco > 0) {
        if (preco <= 30) {
            desconto = 0;
            precoFinal = preco - desconto;
        } else if (preco <= 100) {
            desconto = preco * 10/100;
            precoFinal = preco - desconto;
        } else {
            desconto = preco * 15/100;
            precoFinal = preco - desconto;
        }
    } else {
        printf("\nSem valor para cálculo");
        return 0;
    }

    printf("\nProduto de código: %d", codigo);
    printf("\nPreço com desconto: R$ %.2f", precoFinal);

    return 0;
}