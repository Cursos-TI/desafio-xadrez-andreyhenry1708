#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Quantidade de casas que cada peça irá percorrer
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    int i;

    // ========================================
    // TORRE
    // Move 5 casas para a direita usando FOR
    // ========================================

    printf("Movimento da Torre:\n");

    for (i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }


    // ========================================
    // BISPO
    // Move 5 casas na diagonal para cima
    // e para a direita usando WHILE
    // ========================================

    printf("\nMovimento do Bispo:\n");

    i = 0;

    while (i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }


    // ========================================
    // RAINHA
    // Move 8 casas para a esquerda
    // usando DO-WHILE
    // ========================================

    printf("\nMovimento da Rainha:\n");

    i = 0;

    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentoRainha);
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    i = 0;

    while (i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for (i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    i = 0;
    
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentoRainha);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // ========================================
    // CAVALO
    // Move em formato de "L":
    // 2 casas para baixo e 1 para a esquerda
    //
    // Utiliza loops aninhados:
    // FOR externo + WHILE interno
    // ========================================

    printf("\nMovimento do Cavalo:\n");

    for (i = 0; i < movimentoCavaloBaixo; i++) {

        printf("Baixo\n");

        j = 0;

        while (j < movimentoCavaloEsquerda) {

            // A esquerda deve ser executada somente
            // depois das duas casas para baixo
            if (i == movimentoCavaloBaixo - 1) {
                printf("Esquerda\n");
            }

            j++;
        }
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
