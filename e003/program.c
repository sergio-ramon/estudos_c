#include <stdio.h>
#include <stdlib.h>

// Função com as informações da tela inicial
int infoInicial(){
    printf(
        "\nCALCULADORA DE JUROS COMPOSTOS\n"
        "-----------------------------------"
        "\nBem vindo a calculadora de Juros compostos!\n"
        "\nOs dados inseridos devem ser separados por \".\" no lugar\n"
        "de \",\" para que o cálculo seja apresentado corretamente.\n"
        "\nA taxa de correção de aporte é o quanto será aumentado, anualmente,\nno seu aporte.\n"
        "-----------------------------------\n\n");
}

int geraMeses(int m, float apIni, float apMen, float j, float t){
    printf(
                "Mês nº %d\n"
                "-----------------------------\n",
                m);
            if (m < 2){
                printf("Aporte\t:\tR$ %.2f\n", apIni);
            }
            else{
                printf("Aporte\t:\tR$ %.2f\n", apMen);
            }
            printf(
                "Juros\t:\tR$ %.2f\n"
                "Total\t:\tR$ %.2f\n"
                "-----------------------------\n\n",
                j, t);
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
            
            geraMeses(i, aporteInicial, aporteMensal, juros, total);

            aporteTotal += aporteMensal;
            jurosTotais += juros;
            count++;
        }
    }

    // Retornamos os dados totais ao usuário
    printf(
        "Tempo: %d ano(s)\n"
        "Taxa: %.2f%% a.a\n"
        "-----------------------------------\n"
        "Aporte total\t:\tR$ %.2f\n"
        "Juros totais\t:\tR$ %.2f\n"
        "Total acumulado\t:\tR$ %.2f\n\n",
        tempo, taxa, aporteTotal, jurosTotais, total);

    return (0);
}