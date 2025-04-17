/*Exercício7: Faça um programa que capture duas notas de um aluno, exiba a sua média (média aritmética) e
apresente uma mensagem de parabéns caso esteja aprovado (média superior ou igual a 7), uma
mensagem avisando que precisa fazer prova final caso a nota esteja entre 3 e 7 e uma mensagem
avisando que ele foi reprovado, caso a nota seja menor que 3.*/

#include <stdio.h>

int main() {

    float nota1;
    float nota2;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    if(media >= 7) {
        printf("\nParabéns! Você foi aprovado. A sua média é %.2f", media);
    }
    else if (media >= 3 && media < 7) {
        printf("\nVocê precisará fazer prova final. A sua média é %.2f", media);
    } else {
        printf("\nVocê foi reprovado. A sua média é %.2f", media);
    }



}