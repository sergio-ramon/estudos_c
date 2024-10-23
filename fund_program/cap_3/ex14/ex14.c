/*
    Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
        a) a idade dessa pessoa em anos; 
        b) a idade dessa pessoa em meses; 
        c) a idade dessa pessoa em dias; 
        d) a idade dessa pessoa em semanas.
*/

#include <stdio.h>

int main() {
    int anoNasc, anoAtual, idadeAnos, idadeMeses, idadeSemanas, idadeDias;

    printf("Digite o ano de nascimento: ");
    scanf("%d%*c", &anoNasc);
    printf("Digite o ano atual: ");
    scanf("%d%*c", &anoAtual);

    idadeAnos = anoAtual - anoNasc;
    idadeMeses = idadeAnos * 12;
    idadeSemanas = idadeMeses * 4;
    idadeDias = idadeMeses * 30;

    printf("\nIdade em anos: %d", idadeAnos);
    printf("\nIdade em meses: %d", idadeMeses);
    printf("\nIdade em semanas: %d", idadeSemanas);
    printf("\nIdade em dias: %d", idadeDias);

    return 0;
}