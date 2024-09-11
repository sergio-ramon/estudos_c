#include <stdio.h>
#include <math.h>

int main (){
    int numero;

    printf("Digite um número: ");
    scanf("%i", &numero);

    float raiz = sqrt(numero);
    int quadrado = pow(numero, 2);
    printf("A raiz quadrada dele é: %.2f\n", raiz);
    printf("Quando elevado ao quadrado, temos: %d\n", quadrado);

    return (0);
}