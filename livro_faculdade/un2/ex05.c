/*
    Faça um programa que receba o código do estado de origem da
    carga de um caminhão, o peso da carga em toneladas e o código
    dela. Calcule e apresente: o peso da carga em quilos, o preço
    da carga, o valor do imposto e o valor total da carga (preço da
    carga mais imposto).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    int codEst, codCarg;
    float pesoTn, pesoKg, preco, impst, total;

    printf("Digite o peso da carga em toneladas: ");
    scanf("%f%*c", &pesoTn);
    printf("Digite o código da carga de 10 a 40: ");
    scanf("%d%*c", &codCarg);

    pesoKg = pesoTn * 1000;
    
    if (codCarg > 9 && codCarg < 41) {
        if (codCarg <= 20) {
            preco = 180 * pesoKg;
        } else if (codCarg <= 30) {
            preco = 120 * pesoKg;
        } else {
            preco = 230 * pesoKg;
        }
    } else {
        printf("Código de carga inválido");
        return 0;
    }

    printf("Digite o código do estado de origem: ");
    scanf("%d%*c", &codEst);

    switch (codEst) {
        case 1:
            impst = preco * 20/100;
            break;
        case 2:
            impst = preco * 15/100;
            break;
        case 3:
            impst = preco * 10/100;
            break;
        case 4:
            impst = preco * 5/100;
            break;
        default:
            printf("Código de estado inválido");
            return 0;
    }

    total = preco + impst;

    printf("\nPeso da carga em quilos: %.2fKg", pesoKg);
    printf("\nPreço da carga: R$ %.2f", preco);
    printf("\nValor do imposto: R$ %.2f", impst);
    printf("\nValor total da carga: R$ %.2f", total);

    return 0;
}