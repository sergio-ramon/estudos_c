/*
    Para os seres humanos, trabalhar com séries numéricas sem o
    auxílio de ferramentas computacionais pode ser um grande 
    transtorno. Assim sendo, construa um programa que leia o número
    de termos da série e imprima o valor de S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    int termos;
    float s, div;

    printf("Digite o núero de termos: ");
    scanf("%d%*c", &termos);

    s = 0;
    for (int i = 1; i <= termos; i++) {
        div = i;
        s += 1/div;
    }

    printf("\nO valor de S é: %.2f", s);
    
    return 0;
}