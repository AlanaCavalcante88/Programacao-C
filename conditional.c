#include <stdio.h>

int main() {

    int i;
    printf("Digite um valor inteiro:");
    scanf("%d", &i);

    printf("Sem Else");

    if (i <= 20) {
        printf("\n%d é menor que 20.", i);
    }
    if (i >= 10) {
        printf("\n%d é maior que 10.", i);
    }
    
        printf("\nCom Else");

    if (i <= 20) {
        printf("\n%d é menor que 20.", i);
    }

    if (i >= 20) {
        printf("\n%d é maior que 20.", i);
    }
}