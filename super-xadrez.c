#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int passo, int total) {
    if (passo > total) return;
    printf("Torre - Casa %d: Direita\n", passo);
    moverTorre(passo + 1, total);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int passo, int total) {
    if (passo > total) return;
    printf("Rainha - Casa %d: Esquerda\n", passo);
    moverRainha(passo + 1, total);
}

// Função recursiva com loops aninhados para o Bispo
void moverBispo(int passo, int total) {
    if (passo > total) return;

    // Movimento vertical (externo)
    for (int v = 0; v < 1; v++) {
        // Movimento horizontal (interno)
        for (int h = 0; h < 1; h++) {
            printf("Bispo - Casa %d: Cima, Direita\n", passo);
        }
    }

    moverBispo(passo + 1, total);
}

// Movimento do Cavalo com loops aninhados e controle de fluxo
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    int movimentos = 1;

    // Simulando múltiplos movimentos em "L"
    for (int i = 1; i <= 2; i++) { // duas casas para cima
        for (int j = 1; j <= 1; j++) { // uma casa para a direita
            if (i == 2 && j == 1) {
                // movimento completo em L
                printf("Cavalo - Movimento %d:\n", movimentos);
                for (int k = 1; k <= 2; k++) {
                    printf("  Casa %d: Cima\n", k);
                }
                printf("  Casa 3: Direita\n");
                movimentos++;
                break; // Finaliza o movimento em L
            } else {
                continue;
            }
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(1, 5); // 5 casas para a direita

    printf("\nMovimento do Bispo:\n");
    moverBispo(1, 5); // 5 casas na diagonal (cima, direita)

    printf("\nMovimento da Rainha:\n");
    moverRainha(1, 8); // 8 casas para a esquerda

    printf("\n");
    moverCavalo(); // Movimento aprimorado do cavalo

    return 0;
}
