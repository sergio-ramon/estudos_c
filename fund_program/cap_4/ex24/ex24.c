/*
    Faça um programa que receba o preço;
    a categoria (livro):

    Calcule e mostre:
    ■ O valor do aumento, usando as regras que se seguem (livro).
    ■ O valor do imposto, usando as regras a seguir (livro).
    ■ O novo preço, ou seja, o preço mais aumento menos imposto (livro).
    ■ A classificação, usando as regras a seguir (livro).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");
    system("cls");

    int cat, sit;
    float preco, aumento, imposto, novoPreco;

    printf("Digite o preço do produto: ");
    scanf("%f%*c", &preco);
    printf("Digite a categoria: ");
    printf("\n1 — limpeza;\n2 — alimentação;\n3 — vestuário.\n");
    scanf("%d%*c", &cat);
    cat = toupper(cat);
    printf("Digite a situação: ");
    printf("\nR — produtos que necessitam de refrigeração;"
            "\nN — produtos que não necessitam de refrigeração.\n");
    scanf("%d%*c", &sit);
    sit = toupper(sit);

    if (preco > 0) {
        if (preco <= 25) {
            switch (cat) {
            case 1:
                aumento = preco * 5/100;
                if (sit == 'R') {
                    imposto = preco * 5/100;
                } else {
                    imposto = preco * 8/100;
                }
                break;

            case 2:
                aumento = preco * 8/100;
                imposto = preco * 5/100;
                break;

            case 3:
                aumento = preco * 10/100;
                if (sit == 'R') {
                    imposto = preco * 5/100;
                } else {
                    imposto = preco * 8/100;
                }
                break;

            default:
                printf("\nCategoria inválida");
                break;
            }
        } else {
            switch (cat) {
            case 1:
                aumento = preco * 12/100;
                if (sit == 'R') {
                    imposto = preco * 5/100;
                } else {
                    imposto = preco * 8/100;
                }
                break;

            case 2:
                aumento = preco * 15/100;
                imposto = preco * 5/100;
                break;

            case 3:
                aumento = preco * 18/100;
                if (sit == 'R') {
                    imposto = preco * 5/100;
                } else {
                    imposto = preco * 8/100;
                }
                break;

            default:
                printf("\nCategoria inválida");
                break;
            }
        }

        novoPreco = preco + aumento - imposto;
        if (novoPreco <= 50) {
            printf("\nBarato");
        } else if (novoPreco <= 120) {
            printf("\nNormal");
        } else {
            printf("\nCaro");
        }
    } else {
        printf("\nSem preço para verificação");
    }

    printf("\nAumento: R$ %.2f", aumento);
    printf("\nImposto: R$ %.2f", imposto);
    printf("\nNovo preço: R$ %.2f", novoPreco);

    return 0;
}