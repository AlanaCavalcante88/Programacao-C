/*Horóscopo Aleatório
Peça ao usuário o número do mês (1 a 12) e use switch-case para exibir um “horóscopo do dia”
maluco, como: ”Leão: fuja de patos raivosos hoje.”
Exemplo de solução: exercicioHoroscopo.c
*/


#include <stdio.h>

int main() {

    int mes;

    printf("Para ver a mensagem do horóscopo, informe o número do seu mês (1 a 12): ");
    scanf("%d", &mes);

    switch (mes) {
    case 1:
        printf("\nCapricórnio! Agora não posso, tô ocupado!");
        break;

    case 2:
        printf("\nAquário! Já vou responder sua mensagem! Espera só uns 7 meses!");
        break;

    case 3:
        printf("\nPeixes! Viu, qual é o seu nome mesmo?");
        break;
    
    case 4:
        printf("\nÁries! Sai da frente que eu tô passando!");
        break;

    case 5:
        printf("\nTouro! Sentiu um vazio aí dentro? Come, porque é fome!");
        break;  

    case 6:
        printf("\nGêmeos! Como assim? Eu não tenho nada com isso!");
        break; 

    case 7:
        printf("\nCâncer! Manhêêê!!!");
        break; 

    case 8:
        printf("\nLeão! Leão não nasce, estreia!!!");
        break; 

    case 9:
        printf("\nVirgem! Se tudo estiver no lugar, não consigo me irritar.");
        break; 

    case 10:
        printf("\nLibra! Eu vou! Não vou, não. Vou sim! Ai, sei lá…");
        break; 

    case 11:
        printf("\nEscorpião! Deus é fiel. E você?");
        break; 

    case 12:
        printf("\nSagitário! Não me segue que eu não sou série!");
        break; 

    default:
        printf("\nMês inválido! Escolha de 1 a 12.");
        break;
    }
}