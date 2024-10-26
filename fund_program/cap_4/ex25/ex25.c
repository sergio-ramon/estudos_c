/*
    Uma empresa decidiu dar uma gratificação de Natal a seus
    funcionários, baseada no número de horas extras e no número de horas
    que o funcionário faltou ao trabalho. O valor do prêmio é obtido
    pela consulta à tabela que se segue, na qual:
    H = número de horas extras – (2/3 * (número de horas falta))
        H (MINUTOS)             PRÊMIO (R$)
        > = 2.400               500,00
        1.800 2.400             400,00
        1.200 1.800             300,00
        600 1.200               200,00
        < 600                   100,00
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "Português");
    system("cls");

    int hExtras, hFaltas;
    float h, premio;

    printf("Digite o número de horas extras: ");
    scanf("%d%*c", &hExtras);
    printf("Digite o número de horas faltas: ");
    scanf("%d%*c", &hFaltas);

    h = hExtras - (2/3 * hFaltas);
    h *= 60;

    if (h < 600) {
        premio = 100;
    } else if (h <= 1200) {
        premio = 200;
    } else if (h <= 1800) {
        premio = 300;
    } else if (h <= 2400) {
        premio = 400;
    } else {
        premio = 500;
    }

    printf("\nO valor do prêmio é: R$ %.2f", premio);

    return 0;
}