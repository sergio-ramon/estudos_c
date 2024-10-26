/*
    Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O programa deve mostrar uma mensagem de permissão de acesso ou não.
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

    int senhaDigitada, senha;
    senha = 4531;

    printf("Digite a senha: ");
    scanf("%d%*c", &senhaDigitada);

    if (senhaDigitada == senha) {
        printf("Acesso concedido!");
    } else {
        printf("Senha incorreta!");
    }

    return 0;
}