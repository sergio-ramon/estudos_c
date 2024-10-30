/*
    Faça um programa que leia um conjunto de pedidos e calcule o 
    total da compra. O pedido possui os seguintes campos: número, 
    data (dia, mês e ano), preço unitário e quantidade. A entrada 
    de pedidos é encerrada quando o usuário informa zero como 
    número do pedido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    float preco, total;
    char data[10];
    int num, qntd;

    printf("Digite o número do pedido ou 0 para finalizar: ");
    scanf("%d%*c", &num);

    total = 0;
    while(num != 0) {
        printf("Digite a data do pedido (00/00/0000): ");
        scanf("%s%*c", data);
        printf("Digite o preço unitário do pedido: ");
        scanf("%f%*c", &preco);
        printf("Digite a quantidade do pedido: ");
        scanf("%d%*c", &qntd);

        total += preco * qntd;
        printf("\nPedido cadastrado!");
        printf("\nPressione Enter");
        getchar();
        system("cls");
        printf("Digite o número do pedido ou 0 para finalizar: ");
        scanf("%d%*c", &num);
    }

    printf("\nTotal da compra: R$ %.2f", total);

    return 0;
}