/*
    Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e mostre: 
        a) a hora digitada convertida em minutos; 
        b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior; 
        c) o total dos minutos convertidos em segundos.
*/

#include <stdio.h>

int main() {
    int horas, minutos, hrsMin, totalMinutos, segundos;
    
    printf("Digite as horas: ");
    scanf("%d%*c", &horas);
    printf("Digite os minutos: ");
    scanf("%d%*c", &minutos);

    hrsMin = horas * 60;
    totalMinutos = hrsMin + minutos;
    segundos = totalMinutos * 60;

    printf("\nHoras em minutos: %d", hrsMin);
    printf("\nTotal de minutos: %d", totalMinutos);
    printf("\nTotal em segundos: %d", segundos);

    return 0;
}