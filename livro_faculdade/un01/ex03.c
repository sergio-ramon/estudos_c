/*
    Escreva um programa que receba quatro números inteiros,
    calcule e apresente a média aritmética entre eles.
    Observação: não esqueça de formatar o valor da média no
    momento de apresentá-lo, para que sejam impressas apenas duas
    casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    float num1, num2, num3, num4, med;

    printf("Digite o primeiro número: ");
    scanf("%f%*c", &num1);
    printf("Digite o segundo número: ");
    scanf("%f%*c", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f%*c", &num3);
    printf("Digite o quarto número: ");
    scanf("%f%*c", &num4);

    med = (num1 + num2 + num3 + num4) / 4;

    printf("\nA média aritmética dos números é: %.2f", med);

    return 0;
}