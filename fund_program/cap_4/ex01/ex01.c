/*
    Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a mensagem de aprovado ou reprovado, considerando para aprovação média 7.
*/

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%f%*c", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f%*c", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f%*c", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f%*c", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if(media >= 7) {
        printf("Aprovado com media %.2f", media);
    } else {
        printf("Reprovado com media %.2f", media);
    }

    return 0;
}