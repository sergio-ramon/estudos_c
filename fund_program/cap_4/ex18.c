/*
    Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.
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

    int idade;

    printf("Digite sua idade: ");
    scanf("%d%*c", &idade);

    if (idade >= 18) {
        printf("Maior de idade");
    } else {
        printf("Menor de idade");
    }

    return 0;
}