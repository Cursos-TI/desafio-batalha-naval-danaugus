#include <stdio.h>

int main () {
   
    //tabuleiro
    int tabuleiro [10] [10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    
        
    printf("TABULEIRO BATALHA NAVAL\n");
    //Cabeçalho
    printf("   ");
    for (char c = 'A'; c < 'A' + 10; c++)
    {
        printf("%c ", c);
    }
    printf("\n");

    //Tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1);//Números lateral
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
        
    }

    //Posicionando os navios
    //horizontal
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    //vertical
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;

    //Imprimindo com os navios
    printf("\nTABULEIRO BATALHA NAVAL\n");
    //Cabeçalho
    printf("   ");
    for (char c = 'A'; c < 'A' + 10; c++)
    {
        printf("%c ", c);
    }
    printf("\n");

    //Tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1);//Números lateral
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
        
    }



        
    return 0;
}