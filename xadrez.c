#include <stdio.h>

#define PASSOS_BISPO 5
#define PASSOS_TORRE 5
#define PASSOS_RAINHA 8
#define MOVIMENTOS_CAVALO 3


void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima + Direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}


void moverCavalo() {
    printf("Movimento do Cavalo (L para Cima + Direita):\n");

    for (int i = 0; i < MOVIMENTOS_CAVALO; i++) {
        int passosVerticais = 0;
        int movimentosIgnorados = 0;

        while (passosVerticais < 2) {

            if (passosVerticais == 1 && i == 1) {
                printf("Casa bloqueada, ignorando passo...\n");
                movimentosIgnorados++;
                passosVerticais++;
                continue; 
            }

            printf("Cima\n");
            passosVerticais++;
        }

        if (movimentosIgnorados > 1) {
            printf("Movimento do Cavalo abortado\n");
            break; 
        }

        
        printf("Direita\n");
        printf("---\n");
    }
}

// ---------------------------
// Função Principal
// ---------------------------

int main() {
    printf("Movimento do Bispo:\n");
    moverBispo(PASSOS_BISPO);

    printf("\nMovimento da Torre:\n");
    moverTorre(PASSOS_TORRE);

    printf("\nMovimento da Rainha:\n");
    moverRainha(PA
