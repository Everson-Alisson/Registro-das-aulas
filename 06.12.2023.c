//declarando matrizes
//#include <stdio.h>
//#include <stdlib.h>

//  float *vetor= (float*) malloc (100*sizeof(float));
//  if (vetor==NULL){
//      exit (1);
//  }
//  free (vetor);
//  float media(int tamanho, int *vetor){
//      int soma = 0;
//      int contador;
//     for (contador=0; contador < tamanho; contador++){
//      soma=vetor[contador] + soma;
//     } 
//     return soma/tamanho;
//      
//  }
//  int main (){
//      int linhas=3, colunas =3, i,j;
//      //alocando vetor de ponteiros
//      int **matriz = (int**) malloc(linhas*sizeof(int*));
//      //alocando cada linha da matriz
//      for (i=0; i<linhas; i++){
//          matriz[i]=(int*) malloc(colunas*sizeof(int));
//      } 
//  }


// int main (){
//     int linhas=5, colunas =5, i,j;
//     int **matriz = (int**) malloc (linhas*sizeof(int*));
//     for (i=0; i<linhas; i++){
//         matriz[i]=(int*) malloc(colunas*sizeof(int*));
//     }
//     return 0;
// }