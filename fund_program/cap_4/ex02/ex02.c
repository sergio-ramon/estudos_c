/*
    Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra na tabela a seguir: 
        0,0 - 3,0 Reprovado
        3,0 - 7,0 Exame
        7,0 - 10,0 Aprovado
*/

#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f%*c", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f%*c", &nota2);

    media = (nota1 + nota2) / 2;

    if (media > 7) {
        printf("Aporvado");
    } else if (media > 3) {
        printf("Exame");
    } else {
        printf("Reprovado");
    }

    return 0;
}