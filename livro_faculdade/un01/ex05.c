/*
    Elabore um programa que calcule a área de um trapézio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    float B, b, altura, area;

    printf("Digite o valor da base maior do trapézio (cm): ");
    scanf("%f%*c", &B);
    printf("Digite o valor da base menor do trapézio (cm): ");
    scanf("%f%*c", &b);
    printf("Digite a altura do trapézio (cm): ");
    scanf("%f%*c", &altura);

    area = ((B + b) * altura) / 2;

    printf("\nA área do trapézio é: %.2f cm²", area);

    return 0;
}