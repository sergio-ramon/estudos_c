#include <stdio.h>
#include <stdlib.h>

// Função com as informações da tela inicial
int infoInicial(){
    printf("\nCALCULADORA DE JUROS COMPOSTOS\n");
    printf("-----------------------------------");
    printf("\nBem vindo a calculadora de Juros compostos!");
    printf("\n\nOs dados inseridos devem ser separados por \".\" no lugar\nde \",\" para que o cálculo seja apresentado corretamente.\n");
    printf("\nA taxa de correção de aporte é o quanto será\n aumentado, anualmente, no seu aporte.\n");
    printf("-----------------------------------\n\n");
}

int main(){
    float aporteInicial, aporteMensal, taxa, taxaAporte;
    float total, juros, aporteTotal, jurosTotais;
    int tempo, count = 0;
    
    // Chama as infos da tela incial
    infoInicial();

    // Coleta os dados do aporte, taxa e tempo do usuário
    printf("Digite o aporte inicial: ");
    scanf("%f", &aporteInicial);
    printf("Digite o aporte mensal: ");
    scanf("%f", &aporteMensal);
    printf("Digite a taxa anual: ");
    scanf("%f", &taxa);
    printf("Digite a taxa de correção de aporte: ");
    scanf("%f", &taxaAporte);
    printf("Digite o tempo em anos: ");
    scanf("%i", &tempo);

    // Limpa a tela
    system("cls||clear");
    
    for (int i = 0; i <= tempo*12; i++) {
        if (i == 0) {
            printf("------------------------------------");
            printf("%dº ano\n", ((i/12)+1));
        }
        else {
            if (i < 2){
                juros = total * ((taxa/100)/12);
                total += aporteInicial + juros;
            }
            else {
                juros = total * ((taxa/100)/12);
                total += aporteMensal + juros;
            }

            if (count == 12){
                printf("------------------------------------");
                printf("%dº ano\n", ((i/12)+1));

                aporteMensal += aporteMensal * (taxaAporte/100);
                count = 0;
            }
            
            printf("Mês nº %d\n", i);
            printf("-----------------------------\n");
            if (i < 2){
                printf("Aporte\t:\tR$ %.2f\n", aporteInicial);
            }
            else{
                printf("Aporte\t:\tR$ %.2f\n", aporteMensal);
            }
            printf("Juros\t:\tR$ %.2f\n", juros);
            printf("Total\t:\tR$ %.2f\n", total);
            printf("-----------------------------\n\n");

            aporteTotal += aporteMensal;
            jurosTotais += juros;
            count++;
        }
    }

    // Retornamos os dados totais ao usuário
    printf("Tempo: %d ano(s)\n", tempo);
    printf("Taxa: %.2f%% a.a\n", taxa);
    printf("-----------------------------------\n");
    printf("Aporte total\t:\tR$ %.2f\n", aporteTotal);
    printf("Juros totais\t:\tR$ %.2f\n", jurosTotais);
    printf("Total acumulado\t:\tR$ %.2f\n\n", total);

    return (0);
}