/*3. Escreva uma função que não receba entrada nenhuma e retorne 2. Use essa função como entrada
da função do exercı́cio 1.*/

#include <stdio.h>

int valorDois() {
    return 2;
}

// Função que calcula o dobro (ex1funcao)
int minhaFuncao(int numero){
    return numero * 2;
}

//Chamando as funções diretamente no printf
int main() {
    printf("\nO valor em dobro no número informado é %d.", minhaFuncao(valorDois()));

    return 0;
}

