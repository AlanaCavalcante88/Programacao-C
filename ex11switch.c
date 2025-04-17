/* Simulador de Cantina Escolar
Faça um programa que exiba o menu:(a) Coxinha
(b) Pizza de ontem
(c) Sanduı́che misterioso
(d) Sair
Use switch-case para imprimir uma mensagem engraçada para cada prato, tipo: “Você escolheu
coxinha! Esperamos que ela esteja menos oleosa que a de ontem.”
Exemplo de solução: exercicioCantina.c
*/

#include <stdio.h>

int main() {

    int menu;

    printf("****MENU DA CANTINA*****");
    printf("\n1 - Coxinha");
    printf("\n2 - Pizza de ontem");
    printf("\n3 - Sanduı́che misterioso");
    printf("\n4 - Sair");
    printf("\nEscolha uma opção: ");
    scanf("%d", &menu);

    switch (menu) {

        case 1:
            printf("\nVocê escolheu uma coxinha! Esperamos que ela esteja menos oleosa que a de ontem.");
            break;
        
        case 2:
            printf("\nVocê escolheu uma pizza de ontem! Pizza de ontem é sempre melhor que a de hoje.");
            break;

        case 3:
            printf("\nVocê escolheu um sanduíche misterioso! O que será que tem dentro dele???? :-/");
            break;

        case 4:
            printf("\nVocê pediu para sair e não está com fome hoje!");
            break;

        default:
            printf("\nOpção inválida!.");
            return 1;
    }

    return 0;
}