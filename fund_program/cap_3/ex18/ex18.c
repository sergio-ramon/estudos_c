/*
    Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit. Sabe-se que F = 180*(C + 32)/100.
*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f%*c", &celsius);

    fahrenheit = 180 * (celsius + 32) / 100;

    printf("Temperatura em Fahrenheit: %.2f", fahrenheit);

    return 0;
}