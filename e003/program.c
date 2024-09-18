#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Início do programa
int main(){
    // Seta a linguagem para corrigir problemas de acentuação no terminal
    system("chcp 65001");
    setlocale(LC_ALL, "Português");

    do { // Looping do programa até finalização
        float aporteInicial = 0, aporteMensal = 0, taxa = 0, taxaAporte = 0;
        float total = 0, juros = 0, aporteTotal = 0, jurosTotais = 0;
        int tempo = 0, count = 0, result;
        
        do{ // Looping de coleta de dados

            limpaTela(); // Limpa a tela
            
            infoInicial(); // Chama as infos da tela incial

            // Coleta os dados do aporte, taxa e tempo do usuário
            aporteInicial = coletaDados("Digite o aporte inicial: ", 0, 1000000000);
            aporteMensal = coletaDados("Digite o aporte mensal: ", 0, 1000000000);
            taxa = coletaDados("Digite a taxa anual: ", 0, 100);
            taxaAporte = coletaDados("Digite a taxa de correção de aporte: ", 0, 100);
            tempo = (int) coletaDados("Digite o tempo em anos: ", 1, 1000);
        }while (confirma(aporteInicial, aporteMensal, taxa, taxaAporte, tempo) == 1);

        limpaTela(); // Limpa a tela

        // Imprime a primeira linha de marcação de ano no início
        printf(
            "------------------------------------ "
            "%dº ano\n", 1);
        
        // Fazemos um for loop para que os cálculos sejam executados
        // até a quantidade de meses desejada pelo usuário.
        for (int i = 1; i <= tempo*12; i++) {

            // A cada 12 meses, imprimimos na tela o número do ano que
            // será calculado a partir do próximo mês
            if (count == 12){
                printf(
                    "------------------------------------ "
                    "%dº ano\n", ((i/12)+1));

                // Usamos a informação de taxa de correção para corrigir o valor do aporte a cada ano
                aporteMensal += aporteMensal * (taxaAporte/100);
                count = 0;
            }
            // Se não, seguimos contando os anos posteriores
            else {
                // Caso seja o primeiro mês, levaremos em conta o aporte
                // inicial para começo de cálculos
                if (i < 2){
                    calculoMensal(&juros, &total, taxa, aporteInicial);
                    // Atualização das variáveis para apresentação no final
                    totais(&aporteTotal, aporteInicial, &jurosTotais, juros);
                }
                else {
                    calculoMensal(&juros, &total, taxa, aporteMensal);
                    // Atualização das variáveis para apresentação no final
                    totais(&aporteTotal, aporteMensal, &jurosTotais, juros);
                }

                geraMeses(i, aporteInicial, aporteMensal, juros, total);
                count++;
            }
        }

        // Retornamos os dados totais ao usuário
        printf(
            "Seus resultados após %d anos, considerando %.2f%% a.a:\n"
            "------------------------------------------------------------\n"
            "Aporte total realizado\t\t\t:\tR$ %.2f\n"
            "Juros totais ganhos\t\t\t:\tR$ %.2f\n"
            "Total acumulado ao final do período\t:\tR$ %.2f\n",
            tempo, taxa, aporteTotal, jurosTotais, total);
    }while (fim() == 1);

    return 0;
}

// Imprime as informações iniciais na tela, no começo da
// execução do programa
void infoInicial(){
    printf(
        "CALCULADORA DE JUROS COMPOSTOS\n"
        "-----------------------------------"
        "\nBem vindo a calculadora de Juros compostos!\n"
        "\nOs dados inseridos devem ser separados por \".\" no lugar\n"
        "de \",\" para que o cálculo seja apresentado corretamente.\n"
        "\nA taxa de correção de aporte é o quanto será aumentado, anualmente,\nno seu aporte. O ideal é que essa taxa esteja acima da inflação.\n"
        "-----------------------------------\n\n");
}

// Limpa as informações que estão no Buffer
void limpaBuffer(){
    int c; // Variável para armazenar valor do Buffer

    // Armazena cada valor do Buffer por vez
    // Verifica se cada valor do Buffer é igual a \n
    while ((c = getchar()) != '\n' && c != EOF){};
}

// Limpa a tela de acordo com o sistema operacional
void limpaTela(){
    #ifdef _WIN32
        system("cls"); // Caso esteja no Windows
    #else
        system("clear"); // Caso esteja no Linux ou Mac
    #endif
}

// Coleta os dados digitados e armazena nas variáveis de main
float coletaDados(char *msg, float lmtInf, float lmtSup){
    float valor;
    int result;

    do{
        printf("%s", msg);
        result = scanf("%f", &valor);
        limpaBuffer();
    } while (result != 1 || valor < lmtInf || valor > lmtSup);

    return valor; 
}

// Verifica se o usuário deseja prosseguir ou alterar os dados
int confirma(float apIni, float apMen, float t, float tAp, int temp){
    int decisao, resultC;

    limpaTela(); // Limpa a tela

    //Exibe os dados informados
    printf(
        "Confira os dados informados:\n"
        "Aporte inicial\t\t\t:\tR$ %.2f\n"
        "Aporte mensal\t\t\t:\tR$ %.2f\n"
        "Taxa de retorno anual\t\t:\t%.2f%%\n"
        "Taxa de correção de aporte\t:\t%.2f%%\n"
        "Tempo em anos\t\t\t:\t%d\n", apIni, apMen, t, tAp, temp);

    do{
        printf(
        "\n------------------------------\n"
        "Deseja alterar os dados ou prosseguir?\n"
        "1 - Alterar dados informados\n"
        "2 - Prosseguir para o cálculo\n"
        "------------------------------\n"
        "Escolha a opção desejada: ");
        resultC = scanf("%d", &decisao);
        limpaBuffer(); // Limpeza do Buffer
    }while (resultC != 1 || decisao <= 0 || decisao >= 3);

    return decisao;
}

// Pega as informações e printa na tela, mês a mês até a quantidade
// solicitada.
void geraMeses(int m, float apIni, float apMen, float j, float t){
    printf(
        "Mês nº %d\n"
        "-----------------------------\n",
        m);
    // Caso seja o primeiro mês, consideramos o aporte inicial
    if (m < 2){
        printf("Aporte\t:\tR$ %.2f\n", apIni);
    }
    // A partir do segundo mês, consideramos o aporte mensal
    else{
        printf("Aporte\t:\tR$ %.2f\n", apMen);
    }
    printf(
        "Juros\t:\tR$ %.2f\n"
        "Total\t:\tR$ %.2f\n"
        "-----------------------------\n\n",
        j, t);
}

// Calculamos os juros mensais e atualizamos o valor total
void calculoMensal(float *j, float *t, float taxa, float ap){
    *j = *t * ((taxa/100)/12);
    *t += ap + *j;
}

// Atualizamos os totais que serão exibidos no final do programa
void totais(float *apTotal, float ap, float *jTotal, float j){
    *apTotal += ap;
    *jTotal += j;
}

// Opções de término de programa
int fim(){
    int opcao;
    
    do { // Looping de verificação de resposta do usuário
        printf(
            "\nO que deseja fazer?\n\n"
            "1 - Novo cálculo\t\t2 - Finalizar\n"
            "-----------------------------------------------\n"
            "Escolha a opção desejada: ");
        scanf("%d", &opcao);
        limpaBuffer();
    // Repetimos até que a resposta seja 1 ou 2
    }while (opcao < 1 || opcao > 2);

    return opcao == 1 ? 1 : 0; // Retorna 1 (novo cálculo), 0 (fim)
}