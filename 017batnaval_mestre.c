#include <stdio.h>

#define TAMANHO 3
#define TAMANHOCRUZ 5
#define TAMANHOOCTA 5

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

    //Habilidades Especiais
    //Cone
    // Posição base do cone  - A5
    int linhabasecone = 4;
    int colunabasecone = 0;
    
    // Nível 0: apenas a posição base (4,0)
    tabuleiro[linhabasecone][colunabasecone] = 1;
    
    // Nível 1: três posições (3,1), (4,1), (5,1)
    for (int i = -1; i <= 1; i++) 
    {
        int linhacone = linhabasecone + i;
        int colunacone = colunabasecone + 1;
        if (linhacone >= 0 && linhacone < 10) 
        {
            tabuleiro[linhacone][colunacone] = 1;
        }
    }
    
    // Nível 2: cinco posições (2,2) a (6,2)
    for (int i = -2; i <= 2; i++) 
    {
        int linhacone = linhabasecone + i;
        int colunacone = colunabasecone + 2;
        if (linhacone >= 0 && linhacone < 10) 
        {
            tabuleiro[linhacone][colunacone] = 1;
        }
    }

    //Cruz
    int centrolinha = 7;
    int centrocoluna = 7;

    //Horizontal cruz
    for (int j = centrocoluna - 2; j <= centrocoluna + 2; j++)
    {
        if (j >= 0 && j < TAMANHO)
        {
            tabuleiro [centrolinha] [j] = 4;
        }
    }
    //Vertical cruz
    for (int i = centrolinha - 2; i <= centrolinha + 2; i++)
    {
        if (i >= 0 && i < TAMANHO)
        {
            tabuleiro [i] [centrocoluna] = 4;
        }        
    }
    
    //Octaedro
    int linhabaseocta = 0;
    int colunabaseocta = 6;
    
    // Parte cima octaedro
    for (int camada = 0; camada < 3; camada++) 
    {
        int largura = 1 + 2 * camada;
        int colunainicio = colunabaseocta - camada;
        
        for (int j = 0; j < largura; j++) 
        {
            int linha_atual = linhabaseocta + camada;
            int coluna_atual = colunainicio + j;
            
            if (linha_atual < 10 && coluna_atual >= 0 && coluna_atual < 10) 
            {
                tabuleiro[linha_atual][coluna_atual] = 8;
            }
        }
    }
    // Parte baixo octaedro
    for (int camada = 1; camada >= 0; camada--) 
    {
        int largura = 1 + 2 * camada;
        int colunainicio = colunabaseocta - camada;
        
        for (int j = 0; j < largura; j++) 
        {
            int linha_atual = linhabaseocta + (4 - camada);
            int coluna_atual = colunainicio + j;
            
            if (linha_atual < 10 && coluna_atual >= 0 && coluna_atual < 10) 
            {
                tabuleiro[linha_atual][coluna_atual] = 8;
            }
        }
    } 
            
    //Imprimindo com os efeitos
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