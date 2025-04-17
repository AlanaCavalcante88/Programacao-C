/*Exercício4: Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que
C.*/ 


#include <stdio.h>

int main(){

int A;
int B;
int C;

printf("Informe um valor para A: ");
scanf("%d", &A);

printf("Informe um valor para B: ");
scanf("%d", &B);

printf("Informe um valor para C: ");
scanf("%d", &C);

if (A + B < C) {
    printf("\nA soma de A + B é menor que C.");
} else {
    printf("\nA soma de A + B é maior que C.\n");
  }
}