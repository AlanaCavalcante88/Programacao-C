/*Pergunte ao usuário o mês e devolva quantos dias ele tem*/

#include <stdio.h>

int main() {

    int mes;
    
    printf("Informe um mês (1 a 12): ");
    scanf("%d", &mes);

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        printf("O mês %d tem 31 dias.\n", mes);
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 ) {
        printf("O mês %d tem 30 dias.\n", mes);
    } 
    else if (mes == 2) {
        printf("O mês %d pode ter 28 ou 29 dias (em anos bissextos).\n", mes);
    } else {
        printf("Mês inválido!\n");
    }
}