/*
    Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Façaum programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a seguir. Mostre o saldo médio e o valor do crédito.
        Acima de R$ 400,00      30% do saldo médio
        R$ 400,00 - R$ 300,00   25% do saldo médio
        R$ 300,00 - R$ 200,00   20% do saldo médio
        Até R$ 200,00           10% do saldo médio
*/

#include <stdio.h>

int main() {
    float saldo, credito;

    printf("Digite o saldo medio do ultimo ano: ");
    scanf("%f%*c", &saldo);

    if (saldo >= 0) {
        if (saldo <= 200) {
            credito = saldo * 10/100;
            printf("\nSaldo medio: R$ %.2f", saldo);
            printf("\nCredito liberado: R$ %.2f", credito);
        } else if (saldo <= 300) {
            credito = saldo * 20/100;
            printf("\nSaldo medio: R$ %.2f", saldo);
            printf("\nCredito liberado: R$ %.2f", credito);
        } else if (saldo <= 400) {
            credito = saldo * 25/100;
            printf("\nSaldo medio: R$ %.2f", saldo);
            printf("\nCredito liberado: R$ %.2f", credito);
        } else {
            credito = saldo * 30/100;
            printf("\nSaldo medio: R$ %.2f", saldo);
            printf("\nCredito liberado: R$ %.2f", credito);
        }
    } else {
        printf("Saldo negativo");
    }

    return 0;
}