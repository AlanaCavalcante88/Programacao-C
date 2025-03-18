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

char operacao;
printf("\nQual operação você deseja realizar?(+,-,*,/):");
scanf(" %c", &operacao); //o espaço antes de %c é para ele entender que tem um espaço quando vc digita num1 e num2


switch (operacao) { 
    case '+':
    printf("\nDigite dois valores:");
    scanf("%f%f", &num1, &num2);
    printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    break;

    case '-': 
    printf("\nDigite dois valores:");
    scanf("%f%f", &num1, &num2);
    printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);

    case '*': 
    printf("\nDigite dois valores:");
    scanf("%f%f", &num1, &num2);
    printf("\nResultado: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

    case '/': 
    printf("\nDigite dois valores:");
    scanf("%f%f", &num1, &num2);
    printf("\nResultado: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);

  }
}