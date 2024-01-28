#include <stdio.h>

typedef enum {
    ALIMENTO,
    BEBIDA,
    ELETRONICO
} TipoProduto;

typedef union {
    TipoProduto tipoAlimento;
    TipoProduto tipoBebida;
    TipoProduto tipoEletronico;
} Tipo;

typedef struct Produto {
    char nome[50];
    float preco;
    Tipo tipo;
}Produto;

int main() {
    Produto produto;

    printf("Digite o nome do produto: ");
    scanf("%s", produto.nome);

    printf("Digite o preco do produto: ");
    scanf("%f", &produto.preco);

    printf("Digite o tipo do produto (0 para Alimento, 1 para Bebida, 2 para Eletronico): ");
    int tipo;
    scanf("%d", &tipo);

    switch (tipo) {
        case 0:
            produto.tipo.tipoAlimento = ALIMENTO;
            break;
        case 1:
            produto.tipo.tipoBebida = BEBIDA;
            break;
        case 2:
            produto.tipo.tipoEletronico = ELETRONICO;
            break;
        default:
            printf("Tipo invalido. Usando tipo desconhecido.\n");
    }

    printf("\nDados do Produto:\n");
    printf("Nome: %s\n", produto.nome);
    printf("Preco: %.2f\n", produto.preco);

    switch (tipo) {
        case 0:
            printf("Tipo: Alimento\n");
            break;
        case 1:
            printf("Tipo: Bebida\n");
            break;
        case 2:
            printf("Tipo: Eletronico\n");
            break;
        default:
            printf("Tipo: Desconhecido\n");
    }

    return 0;
}
