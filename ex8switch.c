/* Escreva um programa que peça ao usuário um valor entre 0 e 5 e devolva o número por extenso.
Use switch case.
*/

#include <stdio.h>

int main() {


    int opcao;

    printf("\n Escolha uma opção entre 1 e 5: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
         printf("O número que vocẽ escolheu é o 1 (um).\n");
         break;

        case 2:
         printf("O número que vocẽ escolheu é o 2 (dois).\n");
         break;
      
        case 3:
         printf("O número que vocẽ escolheu é o 3 (três).\n");
         break;

        case 4:
         printf("O número que vocẽ escolheu é o 4 (quatro).\n");
         break;

        case 5:
         printf("O número que vocẽ escolheu é o 5 (cinco).\n");
         break;

        default:
         printf("Opção inválida.\n");
            
    }
}