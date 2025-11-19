#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

// definicao de constantes
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8
#define CAVALO_PULOS_CIMA 2
#define CAVALO_PULOS_DIREITA 1

// definição recursividade
void moverTorreRecursivo(int casasRestantes);
void moverRainhaRecursivo(int casasRestantes);
void moverBispoRecursivo(int casasRestantes);

int main() {
    // movimento da torre
    printf("Movimento da Torre\n");
    moverTorreRecursivo(MOVIMENTOS_TORRE);
    printf("\n");

    // movimento da raina
    printf("Movimento da Rainha\n");
    moverRainhaRecursivo(MOVIMENTOS_RAINHA);
    printf("\n");

    // movimento do bispo
    // as direções vertical e horizontal dentro de cada passo
    printf("Movimento do Bispo\n");
    moverBispoRecursivo(MOVIMENTOS_BISPO);
    printf("\n");

    // movimento do cavalo
    // movimento em L
    printf("Movimento do Cavalo\n");

    // loop externo
    // usei varias variaveis no for (i, j) pra demonstrar controle complexo
    for (int i = 0, j = 0; i < CAVALO_PULOS_CIMA; i++) {
        
        // imprime o movimento vertical
        printf("Cima\n");

        // o cavalo so vira pra direita depois de completar os movimentos verticais.
        if (i == (CAVALO_PULOS_CIMA - 1)) {
            
            // controle do movimento horizontal
            while (j < CAVALO_PULOS_DIREITA) {
                printf("Direita\n");
                j++;
                if (j >= CAVALO_PULOS_DIREITA) {
                    break; 
                }
            }
        } else {
            continue;
        }
    }

    return 0;
}

// recursividade da torre

void moverTorreRecursivo(int casasRestantes) {
    // se não há mais casas encerra a recursicidade
    if (casasRestantes <= 0) {
        return; 
    }
    
    printf("Direita\n");
    
    // chama a função novamente com (n - 1)
    moverTorreRecursivo(casasRestantes - 1);
}

// recursividade da rainha

void moverRainhaRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;
    
    printf("Esquerda\n");
    moverRainhaRecursivo(casasRestantes - 1);
}

// recursividade da torre

void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;

    // simulando movimento diagonal usando loops aninhados conforme solicitado
    for(int v = 0; v < 1; v++) {
        printf("Cima\n");
        
        // Loop Interno: Horizontal
        for(int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }
    
    // passo recursivo para a próxima casa na diagonal
    moverBispoRecursivo(casasRestantes - 1);
}
