#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int i, j,k,l,r,n,soma1=5, soma=0;
    char cordenadas[10]= {'A','B','C','D','E','F','G','H','I','J'}; //vetor para armazenar as letras do cabeçalho do tabuleiro
    int tabuleiro[10][10]={
        {1,0,0,0,0,0,0,0,0,0}, // matriz 10x10 para representar o tabuleiro
        {2,0,0,0,0,0,0,0,0,0},
        {3,0,0,0,0,0,0,0,0,0},
        {4,0,0,0,0,0,0,0,0,0},
        {5,0,0,0,0,0,0,0,0,0},
        {6,0,0,0,0,0,0,0,0,0},
        {7,0,0,0,0,0,0,0,0,0},
        {8,0,0,0,0,0,0,0,0,0},
        {9,0,0,0,0,0,0,0,0,0},
        {10,0,0,0,0,0,0,0,0,0},
    
    };
    printf("TABULEIRO BATALHA NAVAL\n");  // imprime a string no console

    for(i=0; i<10; i++){ //loop para imprimir as letras do cabeçalho
        printf("%2c",cordenadas[i]); //imprime os caracteres de acordo com o indice com o valor de i
    }                                  //exemplo: quando i = 0, imprime A, quando i = 1, imprime B, e assim por diante

    printf("\n"); // pula uma linha após imprimir as letras do cabeçalho

    for(r=10; r>4;r--){ //2= navio para diagonal: canto superior direito para canto inferior esquedar 
        tabuleiro[soma][r]=3;
         soma++;
    }
    for(l=1; l<5;l++){  //1= navio na diagonal superior da esquerda dece para direita inferior
      tabuleiro[l][l]=3;
    }

    for(l = 2; l <5; l ++){  //loop para fazer o posicionamento dos navios 
        tabuleiro[0][l] = 3; // Navio Horizontal: tabuleiro na linha 2 e colunas de 3 a 5 trocado o valor para 3 
    }
    for(l =10; l > 6 ; l --){ //loop para fazer o posicionamento dos navios
        tabuleiro[l][9] = 3; // Navio Vertical
    }                      //tabuleiro na coluna 7 e linhas de 3 a 5 trocado o valor para 3 


    for(j = 0; j < 10; j++){ //loop for aninhado para imprimir a matriz
        for(k = 0; k < 10; k++){ //cada vez que o primeiro loop roda, o segundo roda completamente 
            printf("%2d", tabuleiro[j][k]);// imprime o valor da matriz na posiçao [j][k]
        }                                   //exemplo: quando j = 0, k roda de 0 a 9, imprimindo toda a primeira linha
        printf("\n");                       //%2d saida com 2 espaços para cada numero
    }
    

        // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

  











    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
