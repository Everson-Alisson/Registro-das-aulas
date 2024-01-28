#include <stdio.h>

typedef union {
    char masculino;
    char feminino;
} Genero;

typedef struct Pessoa {
    char nome[50];
    int idade;
    Genero genero;
}Pessoa;

int main() {
    Pessoa pessoa;

    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o genero da pessoa (M para Masculino, F para Feminino): ");
    scanf(" %c", &pessoa.genero.masculino);

    printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);

    if (pessoa.genero.masculino == 'M') {
        printf("Genero: Masculino\n");
    } else if (pessoa.genero.feminino == 'F') {
        printf("Genero: Feminino\n");
    } else {
        printf("Genero: Desconhecido\n");
    }

    return 0;
}
