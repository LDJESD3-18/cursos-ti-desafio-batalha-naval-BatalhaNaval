#include <stdio.h>                                                                   //Função que acessa as bibliotecas para criar o arquivo executável




int main (){                                                                        //Função que faz o programa funcionar


  char coluna [10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};        //Vetor que armazena o valor de cada coluna do tabuleiro
  int  linha  [10] = {1,2,3,4,5,6,7,8,9,10};                                   //Vetor que armazena o valor de cada linha do tabuleiro
     



   
   int tabuleiro[10][10]={                                                         //Matriz 10 linhas por 10 colunas que armazena o tabuleiro sem navios,cada zero representa água no jogo
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
     
     printf("Tabuleiro Batalha Naval \n");                                       //Mostra A expressão Tabuleiro Batalha Naval
     printf(" ");                                                               //Espaço em branco para alinhar o número da linha e a letra da coluna
     

      //Mostra as linhas e colunas do tabuleiro
        for (int j = 0;j<10;j++){                                              //Estrutura de repetição que cria e inicializa j e repete 10 vezes o código abaixo se j for menor que 10 e após a execução do código incrementa 1 a j.
       printf("%c ",coluna[j]);                                               //Mostra o número que é o valor de cada coluna baseado no valor de j, exemplo se  j for 0: mostra A(coluna A) 
        
      
       } printf("\n") ;                                                        //Faz um espaçamento



    

    //Cria e mostra a matriz de habilidade em Cone
   for (int i = 0 ;i<10;i++){                                                                                                                                                            //Estrutura de repetição que cria e inicializa i e repete 10 vezes o código abaixo se i for menor que 10 e após a execução do código incrementa 1 a i. 
        printf("%d ",linha[i]);                                                                                                                                                         //Mostra o número que é o valor de cada linha baseado no valor de i, exemplo se  i for 0: mostra 1(linha 1)  
          for(int j =0; j <10;j++ ){                                                                                                                                                   //estrutura de repetição que cria e inicializa  j ,verifica se j for menor que 10 se sim executa o código abaixo e após a execução incrementa 1 a t. 
          if(i== 6 && j==3 || i== 7 && j==2 || i== 7 && j==3 || i== 7 && j==4||i== 8 && j==2 || i== 8 && j==3 || i== 8 && j==4 || i== 8 && j==5){                                     //Estrutura de repetição que verifica os índices D7,C8,D8 ,E8 ,B9,C9,D9,E9,F9se o número da linha e da coluna são i== 6 e j==3 ou i== 7 e j==2 ou i== 7 e j==3 ou i== 7 e j==4 ou i== 8 e j==2  i== 8 e j==3 ou i== 8 e j==4 ou i== 8 e j==5
           tabuleiro[i][j] = 4;                                                                                                                                                      //Se pelo menos uma das condições for verdadeira coloca o 4 no índice                                                                                                                                           //Se pelo menos uma dessas condições for verdadeira coloca o 3 nessa posição

          printf("%d ",tabuleiro[i][j]);                                                                                                                                           //Mostra o 4 no índice D7 ou C8 ou D8 ou E8 ou B9 ou C9 ou D9 ou E9 ou F9
                                                                                                                                                 
        
        
      //Cria e mostra a matriz de habilidade em Cruz
          
        }else if(i==1 && j == 4||i==2 && j==4||i==2 && j==3 ||i==2 && j==2||i==2 && j==5||i==2&& j==6||i==3&&j==4){  //Estrutura de repetição que verifica os índices E2,E3,D3,C3,F3,G3,E4 ,se o número da linha e o  da coluna são  i==1 e j == 4 ou i==2 e  j==4 ou i==2 e j==3 ou i==2 e j==2 ou i==2 e j==5 ou i==2 e j==6 ou i==3 e j==4
             tabuleiro[i][j] = 6;                                                                                   //Se pelo menos uma dessas condições for verdadeira coloca o 6 nessa índice


            printf("%d ",tabuleiro[i][j]);                                                                        //Mostra o 6 no índice E2 ou E3 ou D3 ou C3 ou F3 ou G3 ou E4 





        

        //Cria e mostra a matriz de habilidade em octaedro
          
        }else if(i==4 && j == 8||i==6 && j==8||i==5 && j==9 ||i==5 && j==8||i==5 && j==7){  //Estrutura de repetição que verifica os índices I5,I7,J6,I6,H6 ,se o número da linha e o  da coluna são  i==4 e j == 8 ou i==6 e j==8 ou i==5 e j==9 ou i==5 e j==8 ou i==5 e j==7
             tabuleiro[i][j] = 5;                                                                                   //Se pelo menos uma dessas condições for verdadeira coloca o 5 nessa índice


            printf("%d ",tabuleiro[i][j]);                                                                        //Mostra o 5 no índice I5 ou I7 ou J6 ou I6 ou H6
      
        
       
        }else {
             printf("%d ",tabuleiro[i][j]);                                                                                                                                              //Mostra o número que é o valor de cada linha e da coluna baseado no valor de j, exemplo se  j for 0: mostra 0(número que corresponde a A1,coluna A e linha 1) com espaçamento e assim por diante} 

        } 
        
        
        } printf("\n") ;                                                        //Faz um espaçamento

      };

                                                                          

    }


//teste 3 cruz ///








