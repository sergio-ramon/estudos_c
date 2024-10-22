/*
    Faça um programa que receba o raio, calcule e mostre: 
        a) o comprimento de uma esfera; sabe-se que C = 2 * pi R; 
        b) a área de uma esfera; sabe-se que A = pi R2;
        c) o volume de uma esfera; sabe-se que V = ¾ * pi R3.
*/

#include <stdio.h>

int main() {
    float raio, comp, area, vol, pi = 3.14;

    printf("Digite o valor do raio: ");
    scanf("%f%*c", &raio);

    comp = 2 * pi * raio;
    area = pi * (raio * raio);
    vol = (4 * pi * (raio * raio * raio))/3;

    printf("\nComprimento da esfera: %.2f", comp);
    printf("\nArea da esfera: %.2f", area);
    printf("\nVolume da esfera: %.2f", vol);

    return 0;
}