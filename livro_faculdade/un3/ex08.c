/*
    Elabore um programa que receba a idade, o peso, o sexo e o 
    estado civil de várias pessoas e imprima a quantidade daquelas 
    que são casadas, solteiras, separadas e viúvas. Apresente a 
    média de idade e de peso. O algoritmo finaliza quando for 
    informado o valor zero para idade.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "Português");
    system("chcp 65001");

    int idade, qntd = 0, civil = 0, sexo = 0; 
    int casad = 0, solt = 0, sep = 0, viuv = 0;
    float peso, somaI, somaP, medIdade, medPeso;

    printf("Digite a idade da pessoa ou 0 para finalizar: ");
    scanf("%d%*c", &idade);
    
    while (idade != 0) {
        qntd++;
        somaI += idade;
        somaP += peso;

        printf("Digite o peso da pessoa: ");
        scanf("%f%*c", &peso);

        do {
            printf("Digite o sexo da pessoa: ");
            printf("\n1 - Masculino");
            printf("\n2 - Feminino\n");
            scanf("%d%*c", &sexo);
        } while (sexo < 1 || sexo > 2);
        
        do {
            printf("Digite o estado civil: ");
            printf("\n1 - Casado(a)");
            printf("\n2 - Solteiro(a)");
            printf("\n3 - Separado(a)");
            printf("\n4 - Viuvo(a)\n");
            scanf("%d%*c", &civil);
        }while (civil < 1 || civil > 4);

        switch (civil) {
            case 1:
                casad++;
                break;
            case 2:
                solt++;
                break;
            case 3:
                sep++;
                break;
            case 4:
                viuv++;
                break;
        }

        printf("Digite a idade da pessoa ou 0 para finalizar: ");
        scanf("%d%*c", &idade);
    }

    medIdade = somaI / qntd;
    medPeso = somaP / qntd;

    printf("\nPessoas casadas: %d", casad);
    printf("\nPessoas solteiras: %d", solt);
    printf("\nPessoas separadas: %d", sep);
    printf("\nPessoas viuvas: %d", viuv);
    printf("\nMédia das idades: %.2f", medIdade);
    printf("\nMédia dos pesos: %.2f", medPeso);

    return 0;
}