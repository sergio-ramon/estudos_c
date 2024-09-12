#include <stdio.h>
#include <stdlib.h>

// Imprime as informações iniciais na tela, no começo da
// execução do programa
int infoInicial(){
    printf(
        "\a"
        "\nCALCULADORA DE JUROS COMPOSTOS\n"
        "-----------------------------------"
        "\nBem vindo a calculadora de Juros compostos!\n"
        "\nOs dados inseridos devem ser separados por \".\" no lugar\n"
        "de \",\" para que o cálculo seja apresentado corretamente.\n"
        "\nA taxa de correção de aporte é o quanto será aumentado, anualmente,\nno seu aporte. O ideal é que essa taxa esteja acima da inflação.\n"
        "-----------------------------------\n\n");
}

// Pega as informações e printa na tela, mês a mês até a quantidade
// solicitada.
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
    
    // Fazemos um for loop para que os cálculos sejam executados
    // até a quantidade de meses desejada pelo usuário.
    for (int i = 0; i <= tempo*12; i++) {
        // Caso seja o início da contagem, mostramos como 1º ano
        if (i == 0) {
            printf("------------------------------------");
            printf("%dº ano\n", ((i/12)+1));
        }
        // Se não, seguimos contando os anos posteriores
        else {
            // Caso seja o primeiro mês, levaremos em conta o aporte
            // inicial para começo de cálculos
            if (i < 2){
                juros = total * ((taxa/100)/12);
                total += aporteInicial + juros;
            }
            // Caso contrário, prosseguimos com o aporte mensal
            else {
                juros = total * ((taxa/100)/12);
                total += aporteMensal + juros;
            }

            // A cada 12 meses imprimimos na tela o número do ano que
            // será calculado a partir do próximo mês
            if (count == 12){
                printf("------------------------------------");
                printf("%dº ano\n", ((i/12)+1));

                // Usamos a informação de taxa de correção para corrigir
                // o valor do aporte a cada ano
                aporteMensal += aporteMensal * (taxaAporte/100);
                count = 0;
            }
            
            geraMeses(i, aporteInicial, aporteMensal, juros, total);

            // Atualização das variáveis para apresentação no final
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

    return 0;
}