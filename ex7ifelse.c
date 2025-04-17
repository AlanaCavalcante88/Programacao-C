/*7. Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso o estado civil seja
“CASADA(O)”, solicitar o tempo de casada(o) (anos). Imprima as informações passadas para o
programa.
Exemplo de solução: exercicioEstadoCivil.c
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[30];
    char sexo[10];
    char estadoCivil[10];
    char casado[6] = "casado";
    int tempoCasamento;

    printf("\nMe informe o seu nome: ");
    scanf("%s", nome);

    printf("\nMe informe o seu sexo (feminino) ou (masculino): ");
    scanf("%s", sexo);

    printf("\nMe informe o seu estado civil (solteiro, casado, divorciado, viúvo): ");
    scanf("%s", estadoCivil);

    if (estadoCivil == "casado" || "casada") {
        printf("\nQuanto tempo você é casado? ");
        scanf("%d", &tempoCasamento);

        printf("\n O seu nome é %s.", nome);
        printf("\n O seu sexo é %s.", sexo);
        printf("\n O seu estado civil é %s.", estadoCivil);
        printf("\n Você é casado a %.d anos.\n", tempoCasamento);

    } else {
        printf("\n O seu nome é %s.", nome);
        printf("\n O seu sexo é %s.", sexo);
        printf("\n O seu estado civil é %s.", estadoCivil);
    }
}