
/*Teste de Supervilão
Pergunte ao usuário:
 Quantos patinhos de borracha você tem?
 Quantos risos malignos você dá por dia?
Se tiver mais de 5 patinhos de borracha ou rir maleficamente mais de 3 vezes ao dia, imprima:
“Potencial supervilão detectado!”. Caso contrário: ”Você parece normal... ou está escondendo
algo?”
*/


#include <stdio.h>
#include <stdlib.h>

int main() {

    int patinhos;
    int risos;

    printf("Quantos patinhos de borracha você tem? ");
    scanf("%d", &patinhos);

    printf("\nQuantos risos malignos você dá por dia? ");
    scanf("%d", &risos);

    if (patinhos >= 5 || risos >= 3) {
        printf("\nPotencial supervilão detectado!");
    } else {
        printf("\nVocê parece normal... ou está escondendo algo?");
    }
}