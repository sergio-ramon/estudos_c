/*
    Faça um programa que leia um número e informe se ele é
    divisível por três e por sete.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    int num;

    printf("Digite um número: ");
    scanf("%d%*c", &num);

    if (num % 3 == 0) {
        if (num % 7 == 0) {
            printf("\nO número é divisível por 3 e por 7");
        } else {
            printf("\nO número é divisível por 3, mas não por 7");
        }
    } else if (num % 7 == 0) {
        printf("\nO número é divisível por 7, mas não por 3");
    } else {
        printf("\nO número não é divisível nem por 3, nem por 7");
    }
    
    return 0;
}