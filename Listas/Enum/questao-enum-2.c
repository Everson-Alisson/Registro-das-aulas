#include <stdio.h>

typedef enum {
    ALIMENTO,
    BEBIDA,
    ELETRONICO,
    DESCONHECIDO
} TipoProduto;

typedef struct Produto {
    char nome[50];
    float preco;
    TipoProduto tipo;
}Produto;

const char* obterNomeTipo(TipoProduto tipo) {
    switch (tipo) {
        case ALIMENTO:
            return "Alimento";
        case BEBIDA:
            return "Bebida";
        case ELETRONICO:
            return "Eletronico";
        case DESCONHECIDO:
            return "Desconhecido";
        default:
            return "Desconhecido";
    }
}

int main() {
    Produto produto;

    printf("Digite o nome do produto: ");
    scanf("%s", produto.nome);

    printf("Digite o preco do produto: ");
    scanf("%f", &produto.preco);

    printf("Digite o tipo do produto (0 para Alimento, 1 para Bebida, 2 para Eletronico): ");
    int tipo;
    scanf("%d", &tipo);

    if (tipo >= 0 && tipo <= 2) {
        produto.tipo = (TipoProduto)tipo;
    } else {
        printf("Tipo invalido. Usando tipo Desconhecido.\n");
        produto.tipo = DESCONHECIDO;
    }

    printf("\nDados do Produto:\n");
    printf("Nome: %s\n", produto.nome);
    printf("Preco: %.2f\n", produto.preco);
    printf("Tipo: %s\n", obterNomeTipo(produto.tipo));

    return 0;
}
