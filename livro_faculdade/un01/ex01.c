/*
    Escreva um programa que leia o nome de uma pessoa e imprima a seguinte mensagem, na tela: “Bem-vindo(a) à disciplina de Algoritmos e Lógica de Programação II, <nome>”; onde o campo <nome> deve ser substituído pelo nome informado pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    char nome[30];

    printf("Digite seu primeiro nome: ");
    scanf("%s%*c", nome);

    printf("\nBem vindo à disciplina de Algoritmos e Lógica de Programação II, %s!", nome);

    return 0;
}