/*
    Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.
        Até R$ 50,00                    5
        Entre R$ 50,00 e R$ 100,00      10
        Acima de R$ 100,00              15

        Até R$ 80,00                                Barato
        Entre R$ 80,00 e R$ 120,00 (inclusive)      Normal
        Entre R$ 120,00 e R$ 200,00 (inclusive)     Caro
        Maior que R$ 200,00                         Muito caro
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()  {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");

    float preco, aumento, novoPreco;
    char b[] = {"Barato"};
    char n[] = {"Normal"};
    char c[] = {"Caro"};
    char m[] = {"Muito caro"};

    printf("Digite o preço do produto: ");
    scanf("%f%*c", &preco);

    if (preco > 0) {
        if (preco <= 50) {
            aumento = preco * 5/100;
            novoPreco = preco + aumento;
        } else if (preco <= 100) {
            aumento = preco * 10/100;
            novoPreco = preco + aumento;
        } else {
            aumento = preco * 15/100;
            novoPreco = preco + aumento;
        }
    } else {
        printf("\nPreço inválido");
        return 0;
    }

    if (preco <= 80) {
        printf("\nClassificação: %s", b);
        printf("\nNovo preço: R$ %.2f", novoPreco);
    } else if (preco <= 120) {
        printf("\nClassificação: %s", n);
        printf("\nNovo preço: R$ %.2f", novoPreco);
    } else if (preco <= 200) {
        printf("\nClassificação: %s", c);
        printf("\nNovo preço: R$ %.2f", novoPreco);
    } else {
        printf("\nClassificação: %s", m);
        printf("\nNovo preço: R$ %.2f", novoPreco);
    }

    return 0;
}