#include <stdio.h>

typedef enum {
    MASCULINO,
    FEMININO
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

    printf("Digite o genero da pessoa (0 para Masculino, 1 para Feminino): ");
    int genero;
    scanf("%d", &genero);

    if (genero == 0) {
        pessoa.genero = MASCULINO;
    } else if (genero == 1) {
        pessoa.genero = FEMININO;
    } else {
        printf("Genero invalido. Usando valor padrão (Masculino).\n");
        pessoa.genero = MASCULINO;
    }

    printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);

    if (pessoa.genero == MASCULINO) {
        printf("Gênero: Masculino\n");
    } else {
        printf("Gênero: Feminino\n");
    }

    return 0;
}
