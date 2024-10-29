/*
    Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumentoencontra-se na tabela a seguir:
        Até R$ 300,00           35%
        Acima de R$ 300,00      15%
*/

#include <stdio.h>

int main() {
    float salario, reajustado;

    printf("Digite o salario do funcionario: ");
    scanf("%f%*c", &salario);

    if (salario > 0) {
        if (salario <= 300) {
            reajustado = salario + (salario * 35/100);
            printf("Salario reajustado: R$ %.2f", reajustado);
        } else {
            reajustado = salario + (salario * 15/100);
            printf("Salario reajustado: R$ %.2f", reajustado);
        }
    } else {
        printf("Salario invalido");
    }

    return 0;
}