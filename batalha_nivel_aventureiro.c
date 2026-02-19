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
     
     int navio1[3]={3,3,3};                                                       //Vetor que armazena a posição do navio1
     int navio2[3] ={3,3,3};                                                     //Vetor que armazena a posição do navio2
     int navio3[4] ={3,3,3,3};                                                  //Vetor que armazena a posição do navio3  
     int navio4[5] ={3,3,3,3,3};                                               //Vetor que armazena a posição do navio4 

     printf("Tabuleiro Batalha Naval \n");                                 //Mostra A expressão Tabuleiro Batalha Naval
     printf(" ");                                                         //Espaço em branco para alinhar o número da linha e a letra da coluna
     

     for (int j = 0;j<10;j++){                                                 //Estrutura de repetição que cria e inicializa j e repete 10 vezes o código abaixo se j for menor que 10 e após a execução do código incrementa 1 a j.
       printf("%c ",coluna[j]);                                               //Mostra o número que é o valor de cada coluna baseado no valor de j, exemplo se  j for 0: mostra A(coluna A) 
      

     } printf("\n") ;                                                        //Faz um espaçamento



     //Posicionar o navio3(diagonal principal)
     for (int i = 0 ,j=0;i<10;i++){                                                                                    //Estrutura de repetição que cria e inicializa i e repete 10 vezes o código abaixo se i for menor que 10 e após a execução do código incrementa 1 a i. 
        printf("%d ",linha[i]);                                                                                       //Mostra o número que é o valor de cada linha baseado no valor de i, exemplo se  i for 0: mostra 1(linha 1)  
          for(int t=0; t<10;t++ ){                                                                                   //estrutura de repetição que cria e inicializa  t ,verifica se t for menor que 10 se sim executa o código abaixo e após a execução incrementa 1 a t. 
          if(i== 0 && t==0 && i== 1 && t==1 && i== 2 && t==2 && i== 3 && t==3){                                     //Estrutura de repetição que verifica se i = t,se o número da linha igual ao da coluna
            printf("%d ",navio3[0]);                                                                               //Se for coloca o 3 na célula A1(linha0,coluna0)
            printf("%d ",navio3[1]);                                                                              //Se for coloca o 3 na célula B2(linha1,coluna1)
            printf("%d ",navio3[2]);                                                                             //Se for coloca o 3 na célula C3 (linha2,coluna2)
            printf("%d ",navio3[3]);                                                                            //Se for coloca o 3 na célula D4 (linha3,coluna3)
           

         
            

                                                                                                  
        //Posicionar o navio4(diagonal secundária)
          
          }else if(i==9 && t == 2){                                            //Estrutura de repetição que verifica se i += t ==9 ,se o número da linha mais o da coluna è igual a 9
            printf("%d ",navio4[0]);                                          //Se for coloca o 3 na célula A10 (linha10,coluna1)
            printf("%d ",navio4[1]);                                         //Se for coloca o 3 na célula B9 (linha9,coluna2)
            printf("%d ",navio4[2]);                                        //Se for coloca o 3 na célula C8 (linha8,coluna3)
            printf("%d ",navio4[3]);                                       //Se for coloca o 3 na célula D7 (linha7,coluna4)
            printf("%d ",navio4[4]);                                      //Se for coloca o 3 na célula E6 (linha6,coluna5)
           


             


          } else{
            
            printf("%d ",tabuleiro[i][j]);                                //Mostra o número que é o valor de cada linha e da coluna baseado no valor de t, exemplo se  t for 0: mostra 0(número que corresponde a A1,coluna A e linha 1) com espaçamento e assim por diante}
        
    
        }   







    }       printf("\n");                          //Faz um espaçamento
}



}

//teste01