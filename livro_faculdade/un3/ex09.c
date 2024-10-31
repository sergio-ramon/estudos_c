/*
    Construa um programa que possibilite calcular a área total de 
    uma residência (sala,cozinha, banheiro, quartos etc.). O 
    programa deve solicitar a entrada do nome, a largura e o 
    comprimento de determinado cômodo até que o nome do cômodo seja
    “FIM”. O programa deve apresentar o valor total acumulado da 
    área residencial.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    float lrg, cmp, area, total = 0;
    char nome[30];

    printf("Digite o nome do cômodo ou \"FIM\" para finalizar: ");
    scanf("%s%*c", nome);

    for (int i = 0; nome[i] != '\0'; i++) {
        nome[i] = toupper(nome[i]);
    }

    while (strcmp(nome, "FIM") != 0) {
        lrg = 0;
        cmp = 0;
        area = 0;

        printf("Digite a largura: ");
        scanf("%f%*c", &lrg);
        printf("Digite o comprimento: ");
        scanf("%f%*c", &cmp);

        area = lrg * cmp;
        total += area;

        printf("Digite o nome do cômodo ou \"FIM\" para finalizar: ");
        scanf("%s%*c", nome);

        for (int i = 0; nome[i] != '\0'; i++) {
            nome[i] = toupper(nome[i]);
        }
    }

    if (total <= 0) printf("Sem valores para cálculo");
    else printf("\nArea residencial: %.2f m²", total);

    return 0;
}