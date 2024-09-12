#include <stdio.h>
#include <stdlib.h>

// Imprime as informações iniciais na tela, no começo da
// execução do programa
void infoInicial(){
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

void limpaBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF){};
}

// Pega as informações e printa na tela, mês a mês até a quantidade
// solicitada.
void geraMeses(int m, float apIni, float apMen, float j, float t){
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

void calculoMensal(int x, float *j, float *t, float taxa, float ap){
    *j = *t * ((taxa/100)/12);
    *t += ap + *j;
}

void totais(float *apTotal, float apMen, float *jTotal, float j){
    *apTotal += apMen;
    *jTotal += j;
}

int main(){
    float aporteInicial = 0, aporteMensal = 0, taxa = 0, taxaAporte = 0;
    float total = 0, juros = 0, aporteTotal = 0, jurosTotais = 0;
    int tempo = 0, count = 0, result;
    
    // Chama as infos da tela incial
    infoInicial();

    // Coleta os dados do aporte, taxa e tempo do usuário
    do{
        printf("Digite o aporte inicial: ");
        result = scanf("%f", &aporteInicial);
        limpaBuffer();
    }while (result != 1 || aporteInicial < 0);
    do{
        printf("Digite o aporte mensal: ");
        result = scanf("%f", &aporteMensal);
        limpaBuffer();
    }while (result != 1 || aporteMensal < 0);
    do{
        printf("Digite a taxa anual: ");
        result = scanf("%f", &taxa);
        limpaBuffer();
    }while (result != 1 || taxa < 0 || taxa > 100);
    do{
        printf("Digite a taxa de correção de aporte: ");
        result = scanf("%f", &taxaAporte);
        limpaBuffer();
    }while (result != 1 || taxaAporte < 0 || taxaAporte > 100);
    do{
        printf("Digite o tempo em anos: ");
        result = scanf("%i", &tempo);
        limpaBuffer();
    }while (result != 1 || tempo <= 0);

    // Atualiza o total final com o valor de aporte inicial
    aporteTotal += aporteInicial;
    
    // Fazemos um for loop para que os cálculos sejam executados
    // até a quantidade de meses desejada pelo usuário.
    for (int i = 0; i <= tempo*12; i++) {
        // Caso seja o início da contagem, mostramos como 1º ano
        if (i == 0) {
            printf(
                "\n------------------------------------ "
                "%dº ano\n", ((i/12)+1));
        }
        // Se não, seguimos contando os anos posteriores
        else {
            // Caso seja o primeiro mês, levaremos em conta o aporte
            // inicial para começo de cálculos
            if (i < 2){
                calculoMensal(i, &juros, &total, taxa, aporteInicial);
            }
            else {
                calculoMensal(i, &juros, &total, taxa, aporteMensal);
            }
            
            // A cada 12 meses imprimimos na tela o número do ano que
            // será calculado a partir do próximo mês
            if (count == 12){
                printf(
                    "------------------------------------ "
                    "%dº ano\n", ((i/12)+1));

                // Usamos a informação de taxa de correção para corrigir
                // o valor do aporte a cada ano
                aporteMensal += aporteMensal * (taxaAporte/100);
                count = 0;
            }
            
            geraMeses(i, aporteInicial, aporteMensal, juros, total);

            // Atualização das variáveis para apresentação no final
            totais(&aporteTotal, aporteMensal, &jurosTotais, juros);
            count++;
        }
    }

    // Retornamos os dados totais ao usuário
    printf(
        "Seus resultados após %d anos, considerando %.2f%% a.a:\n"
        "-------------------------------------------------------\n"
        "Aporte total\t:\tR$ %.2f\n"
        "Juros totais\t:\tR$ %.2f\n"
        "Total acumulado\t:\tR$ %.2f\n\n",
        tempo, taxa, aporteTotal, jurosTotais, total);

    return 0;
}