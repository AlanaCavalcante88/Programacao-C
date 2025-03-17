/*Calculadora
Qual operação você deseja realizar?
soma ou + (caracter)
subtração ou -
multiplicação *

Pede dois valores float para o usuário e retorna a operação escolhida.
*/


#include <stdio.h>

int main() {

printf("****** CALCULADORA ******");

float num1, num2;
printf("\nDigite um valor:");
scanf("%f", &num1);
printf("Digite outro valor:");
scanf("%f", &num2);

char operacao;
printf("Qual operação você deseja realizar?(+,-,*,/):");
scanf(" %c", &operacao); //o espaço antes de %c é para ele entender que tem um espaço quando vc digita num1 e num2


if (operacao == '+') {
    printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
} else if (operacao == '-') {
    printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
}
}
