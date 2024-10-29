/*
    Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180 graus.
*/

#include <stdio.h>

int main() {
    float med1, med2, med3;

    printf("Digite a primeira medida: ");
    scanf("%f%*c", &med1);
    printf("Digite a segunda medida: ");
    scanf("%f%*c", &med2);

    med3 = 180 - med1 - med2;

    printf("Terceira medida tem: %.2f", med3);

    return 0;
}