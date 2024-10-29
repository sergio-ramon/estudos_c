/*
    Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de investimento, de acordo com o tipo de investimento.
        TIPO       DESCRIÇÃO       RENDIMENTO MENSAL
        1           Poupança                3%
        2       Fundos de renda fixa        4%
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");

    int opcao;
    float investimento, rendimento, valorCorrigido;

    printf("Escolha o tipo de investimento: ");
    printf("\n1 - Poupança");
    printf("\n2 - Fundos de renda fixa\n");
    scanf("%d%*c", &opcao);
    
    switch (opcao) {
        case 1:
            printf("\nDigite o valor do investimento: ");
            scanf("%f%*c", &investimento);

            if (investimento > 0) {
                rendimento = investimento * 3/100;
                valorCorrigido = investimento + rendimento;

                printf("Valor corrigido: R$ %.2f", valorCorrigido);
            } else {
                printf("\nValor inválido");
                return 0;
            }
            break;
        case 2:
            printf("\nDigite o valor do investimento: ");
            scanf("%f%*c", &investimento);

            if (investimento > 0) {
                rendimento = investimento * 4/100;
                valorCorrigido = investimento + rendimento;

                printf("Valor corrigido: R$ %.2f", valorCorrigido);
            } else {
                printf("\nValor inválido");
                return 0;
            }
            break;
        default:
            printf("\nOpção inválida");
            break;
    }

    return 0;
}