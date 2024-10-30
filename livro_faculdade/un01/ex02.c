/*
    Elabore um programa que receba quatro notas e calcule a média aritmética entre elas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    float nota1, nota2, nota3, nota4, soma, med;

    printf("Digite a primeira nota: ");
    scanf("%f%*c", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f%*c", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f%*c", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f%*c", &nota4);

    soma = nota1 + nota2 + nota3 + nota4;
    med = soma / 4;

    printf("\nA média aritmética das notas é: %.2f", med);

    return 0;
}