/* 17. O Restaurante Aleatório
O usuário escolhe entre:
(a) Restaurante chique
(b) Fast food duvidoso
(c) Carrinho de rua
Imprima o “prato do dia” bizarro para cada opção.
Bônus: Pergunte se o usuário aceita ou recusa o prato.
*/

#include <stdio.h>
#include <string.h>

int main () {

    int opcoes;
    char resposta;

    printf("Escolha entre: (1) Restaurante chique; (2) Fast food duvidoso; (3) Carrinho de rua: ");
    scanf("%d", &opcoes);

    // Limpar buffer antes de ler um char
    getchar();

    switch (opcoes) {
        case 1:
        printf("\nRestaurante chique! O prato do dia é: Pasta ao molho de gorgonzolla azeda.");
        printf("\n Você aceita ou recusa? (S) ou (N)");
        scanf(" %c", &resposta);

            if(resposta == 'S' || resposta == 's') {
        printf("\nLogo o seu pedido irá sair. Obrigado!");
        } else {
            printf("Tudo bem! Eu te entendo. Até a próxima!");
        }
        break;

        case 2:
        printf("\nFast food duvidoso! O prato do dia é: Hamburguer com carne de ontem.");
        printf("\n Você aceita ou recusa? (S) ou (N)");
        scanf(" %c", &resposta);

            if(resposta == 'S' || resposta == 's') {
        printf("\nLogo o seu pedido irá sair. Obrigado!");
        } else {
            printf("Tudo bem! Eu te entendo. Até a próxima!");
        }
        break;

        case 3:
        printf("\nCarrinho de rua! O prato do dia é: Salsichão que não vendeu ontem.");
        printf("\n Você aceita ou recusa? (S) ou (N)");
        scanf(" %c", &resposta);
        
            if(resposta == 'S' || resposta == 's') {
        printf("\nLogo o seu pedido irá sair. Obrigado!");
        } else {
            printf("Tudo bem! Eu te entendo. Até a próxima!");
        }
        break;

        default:
        printf("\nOpção inválida!");
        break;
    }
}