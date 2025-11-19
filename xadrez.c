#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

int main() {
    const int CASAS_BISPO = 5;
    const int CASAS_TORRE = 5;
    const int CASAS_RAINHA = 8;

    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < CASAS_BISPO) {
        printf("Cima, Direita\n");
        i++;
    }
    
    printf("\n");

    for (int j = 0; j < CASAS_TORRE; j++) {
        printf("Direita\n");
    }

    printf("\n");

    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < CASAS_RAINHA);

    return 0;
}
