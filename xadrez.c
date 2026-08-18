#include <stdio.h>

// ========================================
// FUNÇÃO RECURSIVA DA TORRE
// Move 5 casas para a direita
// ========================================
void moverTorre(int casas) {

    // Caso base: encerra a recursão
    if (casas == 0) {
        return;
    }

    printf("Direita\n");

    // Chamada recursiva diminuindo uma casa
    moverTorre(casas - 1);
}


// ========================================
// FUNÇÃO RECURSIVA DO BISPO
// Move 5 casas na diagonal:
// cima e direita
//
// Também utiliza loops aninhados:
// loop externo = movimento vertical
// loop interno = movimento horizontal
// ========================================
void moverBispo(int casas) {

    int vertical;
    int horizontal;

    // Caso base
    if (casas == 0) {
        return;
    }

    /*
        O loop externo representa o movimento vertical.
        O loop interno representa o movimento horizontal.

        Cada chamada recursiva representa uma casa
        percorrida pelo Bispo na diagonal.
    */
    for (vertical = 0; vertical < 1; vertical++) {

        for (horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }

    // Continua o movimento através da recursão
    moverBispo(casas - 1);
}


// ========================================
// FUNÇÃO RECURSIVA DA RAINHA
// Move 8 casas para a esquerda
// ========================================
void moverRainha(int casas) {

    // Caso base
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");

    // Chamada recursiva
    moverRainha(casas - 1);
}


// ========================================
// FUNÇÃO PRINCIPAL
// ========================================
int main() {

    // Quantidades de movimentos
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Variáveis usadas no movimento do Cavalo
    int vertical;
    int horizontal;


    // ========================================
    // TORRE
    // ========================================

    printf("Movimento da Torre:\n");

    moverTorre(casasTorre);


    // ========================================
    // BISPO
    // ========================================

    printf("\nMovimento do Bispo:\n");

    moverBispo(casasBispo);


    // ========================================
    // RAINHA
    // ========================================

    printf("\nMovimento da Rainha:\n");

    moverRainha(casasRainha);


    // ========================================
    // CAVALO
    //
    // Movimento em L:
    // 2 casas para cima
    // 1 casa para a direita
    //
    // Utiliza loops aninhados,
    // múltiplas variáveis e break.
    // ========================================

    printf("\nMovimento do Cavalo:\n");

    for (vertical = 0; vertical < 2; vertical++) {

        printf("Cima\n");

        for (horizontal = 0; horizontal < 1; horizontal++) {

            /*
                A direção para a direita só deve
                acontecer depois das duas casas
                percorridas para cima.
            */
            if (vertical < 1) {
                continue;
            }

            printf("Direita\n");

            // Encerra o loop interno após
            // executar o movimento horizontal
            break;
        }
    }


    return 0;
}
