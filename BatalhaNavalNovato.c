#include <stdio.h>

int main() {
    
    int tabuleiro[10][10]; //variavel do tabuleiro de batalha naval

    // Ponto de Inicialização do tabuleiro com 0

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

     // Insere navio horizontal de 3 posições na linha 2, colunas C, D, E
     tabuleiro[1][2] = 3;
     tabuleiro[1][3] = 3;
     tabuleiro[1][4] = 3;
 
     // Insere navio vertical de 3 posições na coluna F, linhas 5, 6, 7
     tabuleiro[4][5] = 3;
     tabuleiro[5][5] = 3;
     tabuleiro[6][5] = 3;


     // Imprime o tabuleiro no formato de numeração para cada linha e uma letra para cada coluna padrão batalha naval

     printf("   A B C D E F G H I J\n"); // Impressão das letras das colunas
     for (int i = 0; i < 10; i++) {
 
         printf("%2d ", i + 1); // impressão dos números das linhas 
 
         for (int j = 0; j < 10; j++) {
 
             printf("%d ", tabuleiro[i][j]); // impressão do tabuleiro de batalha naval
         }
 
         printf("\n");// Padrão de espaços entre os elementos
     }

    return 0;
}