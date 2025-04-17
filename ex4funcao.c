/* 4. Escreva uma função que receba um nome e imprima uma mensagem do tipo “Oi, meu nome é
nome”. exercicioFuncaoNome.c
*/

#include <stdio.h>

char ola(char saudacao) {
    printf("Olá! Meu nome é", saudacao);
}

char nomeDaPessoa() {
    char nome[20];
    printf("Informe o seu nome: ");
    scanf("%s", nome);
}

int main() {
    printf(nomeDaPessoa);
}

//CORRIGIR ESSE EXERCÍCIO!!!!!!!!