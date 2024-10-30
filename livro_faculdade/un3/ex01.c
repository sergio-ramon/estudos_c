/*
    Faça um programa que leia números inteiros até que seja
    informado o valor 0. Apresente a média dos valores, o maior e o
    menor valor e a quantidade de números pares e ímpares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    int num, soma, qtd, pares, impares, maior, menor;
    float med;

    printf("Digite um número inteiro ou 0 para finalizar: ");
    scanf("%d%*c", &num);
    
    pares = 0;
    impares = 0;
    maior = num;
    menor = num;
    while(num != 0) {
        // Acresenta o valor digitado a soma
        soma += num;
        // Incrementa a quantidade de valores digitados em +1
        qtd++;

        // Verifica se o valor é maior ou menor e altera a variável
        if (num > maior) {
            maior = num;
        } else if (num < menor) {
            menor = num;
        }

        // Verifica se o valor é par ou ímpar e incrementa
        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        // Solicita novamente o número para verificação
        printf("Digite um número inteiro ou 0 para finalizar: ");
        scanf("%d%*c", &num);
    }
    
    // Calcula a média aritmética
    med = soma / qtd;

    // Imprime as informações na tela
    printf("\nA média dos valores é: %.2f", med);
    printf("\nO maior valor é: %d", maior);
    printf("\nE o menor valor é: %d", menor);
    printf("\nForam digitados %d números pares", pares);
    printf("\nE foram digitados %d números ímpares", impares);

    return 0;
}