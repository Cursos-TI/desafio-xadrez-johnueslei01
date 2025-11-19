#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

int main() {

    const int CASAS_BISPO = 5;
    const int CASAS_TORRE = 5;
    const int CASAS_RAINHA = 8;
    
    // constantes para o cavalo
    const int CASAS_CAVALO_BAIXO = 2;
    const int CASAS_CAVALO_ESQUERDA = 1;

    
    // bispo
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < CASAS_BISPO) {
        printf("Cima, Direita\n");
        i++;
    }
    
    printf("\n");

    // torre
    printf("Movimento da Torre:\n");
    for (int j = 0; j < CASAS_TORRE; j++) {
        printf("Direita\n");
    }

    printf("\n"); // Separador

    // rainha
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < CASAS_RAINHA);
    
    printf("\n"); // Separador

    // cavalo
    
    printf("Movimento do Cavalo:\n");

    for (int c = 0; c < CASAS_CAVALO_BAIXO; c++) {
        
        printf("Baixo\n");

        if (c == (CASAS_CAVALO_BAIXO - 1)) {
            
            int d = 0;
            while (d < CASAS_CAVALO_ESQUERDA) {
                printf("Esquerda\n");
                d++;
            }
        }
    }

    return 0;
}
