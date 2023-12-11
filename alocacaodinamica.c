#include <stdio.h>
#include <stdlib.h>

//definindo a estrutura aluno.
struct aluno{
    char nome[20];
    int idade;
    int mat;
    char email[50];
};
//alocacao dinamica
int main(void){
    struct aluno estudante;
    printf ("digite o nome do aluno");
    scanf(" %[^\n]", estudante.nome);
    printf ("digite a idade"); 
    scanf ("%d", &estudante. idade);
    printf ("digite a matricula"); 
    scanf ("%d", &estudante. mat);
    printf("digite o email");
    scanf(" %[^\n]", estudante.email);
    free(estudante);
    return 0;
}