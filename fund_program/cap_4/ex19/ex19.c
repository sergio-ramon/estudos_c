/*
    Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é a altura):
        ■ para homens: (72.7 * h) – 58.
        ■ para mulheres: (62.1 * h) – 44.7. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

void setLocale() {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");
}

int main() {
    setLocale();

    float altura, pesoIdeal;
    char sexo;

    printf("Digite o sexo (m - Masculino | f - Feminino): ");
    scanf("%c%*c", &sexo);
    sexo = toupper(sexo);
    printf("Digite a altura: ");
    scanf("%f%*c", &altura);

    switch (sexo) {
        case 'M':
            pesoIdeal = (72.7 * altura) - 58;
            break;
        case 'F':
            pesoIdeal = (62.1 * altura) - 44.7;
            break;
        default:
            printf("Sexo digitado inválido");
            return 0;
            break;
    }

    printf("O peso ideal é: %5.2f", pesoIdeal);

    return 0;
}