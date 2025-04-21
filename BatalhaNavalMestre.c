#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int origemLinha = 2; // ponto de origem da cruz na matriz principal
    int origemColuna = 2;

    int origemColunaCruz = 5;
    int origemLinhaCruz = 5;

    int origemLinhaOcta = 4;
    int origemColunaOcta = 1;

    // Inicializa o tabuleiro com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Constrói o cone 3x5 a partir da origem usando for e if
    for (int i = 0; i < 3; i++) {          // 3 linhas da cone
        for (int j = 0; j < 5; j++) {      // 5 colunas da cone
            
           if (i==0){

            if ((origemLinha + i < 10) && (origemColuna + j < 10))
             {
                tabuleiro[origemLinha + i] [origemColuna + j] = 4;
                
             }
            
    
            
           } else if (i==1 && (j>0 && j<4)) {

            if ((origemLinha + i < 10) && (origemColuna + j < 10)){

                tabuleiro[origemLinha - i] [origemColuna + j] = 4;
            }

           } else if (i==2 && j==2){

                if ((origemLinha + i < 10) && (origemColuna + j < 10)){

                    tabuleiro[origemLinha - i] [origemColuna + j] = 4;
                }
                
            }
             
        }
    }

    //Inicio Cruz....
    // Constrói a cruz 3x5 a partir da origem usando for e if
    for (int i = 0; i < 3; i++) {          // 3 linhas da cruz
        for (int j = 0; j < 5; j++) {      // 5 colunas da cruz

            if (i==1){

                if ((origemLinhaCruz + i < 10) && (origemColunaCruz + j < 10)){
                    tabuleiro[origemLinhaCruz + i] [origemColunaCruz + j] = 4;
                    
                }
            }else if (j==2) {

                if ((origemLinhaCruz + i < 10) && (origemColunaCruz + j < 10)){
    
                    tabuleiro[origemLinhaCruz + i] [origemColunaCruz + j] = 4;
                }
    
            }


        
        }
    }

    //Inicio octaedro....

    for (int i = 0; i < 3; i++) {          // 3 linhas da cruz
        for (int j = 0; j < 3; j++) {      // 5 colunas da cruz

            if (i==1){

                if ((origemLinhaCruz + i < 10) && (origemColunaCruz + j < 10)){
                    tabuleiro[origemLinhaOcta + i] [origemColunaOcta + j] = 4;
                    
                }
            }else if (j==1) {

                if ((origemLinhaOcta + i < 10) && (origemColunaOcta + j < 10)){
    
                    tabuleiro[origemLinhaOcta + i] [origemColunaOcta + j] = 4;
                }
    
            }


        
        }
    }
    


    // Imprime o tabuleiro
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}