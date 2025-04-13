#include <stdio.h>

#define TAMANHO 3

int main () {
   
    //Inicializando tabuleiro com repetição
    int tabuleiro [10] [10];
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro [i] [j] = 0;
        }
        
    } 
       
    printf("TABULEIRO BATALHA NAVAL\n");
    //Cabeçalho
    printf("   ");
    for (char c = 'A'; c < 'A' + 10; c++)
    {
        printf("%c ", c);
    }
    printf("\n");

    //Imprimindo o tabuleiro zerado
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
    int linhah = 0;
    int colunah = 4;
    for (int i = 0; i < TAMANHO; i++)
    {
        tabuleiro[linhah] [colunah + i] = 3;
    }    
    //vertical
    int linhav = 7;
    int colunav = 4;
    for (int i = 0; i < TAMANHO; i++)
    {
        tabuleiro [linhav + i] [colunav] = 3;
    }    
    //diagonal descendo
    int linhadd = 0;
    int colunadd = 0;
    for (int i = 0; i < TAMANHO; i++)
    {
        tabuleiro [linhadd + i] [colunadd + i] = 3;
    }
    //diagonal subindo
    int linhads = 9;
    int colunads = 0;
    for (int i = 0; i < TAMANHO; i++)
    {
        tabuleiro [linhads - i] [colunads + i] = 3;
    }    

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