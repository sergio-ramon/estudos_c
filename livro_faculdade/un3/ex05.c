/*
    Para poder classificar um conjunto de dados, é comum que 
    programadores utilizem estruturas de decisão associadas a 
    estruturas de repetição. Assim sendo, construa um programa que 
    apresente todos os números divisíveis por três e por sete que 
    sejam menores que 30.
*/

#include <stdio.h>

int main() {
    for (int i = 0; i < 30; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}