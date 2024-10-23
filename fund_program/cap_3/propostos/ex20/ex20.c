/*
    Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar sua ponta.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float angulo, dist, parede, med;

    printf("Digite a medida do angulo: ");
    scanf("%f%*c", &angulo);
    printf("Digite a distancia da parede: ");
    scanf("%f%*c", &dist);

    angulo = angulo * 0.0175;
    parede = angulo * dist;
    med = sqrt((dist * dist) + (parede * parede));

    printf("\n%.2f", angulo);
    printf("\nMedida da escada: %.2f", med);

    return 0;
}