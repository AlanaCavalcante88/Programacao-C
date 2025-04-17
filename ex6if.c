/*Exercício6: Escreva um algoritmo que leia três valores inteiros e mostre-os em ordem crescente.*/

#include <stdio.h>

int main() {

int num1, num2, num3, temp;

printf("Informe três valores: ");
scanf("%d%d%d", &num1, &num2, &num3);

   // Ordena num1, num2 e num3 em ordem crescente usando trocas
  if (num1 > num2) {
    temp = num1;
    num1 = num2;
    num2 = temp;
  }

  if (num1 > num3) {
    temp = num1;
    num1 = num3;
    num3 = temp;
  }

  if (num2 > num3) {
    temp = num2;
    num2 = num3;
    num3 = temp;
  }
  //num1 <= num2 <= num3, como esperado.
  printf("Ordem crescente dos números: %d %d %d\n", num1, num2, num3);
}