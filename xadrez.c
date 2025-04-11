#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Declaração das variáveis
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;
    int i = 0;

    // Implementação de Movimentação do Bispo
    printf("\nMovimento do Bispo:\n");
    while (i < casasBispo) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Implementação de Movimentação da Torre
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    i = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);

    // Implementação de Movimentação do Cavalo
    printf("\nMovimento do Cavalo:\n");
    for (int j = 0; j < 1; j++) {
        int passo = 0;
        while (passo < 2) { 
            printf("Baixo\n");
            passo++;
        }
        printf("Esquerda\n"); 
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
