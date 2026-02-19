#include <stdio.h>                                                                   //Função que acessa as bibliotecas para criar o arquivo executável

int main (){                                                                        //Função que faz o programa funcionar
     char coluna [10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};        //Vetor que armazena o valor de cada coluna do tabuleiro
     int  linha  [10] = {1,2,3,4,5,6,7,8,9,10};                                   //Vetor que armazena o valor de cada linha do tabuleiro
     
     int tabuleiro[10][10]={                                                    //Matriz 10 linhas por 10 colunas que armazena o tabuleiro sem navios,cada zero representa água no jogo
     {0,0,0,0,0,0,0,0,0,0},                     
     {0,3,0,0,0,0,0,0,0,0},                     
     {0,3,0,0,0,0,0,0,0,0},                    
     {0,3,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,3,3,3,0},                     
     {0,0,0,0,0,0,0,0,0,0},                    
     
     }; 
     
     int navio1[3]={3,3,3};                                                  //Vetor que armazena a posição do navio1
     int navio2[3] ={3,3,3};                                                //Vetro que armazena a posição do navio2
     printf("Tabuleiro Batalha Naval \n");                                 //Mostra A expressão Tabuleiro Batalha Naval
     printf(" ");                                                         //Espaço em branco para alinhar o número da linha e a letra da coluna
     

     for (int j = 0;j<10;j++){                                           //Estrutura de repetição que cria e inicializa j e repete 10 vezes o código abaixo se j for menor que 10 e após a execução do código incrementa 1 a j.
       printf("%c ",coluna[j]);                                         //Mostra o número que é o valor de cada coluna baseado no valor de j, exemplo se  j for 0: mostra A(coluna A) 



      }
    
    printf("\n");                                                          //Faz um espaçamento










    }