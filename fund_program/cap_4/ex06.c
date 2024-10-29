/*
    Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com aescolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do programa. As opções são: 
        a) O primeiro número elevado ao segundo número. 
        b) Raiz quadrada de cada um dos números. 
        c) Raiz cúbica de cada um dos números.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, res, op;
    float raiz1, raiz2;

    printf("Digite o primeiro numero: ");
    scanf("%d%*c", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d%*c", &num2);
    printf("\nEscolha uma opção:\n");
    printf("1 - Primeiro numero elevado ao segundo\n");
    printf("2 - Raiz quadrada de cada numero\n");
    printf("3 - Raiz cubica de cada numero\n");
    scanf("%d%*c", &op);

    switch (op) {
        case 1:
            res = pow(num1, num2);
            printf("\nResultado: %d", res);
            break;
        case 2:
            raiz1 = sqrt(num1);
            raiz2 = sqrt(num2);
            printf("\nRaiz quadrada do primeiro numero: %.2f", raiz1);
            printf("\nRaiz quadrada do segundo numero: %.2f", raiz2);
            break;
        case 3:
            raiz1 = cbrt(num1);
            raiz2 = cbrt(num2);
            printf("\nRaiz cubica do primeiro numero: %.2f", raiz1);
            printf("\nRaiz cubica do segundo numero: %.2f", raiz2);
            break;
        default:
            printf("\nOpaco invalida. Encerrando...");
            break;
    }

    return 0;
}