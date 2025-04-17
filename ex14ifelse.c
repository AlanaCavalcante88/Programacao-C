/*Calculadora de Férias
Pergunte ao usuário quantos dias faltam para as férias e exiba:
 Menos de 7 dias: “Uhul! Quase lá! Já sente o cheiro da liberdade?”
 Entre 7 e 30 dias: “Força! Vai passar mais rápido do que parece.”
 Mais de 30 dias: “Coragem, guerreiro(a). Ainda falta uma eternidade.”
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int dias;

    printf("Quantos dias faltam para as férias? ");
    scanf("%d", &dias);

    if (dias < 7) {
        printf("\nUhul! Quase lá! Já sente o cheiro da liberdade?");
    }
    else if (dias >= 7 && dias <= 30) {
        printf("\nForça! Vai passar mais rápido do que parece.");
    } 
    else {
        printf("\nCoragem, guerreiro(a). Ainda falta uma eternidade.");
    }

}