/* 10. Detector de Alienı́genas
Escreva um programa que pergunte ao usuário:
 Quantos olhos você tem?
 Quantos braços você tem?
Se a quantidade de olhos ou de braços for diferente de 2, imprima: “ALERTA! Possı́vel alienı́gena
detectado!”. Caso contrário, imprima: “Você parece humano... por enquanto.”
Exemplo de solução: exercicioAlienigena.c
*/

#include <stdio.h>

int main() {

    int olhos;
    int bracos;

    printf("Quantos olhos você tem? ");
    scanf("%d", &olhos);
    printf("\nQuantos braços você tem? ");
    scanf("%d", &bracos);

    if (olhos != 2 || bracos != 2) {
        printf("ALERTA! Possível alienígena detectado!");
    } else {
        printf("Você parece humano... por enquanto.");
    }
}