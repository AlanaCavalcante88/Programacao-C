/* 9. Pense em uma lista de objetos, cada um com um código, e seus respectivos valores. O usuário
seleciona um objeto, diz quantas unidades quer e o programa retorna o valor total. Use switch
case.
Exemplo de solução: exercicioVendinha.c
*/

#include <stdio.h>

int main() {

   int codigo, quantidade;
   float preco, total;

   //Exibir opções ao usuário
   printf("*******Bem vindo à vendinha!*********\n");
   printf("\nCódigo 1 - Maçã (R$ 2.00 cada)\n");
   printf("Código 2 - Banana (R$ 1.50 cada\n");
   printf("Código 3 - Laranja (R$ 1.75 cada)\n");
   printf("Código 4 - Pêra (R$ 2.50 cada)\n");
   printf("\nDIGITE O CÓDIGO DO PRODUTO DESEJADO: ");
   scanf("%d", &codigo);

   printf("\nDIGITE A QUANTIDADE DESEJADA: ");
   scanf("%d", &quantidade);

   //Determinar o preço do produto
   switch (codigo) {
    case 1:
        preco = 2.00;
        break;

    case 2:
        preco = 1.50;
        break;

    case 3:
        preco = 1.75;
        break;

    case 4:
        preco = 2.50;
        break;

    default:
        printf("Código inválido!\n");
        return 1; //Sai do programa com erro
   }

   //Calcular total
   total = preco * quantidade;

   printf("TOTAL A PAGAR: R$ %.2f\n", total);

   return 0;

}