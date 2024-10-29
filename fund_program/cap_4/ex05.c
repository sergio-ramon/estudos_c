/*
    Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha do usuário.
        1   Média entre os números digitados
        2   Diferença do maior pelo menor
        3   Produto entre os números digitados
        4   Divisão do primeiro pelo segundo
*/

#include <stdio.h>

int main() {
    int num1, num2, dif, prod, opcao;
    float media, div;

    printf("Digite o primeiro numero: ");
    scanf("%d%*c", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d%*c", &num2);
    
    printf("\nEscolha uma das opcoes:\n");
    printf("1 - Media entre os numeros digitados\n");
    printf("2 - Diferenca entre os numeros\n");
    printf("3 - Produto entre os numeros\n");
    printf("4 - Divisao do primeiro pelo segundo\n");
    scanf("%d%*c", &opcao);

    switch (opcao) {
        case 1:
            media = (num1 + num2) / 2;
            printf("\nMedia: %.2f", media);
            break;
        case 2:
            if (num1 > num2) {
                dif = num1 - num2;
            } else {
                dif = num2 - num1;
            }
            printf("\nDiferenca: %d", dif);
            break;
        case 3:
            prod = num1 * num2;
            printf("\nProduto: %d", prod);
            break;
        case 4:
            if (num2 != 0) {
                div = num1 / num2;
            }
            printf("\nDivisao: %.2f", div);
            break;
        default:
            printf("Opcao invalida. Programa encerrado...");
            return 0;
            break;
    }

    return 0;
}