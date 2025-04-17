//2. Escreva uma função que receba dois números e retorne a média aritmética deles.

#include <stdio.h>

float calcularMedia(float num1, float num2) {
    return (num1 + num2) / 2;
}

int main() {
    float num1, num2;

    printf("Digite o primeiro número (num1): ");
    scanf("%f", &num1);

    printf("Digite o segundo número (num2): ");
    scanf("%f", &num2);

    float media = calcularMedia(num1, num2);
    printf("\nA média entre %.2f e %.2f é: %.2f\n", num1, num2, media);
}
