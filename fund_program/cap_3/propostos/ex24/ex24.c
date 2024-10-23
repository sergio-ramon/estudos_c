/*
    Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. Sabe--se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O programa deve fazer as conversões e mostrá-las.
*/

#include <stdio.h>

int main() {
    float saldoReais, saldoDolar, saldoMarco, saldoLibra;

    printf("Digite o saldo atual em reais: ");
    scanf("%f%*c", &saldoReais);

    saldoDolar = saldoReais * 1.80;
    saldoMarco = saldoReais * 2.00;
    saldoLibra = saldoReais * 3.57;

    printf("\nConvertido em dolares: USD %.2f", saldoDolar);
    printf("\nConvertido em marco alemao: DM %.2f", saldoMarco);
    printf("\nConvertido em libra esterlina: %.2f", saldoLibra);

    return 0;
}