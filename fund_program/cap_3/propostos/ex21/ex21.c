/*
    Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir: 
        a) a hora trabalhada vale 1/8 do salário mínimo; 
        b) a hora extra vale 1/4 do salário mínimo;
        c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada; 
        d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra; 
        e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
*/

#include <stdio.h>

int main() {
    int hrsTrab, hrsExt;
    float salMinimo, valTrab, valExt;
    float salBruto, salExt, aReceber;

    printf("Digite o valor do salario minimo: ");
    scanf("%f%*c", &salMinimo);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d%*c", &hrsTrab);
    printf("Digite a quantidade de horas extras: ");
    scanf("%d%*c", &hrsExt);

    valTrab = salMinimo / 8;
    valExt = salMinimo / 4;
    salBruto = hrsTrab * valTrab;
    salExt = hrsExt * valExt;
    aReceber = salBruto + salExt;

    printf("Salario a receber: %.2f", aReceber);

    return 0;
}