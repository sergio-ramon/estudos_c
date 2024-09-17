#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Pega os números digitados pelo usuário e armazena nas variáveis de main
void coletaDados(char msg[], float *num){
    printf("%s", msg);
    scanf("%f", num);
}

// Efetua o cálculo de média e armazena na variável de main
void calcMedia(float num1, float num2, float num3, float num4, float *med){
    *med = (num1 + num2 + num3 + num4) / 4;
}

// Início do programa
int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");

    float num1, num2, num3, num4, med;
    
    coletaDados("Digite o primeiro número: ", &num1);
    coletaDados("Digite o segundo número: ", &num2);
    coletaDados("Digite o terceiro número: ", &num3);
    coletaDados("Digite o quarto número: ", &num4);
    
    calcMedia(num1, num2, num3, num4, &med);

    printf("A média aritimética dos números é: %.2f\n", med);
}