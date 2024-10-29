/*
    Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18 W de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada.
*/

#include <stdio.h>

int main() {
    float lrg, cmp, mts2, wts;

    printf("Digite a largura do comodo em metros: ");
    scanf("%f%*c", &lrg);
    printf("Digite a altura do comodo em metros: ");
    scanf("%f%*c", &cmp);

    mts2 = lrg * cmp;
    wts = mts2 * 18;

    printf("\nArea em metros quadrados: %.2f", mts2);
    printf("\nWatts necessarios: %.2f", wts);

    return 0;
}