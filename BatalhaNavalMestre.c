#include <stdio.h>

int main() {
    int tabuleiro[10][10]; //variavel do tabuleiro de batalha naval

    int origemLinha = 2; // ponto de origem da linha do cone na matriz principal
    int origemColuna = 2; // ponto de origem da coluna do cone na matriz principal

    int origemLinhaCruz = 5; //ponto de origem da linha da cruz na matriz principal
    int origemColunaCruz = 5; //ponto de origem da linha da cruz na matriz principal

    int origemLinhaOcta = 4; //ponto de origem da linha do Octaedro na matriz principal
    int origemColunaOcta = 1; //ponto de origem da coluna do Octaedro na matriz principal

    // Ponto de Inicialização do tabuleiro com 0

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Constrói o cone numa matriz 3x5 a partir da origem usando for e if

    for (int i = 0; i < 3; i++) {          // 3 linhas da cone
        for (int j = 0; j < 5; j++) {      // 5 colunas da cone

            //Contrói a base do cone
            
           if (i==0){

                if ((origemLinha + i < 10) && (origemColuna + j < 10)){

                tabuleiro[origemLinha + i] [origemColuna + j] = 4;
                
                }

            } else if (i==1 && (j>0 && j<4)) { // Constrói a linha acima da base

            if ((origemLinha + i < 10) && (origemColuna + j < 10)){

                tabuleiro[origemLinha - i] [origemColuna + j] = 4;
            }

           }else if (i==2 && j==2){ //Constrói o topo do cone

                if ((origemLinha + i < 10) && (origemColuna + j < 10)){

                    tabuleiro[origemLinha - i] [origemColuna + j] = 4;
                }
                
            }
             
        }
    }

  
    // Constrói a cruz 3x5 a partir da origem usando for e if

    for (int i = 0; i < 3; i++) {    // 3 linhas da cruz
        for (int j = 0; j < 5; j++) {   // 5 colunas da cruz

            if (i==1){ // Constrói a linha na horizontal da cruz

                if ((origemLinhaCruz + i < 10) && (origemColunaCruz + j < 10)){
                    tabuleiro[origemLinhaCruz + i] [origemColunaCruz + j] = 4;
                    
                }
            }else if (j==2) { // Constroi a linha na Vertical da cruz na posição central

                if ((origemLinhaCruz + i < 10) && (origemColunaCruz + j < 10)){
    
                    tabuleiro[origemLinhaCruz + i] [origemColunaCruz + j] = 4;
                }
    
            }
        
        }
    }

    //Inicio octaedro....

    for (int i = 0; i < 3; i++) {  // 3 linhas da cruz
        for (int j = 0; j < 3; j++) { // 3 colunas da cruz

            if (i==1){ //Constrói a linha horizontal do octaedro

                if ((origemLinhaCruz + i < 10) && (origemColunaCruz + j < 10)){
                    tabuleiro[origemLinhaOcta + i] [origemColunaOcta + j] = 4;
                    
                }
            }else if (j==1) { // Constrói a linha vertical no centro do octaedro

                if ((origemLinhaOcta + i < 10) && (origemColunaOcta + j < 10)){
    
                    tabuleiro[origemLinhaOcta + i] [origemColunaOcta + j] = 4;
                }
    
            }

        }
    }


    // Imprime o tabuleiro no formato de numeração para cada linha e uma letra para cada coluna padrão batalha naval

    printf("   A B C D E F G H I J\n"); // Impressão das letras das colunas
    for (int i = 0; i < 10; i++) {

        printf("%2d ", i + 1); // impressão dos números das linhas 

        for (int j = 0; j < 10; j++) {

            printf("%d ", tabuleiro[i][j]); // impressão do tabuleiro de batalha naval
        }

        printf("\n");
    }

    return 0;
}