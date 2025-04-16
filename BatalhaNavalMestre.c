#include <stdio.h>

int main() {
    char *letras[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    int tabuleiro[10][10];

    // Inicializa todos os elementos com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

     

    // Imprime o cabeçalho com letras
    printf("   "); // espaço inicial para alinhar com os números
    for (int k = 0; k < 10; k++) {
        printf(" %s", letras[k]);
    }
    printf("\n");

    // Imprime o tabuleiro com números na lateral
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // numeração da linha
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}