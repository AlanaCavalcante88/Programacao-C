/* Máquina de Conselhos Aleatórios
Peça ao usuário um número de 1 a 5 e use switch-case para exibir um conselho inusitado, como:
“Cuidado com pombos... eles estão sempre de olho.”
Bônus: Se o número for inválido, exiba: “Essa máquina não tem um conselho para isso, mas tome
água!”
*/

#include <stdio.h>

int main() {

    int conselho;

    printf("Para o seu conselho de hoje, informe um número de 1 a 5: ");
    scanf("%d", &conselho);

    switch (conselho) {
    
    case 1:
        printf("\nCuidado com pombos... eles estão sempre de olho.");    
        break;
    
    case 2:
        printf("\nTudo que vai, volta. Menos as canetas que você empresta na sala de aula….");    
        break;

    case 3:
        printf("\nCuidado com pombos... eles estão sempre de olho.");    
        break;

    case 4:
        printf("\nCuidado com pombos... eles estão sempre de olho.");    
        break;

    case 5:
        printf("\nCuidado com pombos... eles estão sempre de olho.");    
        break;

    default:
        printf("\nEssa máquina não tem um conselho para isso, mas tome água!");   
        break;
    }
}