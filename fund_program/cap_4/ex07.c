/*
    Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso ele não tenha direito ao aumento.
*/

#include <stdio.h>

int main() {
    float salario, reajustado;

    printf("Digite o salario do funcionario: ");
    scanf("%f%*c", &salario);

    if (salario <= 500 && salario > 0) {
        reajustado = salario + (salario * 30/100);
        printf("Salario reajustado: R$ %.2f", reajustado);
    } else {
        printf("Sem direito a aumento");
    }

    return 0;
}