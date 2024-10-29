/*
     Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir. Para idade inferior a 5, deverá mostrar mensagem.
        Infantil            5 a 7
        Juvenil             8 a 10
        Adolescente         11 a 15
        Adulto              16 a 30
        Sênior              Acima de 30
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");

    int idade;

    printf("Digite a idade: ");
    scanf("%d%*c", &idade);

    if (idade > 5) {
        if (idade <= 7) {
            printf("Categoria: Infantil");
        } else if (idade <= 10) {
            printf("Categoria: Juvenil");
        } else if (idade <= 15) {
            printf("Categoria: Adolescente");
        } else if (idade <= 30) {
            printf("Categoria: Adulto");
        } else {
            printf("Categoria: Sênior");
        }
    } else {
        printf("Sem categoria");
    }

    return 0;
}