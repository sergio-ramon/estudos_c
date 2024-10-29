/*
    O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela aseguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.
        Até R$ 12.000,00                        5   isento
        Entre R$ 12.000,00 e R$ 25.000,00       10      15
        Acima de R$ 25.000,00                   15      20
*/

#include <stdio.h>

int main() {
    float custo, distr, imposto, preco;

    printf("Digite o custo de fabrica: ");
    scanf("%f%*c", &custo);

    if (custo >= 0) {
        if (custo <= 12000) {
            distr = custo * 5/100;
            imposto = 0;
        } else if (custo <= 25000) {
            distr = custo * 10/100;
            imposto = custo * 15/100;
        } else {
            distr = custo * 15/100;
            imposto = custo * 20/100;
        }
    } else {
        printf("\nCusto invalido");
        return 0;
    }

    preco = custo + distr + imposto;
    printf("\nPreco ao consumidor: R$ %.2f", preco);

    return 0;
}