#include <stdio.h>                                                                   //Função que acessa as bibliotecas para criar o arquivo executável

int main (){                                                                        //Função que faz o programa funcionar
     char coluna [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};        //Vetor que armazena o valor de cada coluna do tabuleiro
     int  linha  [10] = {1,2,3,4,5,6,7,8,9,10};                                   //Vetor que armazena o valor de cada linha do tabuleiro
     
     int tabuleiro[10][10]={                                                    //Matriz 10 linhas por 10 colunas que armazena o tabuleiro sem navios,cada zero representa água no jogo
     {0,0,0,0,0,0,0,0,0,0},                     
     {0,0,0,0,0,0,0,0,0,0},                     
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                     
     {0,0,0,0,0,0,0,0,0,0},                    
     
     };
     printf("Tabuleiro Batalha Naval \n");                                 //Mostra A expressão Tabuleiro Batalha Naval
     
     
     for (int i = 0;i<10;i++){
       printf("%c ",coluna[i]);


      }
    
    printf("\n");

    for (int j = 0;j<10;j++){
       printf("%d\n",linha[j]);



     }              ////teste e ir dormir 






}
