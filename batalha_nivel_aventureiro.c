#include <stdio.h>                                                                   //Função que acessa as bibliotecas para criar o arquivo executável

int main (){                                                                        //Função que faz o programa funcionar
     char coluna [10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};        //Vetor que armazena o valor de cada coluna do tabuleiro
     int  linha  [10] = {1,2,3,4,5,6,7,8,9,10};                                   //Vetor que armazena o valor de cada linha do tabuleiro
     
     int tabuleiro[10][10]={                                                    //Matriz 10 linhas por 10 colunas que armazena o tabuleiro sem navios,cada zero representa água no jogo
     {0,0,0,0,0,0,0,0,0,0},                     
     {0,0,0,0,0,0,0,0,0,0},                     
     {3,0,0,0,0,0,0,0,0,0},                    
     {3,0,0,0,0,0,0,0,0,0},                    
     {3,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,0,0,0,0},                    
     {0,0,0,0,0,0,3,3,3,0},                     
     {0,0,0,0,0,0,0,0,0,0},                    
     
     }; 
     
     int navio1[3]={3,3,3};                                                       //Vetor que armazena a posição do navio1
     int navio2[3] ={3,3,3};                                                     //Vetor que armazena a posição do navio2
     int navio3  = 3;                                                           //Variável que armazena a posição do navio3  
     int navio4[5] ={3,3,3,3,3};                                               //Vetor que armazena a posição do navio4 

     printf("Tabuleiro Batalha Naval \n");                                       //Mostra A expressão Tabuleiro Batalha Naval
     printf(" ");                                                               //Espaço em branco para alinhar o número da linha e a letra da coluna
     

     for (int j = 0;j<10;j++){                                                 //Estrutura de repetição que cria e inicializa j e repete 10 vezes o código abaixo se j for menor que 10 e após a execução do código incrementa 1 a j.
       printf("%c ",coluna[j]);                                               //Mostra o número que é o valor de cada coluna baseado no valor de j, exemplo se  j for 0: mostra A(coluna A) 
      

     } printf("\n") ;                                                        //Faz um espaçamento



     //Posicionar o navio3(diagonal principal)
     for (int i = 0 ;i<10;i++){                                                                                    //Estrutura de repetição que cria e inicializa i e repete 10 vezes o código abaixo se i for menor que 10 e após a execução do código incrementa 1 a i. 
        printf("%d ",linha[i]);                                                                                       //Mostra o número que é o valor de cada linha baseado no valor de i, exemplo se  i for 0: mostra 1(linha 1)  
          for(int j =0; j <10;j++ ){                                                                                   //estrutura de repetição que cria e inicializa  j ,verifica se j for menor que 10 se sim executa o código abaixo e após a execução incrementa 1 a t. 
          if(i== 0 && j==0 || i== 1 && j==1 || i== 2 && j==2 || i== 3 && j==3){                                     //Estrutura de repetição que verifica as posições A1,B2,C3 E D4 ,se o número da linha e da coluna são i==0 e j==0 ou i==1 e j==1 ou i==2 e j==2 ou i==3 e j==3 
          tabuleiro[i][j] = 3;                                                                                     //Se pelo menos uma dessas condições for verdadeira coloca o 3 nessa posição



         printf("%d ",tabuleiro[i][j]);                                                                         //Mostra o 3 na posição A1 ou B2 ou C3 ou D4 
            
         
            

                                                                                                  
        //Posicionar o navio4(diagonal secundária)
          
          }else if(i==9 && j == 0||i==8 && j==1||i==7 && j==2 ||i==6 && j==3||i==5 && j==4){  //Estrutura de repetição que verifica as posições A10,B9,C8,D7,E6 ,se o número da linha e o  da coluna são  i==9 , j == 0 ou i==8 , j==1  ou i==7 , j==2 ou i==6 , j==3 ou i==5 , j==4
             tabuleiro[i][j] = 3;                                                             //Se pelo menos uma dessas condições for verdadeira coloca o 3 nessa posição


            printf("%d ",tabuleiro[i][j]);                                                 //Mostra o 3 na posição A10 ou B9 ou C8 ou D7 ou E6 
            
             


          } else{
            
            printf("%d ",tabuleiro[i][j]);                                //Mostra o número que é o valor de cada linha e da coluna baseado no valor de j, exemplo se  j for 0: mostra 0(número que corresponde a A1,coluna A e linha 1) com espaçamento e assim por diante}
        
    
        }   







    }       printf("\n");                          //Faz um espaçamento
}



}


