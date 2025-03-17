/*Pedir um valor inteiro para o usuário.
Se o valor for negativo (-0), imprime "O valor XXX é negativo."
Se o valor digitado for par (num % 2 == 0) imprime "O valor XXX é par."
Se o número for ímpar, imprime "O número XXX é ímpar"*/

#include <stdio.h>

int main() {

    int numero;

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    printf("O número digitado foi: %d\n", numero);

    if (numero < 0) {
        printf("\nO número %d é negativo.", numero);
    }
    else if (numero % 2 == 0) {
        printf("O número %d é par.", numero);

    }else {
        printf("O número %d é ímpar.", numero);
    }
}