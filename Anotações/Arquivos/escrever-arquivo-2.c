#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    //cria o arquivo: entrada.txt no modo texto "t"

    FILE* arquivo = fopen("entrada_escrita.txt", "w");
    
    if(arquivo==NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo criado!\n");
    }
 
    fputs("hello world!", arquivo);
    
    fclose(arquivo); //fecha o arquivo
    
    return 0;
}