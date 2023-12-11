#include <stdio.h>
#include <stdlib.h>

/*typedef
*/

//definindo a estrutura aluno.
typedef struct aluno{
    char nome[20];
    int idade;
    int mat;
    char email[50];
} aluno;

void preenche (aluno * estudante){
    printf ("digite o nome do aluno");
    scanf(" %[^\n]", estudante->nome);
    printf ("digite a idade"); 
    scanf ("%d", &estudante->idade);
    printf ("digite a matricula"); 
    scanf ("%d", &estudante->mat);
    printf("digite o email");
    scanf(" %[^\n]", estudante->email);
    free (estudante);
}

void imprime(aluno*estudante){
    printf("nome: %s\nidade: %d \nmatricula %d \nemail: %s\n", estudante->nome, estudante->mat, estudante->idade, estudante->email);
}

int main(void){
    aluno * estudante = (aluno*) malloc (sizeof(aluno));
    if (estudante== NULL){
        exit(1);
    }
    preenche(estudante);
    imprime(estudante);
    free (estudante);
    return 0;
}