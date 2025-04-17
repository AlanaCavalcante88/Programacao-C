/*16. Classificador de Monstros
Pergunte:
 Quantos metros você mede?
 Quantas cabeças você tem?
Classifique o usuário como ogro, goblin ou humano com base nas respostas.
Bônus: Crie classificações adicionais com if...else.
*/

#include <stdio.h>

int main() {

    float metros;
    int cabecas;

    printf("Quantos metros você mede?");
    scanf("%f", &metros);

    printf("Quantas cabeças você tem?");
    scanf("%d", &cabecas);

    if (cabecas == 1 && metros >= 2.20) {
        printf("Você é um ogro!");
    } 
    else if (cabecas == 1 && metros <= 1.30) {
        printf("Você é um goblin!");
    } else {
        printf("Você é um humano!");
    }

}