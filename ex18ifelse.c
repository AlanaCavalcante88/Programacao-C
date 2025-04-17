/* 18. Simulador de Apocalipse Zumbi
Pergunte: Você tem comida em casa? (1 para sim, 0 para não)
 Você sabe usar um taco de beisebol? (1 para sim, 0 para não)
Informe as chances de sobrevivência com base nas respostas.
Bônus: Adicione perguntas extras.
Exemplo de solução: exercicioZumbi.c, exercicioZumbiSwitch.c
*/

#include <stdio.h>

int main() {
int comida;
int beisebol;

printf("Você tem comida em casa? (Digite 1 para sim, 0 para não):");
scanf("%d", &comida);

printf("Você sabe usar um taco de beisebol? (Digite 1 para sim, 0 para não):");
scanf("%d", &beisebol);

    if (comida == 1 && beisebol == 1) {
        printf("\nVocê tem muita chance de sobreviver");
    } 
    else if (comida == 1 && beisebol != 1 || comida != 1 && beisebol == 1){
        printf("\nPode ser que você tenha alguma chance de sobreviver. Boa sorte!");
    }
    else {
        printf("\nProvavelmente você não vai sobreviver. Adeus!");
    }


}