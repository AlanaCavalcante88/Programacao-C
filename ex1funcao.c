// 1. Escreva uma função que receba um valor inteiro e retorne o seu dobro.


#include <stdio.h>

int valor() {
    return 2;
}

int minhaFuncao(){

    int y;
    printf("Informe um número inteiro: ");
    scanf("%d", &y);
    return y;
}

int main() {
    int resultado = minhaFuncao((valor));
    printf("\nO valor em dobro no número informado é %d.", resultado);
}

