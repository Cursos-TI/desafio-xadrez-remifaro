#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Funções de movimentação
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0)
        return;

    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) return;

    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
    moverBispo(casasRestantes - 1);
}

void moverRainha(int casasRestantes) {
    if (casasRestantes == 0)
        return;

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

int main() {
    // Declaração das variáveis
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Implementação de Movimentação do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // Implementação de Movimentação da Torre
    printf("\nMovimento da Torre:\n");
    moverTorre(casasTorre);

    // Implementação de Movimentação da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Implementação de Movimentação do Cavalo
    printf("\nMovimento do Cavalo:\n");
    int movimentosRealizados = 0;

    for (int i = 0; i < 3; i++) {  
        int direcao = i;

        if (direcao < 0 || direcao > 2) {
            continue;
        }

        if (direcao < 2) {
            printf("Cima\n");
        } else {
            printf("Direita\n");
        }

        movimentosRealizados++;

        if (movimentosRealizados == 3) {
            break;
        }
    }

    return 0;
}
