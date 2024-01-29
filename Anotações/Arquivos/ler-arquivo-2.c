#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    //cria o arquivo: entrada.txt no modo texto "t"

    FILE* fp = fopen("entrada.txt", "r");
    
    char c[20];
    
    if(fp==NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo criado!\n");
    }
    
    fgets(c, 20, fp); //ler uma linha do arquivo
    printf("%s\n", c);//imprime o caractere lido
    fclose(fp); //fecha o arquivo
    
    return 0;
}