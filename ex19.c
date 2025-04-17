/* 19. Gerador de Nome de Super-herói
Peça ao usuário:
 Sua cor favorita.
 O último animal que viu hoje.
Exiba: “Seu nome de super-herói é: O(a) [cor] [animal]!”
Bônus: Peça também um “poder especial” e monte uma descrição completa.
*/

#include <stdio.h>
#include <string.h>

int main() {

char cor[20];
char animal[30];
char poder[50];

printf("\nQual a sua cor favorita?");
fgets(cor, sizeof(cor), stdin);

printf("\nO último animal que você viu hoje: ");
fgets(animal, sizeof(animal), stdin);

printf("\nMe fale um pode especial: ");
fgets(poder, sizeof(poder), stdin);

    // Remove os '\n' das strings
    cor[strcspn(cor, "\n")] = '\0';
    animal[strcspn(animal, "\n")] = '\0';
    poder[strcspn(poder, "\n")] = '\0';

    printf("\nSeu nome de super-herói é: %s %s!", animal, cor);
    printf("\nDescrição: Com o incrível poder de %s, você protege o mundo com estilo!\n", poder);

    return 0;
}