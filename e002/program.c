#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    printf("Digite o segundo número: ");
    scanf("%i", &num2);
    printf("Digite o terceiro número: ");
    scanf("%i", &num3);
    printf("Digite o quarto número: ");
    scanf("%i", &num4);

    float med = (num1 + num2 + num3 + num4) / 4;

    printf("A média aritimética dos números é: %.2f\n", med);
}