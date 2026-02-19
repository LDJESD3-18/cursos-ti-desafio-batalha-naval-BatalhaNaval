#include <stdio.h>                                                                   //Função que acessa as bibliotecas para criar o arquivo executável

int main (){                                                                        //Função que faz o programa funcionar
     char coluna [10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};        //Vetor que armazena o valor de cada coluna do tabuleiro
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
     printf("Tabuleiro Batalha Naval \n");                                  //Mostra A expressão Tabuleiro Batalha Naval
     printf("  ");                                                         //Espaço em branco para alinhar o número da linha e a letra da coluna
     
     
     for (int j = 0;j<10;j++){                                           //Estrutura de repetição que cria e inicializa j e repete 10 vezes o código abaixo se j for menor que 10 e após a execução do código incrementa 1 a j.
       printf("%c ",coluna[j]);                                         //Mostra o número que é o valor de cada coluna baseado no valor de j, exemplo se  j for 0: mostra A(coluna A) 



      }
    
    printf("\n");                                                          //Faz um espaçamento

    for (int i = 0 ;i<10;i++){                                              //Estrutura de repetição que cria e inicializa i e repete 10 vezes o código abaixo se i for menor que 10 e após a execução do código incrementa 1 a i. 
        printf("%d",linha[i]);                                             //Mostra o número que é o valor de cada linha baseado no valor de i, exemplo se  i for 0: mostra 1(linha 1)  
        printf(" ");                                                      //espaço em branco para organizar o zero e o  número da linha
        for(int t=0;t<10;t++ ){                                          //estrutura de repetição que cria e inicializa  t ,verifica se t for menor que 10 se sim executa o código abaixo e após a execução incrementa 1 a t.
        printf("%d",tabuleiro[0][t]);                                   //Mostra o número que é o valor de cada linha baseado no valor de t, exemplo se  t for 0: mostra 0(número que corresponde a A1,coluna A e linha 1) e assim por diante
        
       }
       
        printf("\n");                                                //Faz um espaçamento
 

        
       


                      
       }
 
      
    
      }  

      //
                    
      
    

      
     
     
     
     
     
     
     
     //// teste 4 CCC







