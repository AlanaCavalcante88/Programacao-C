/*Exercício5: Escreva um algoritmo que leia três valores inteiros e mostre o menor (ou maior)*/

#include <stdio.h>

int main() {

    int num1;
    int num2; 
    int num3;

    printf("Informe três valores inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 < num2 && num3) {
        printf("\nO primeiro número informado (%d) é menor que o segundo e o terceiro número.\n", num1);
    }
    else if(num2 < num1 && num3){
        printf("\nO segundo número informado (%d) é menor que o primeiro e o terceiro número.\n", num2);
    }
    else if(num3 < num1 && num2) {
        printf("\nO terceiro número informado (%d) é menor que o primeiro e o segundo número.\n", num3);
    } else {
        printf("\nOs valores são iguais.");
    }
}