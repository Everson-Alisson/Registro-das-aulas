#include <stdio.h> // printf, scanf
#include <stdlib.h> // funções malloc, calloc, free, exit, realloc

//int main(void){
//    int tamanho =5, novo_tamanho;
//    int contador;
//    int *vetor = (int *) malloc(tamanho *sizeof(int));
//   
//    if (vetor==NULL){
//        printf("Erro na alocacao de memoria");
//        exit(1); // aborta a execução do programa
//    } else{
//        printf("acao bem sucedida!\n");
//    }
//   
//    // ler os dados do vetor:
//    printf("digite os valores do vetor\n");
//    for (contador =0; contador<tamanho; contador++){
//        scanf("%d", &vetor[contador]); // ou vetor+contador
//    }
//    free(vetor);
//   
//    return 0;
//}
//int main(){
//    int tamanho=5, novo_tamanho;
//    int *vetor=(int*) malloc(tamanho*sizeof(int));
//    printf("\nEntre com o novo tamanho do vetor: ");
//    scanf("%d", &novo_tamanho);
//    vetor = (int*) realloc(vetor, novo_tamanho*sizeof(int));
//      if (vetor==NULL){
//       printf("Erro na alocacao de memoria");
//       exit(1); // aborta a execução do programa
//    } else{
//       printf("acao bem sucedida!\n");
//   }
//   free(vetor);
//   return 0;
//}
//int main(void){
//    char * nome = (char*) malloc (50*sizeof(char));
//    if (nome==NULL){
//        exit(1);
//    }
//    printf("digite seu nome:\n");
//    scanf("%[^\n]", nome);
//    free(nome);
//    return 0;
//}
