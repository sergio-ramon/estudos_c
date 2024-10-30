/*
    Escreva um programa que leia um número inteiro e apresente seu antecessor e seu sucessor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");
    system("cls");

    int num, ant, suc;

    printf("Digite um número inteiro: ");
    scanf("%d%*c", &num);

    ant = num - 1;
    suc = num + 1;

    printf("\nO antecessor do número é: %d", ant);
    printf("\nO sucessor do número é: %d", suc);

    return 0;
}