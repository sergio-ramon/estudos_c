/*
    Escreva um programa que, dado o raio de um círculo, calcule
    sua área e o perímetro. A área é a superfície do objeto, dada
    por A = πt², e o perímetro é a medida do contorno do objeto
    dado por P = 2πr². Dica: utilize as funções intrínsecas
    vistas nesta unidade.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    float r, a, p;

    printf("Digite o valor do raio: ");
    scanf("%f%*c", &r);

    a = 3.1415 * (r * r);
    p = 2 * 3.1415 * (r * r);

    printf("\nA área do círculo é: %.2f", a);
    printf("\nO perímetro do círculo é: %.2f", p);

    return 0;
}