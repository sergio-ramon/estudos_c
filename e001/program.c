#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Coleta o número de referência e armazena na variável (numero) em main
void coletaDado(char msg[], int *num){
    printf("%s", msg);
    scanf("%i", num);
}

// Início do programa
int main (){
    system("chcp 65001");
    setlocale(LC_ALL, "Português");

    int numero, quadrado;
    float raiz;

    coletaDado("Digite um número: ", &numero);

    raiz = sqrt(numero);
    quadrado = pow(numero, 2);

    printf(
        "\nA raiz quadrada dele é: %.2f\n"
        "Quando elevado ao quadrado, temos: %d\n", raiz, quadrado);

    return (0);
}