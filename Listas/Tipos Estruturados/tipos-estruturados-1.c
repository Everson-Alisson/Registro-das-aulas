#include <stdio.h>

typedef struct Ingresso{
    float preco;
    char local[50];
    char atracao[50];
} Ingresso;

void preenche(Ingresso* i);
void imprime(Ingresso* i);
void altera_preco(Ingresso* i, float valor);
void imprime_menor_maior_preco(int n, Ingresso* vet);

void preenche(Ingresso* i) {
    printf("Digite o preco do ingresso: ");
    scanf("%f", &(i->preco));

    printf("Digite o local do evento: ");
    scanf("%s", i->local);

    printf("Digite a atração do evento: ");
    scanf("%s", i->atracao);
}

void imprime(Ingresso* i) {
    printf("Preco: %.2f\n", i->preco);
    printf("Local: %s\n", i->local);
    printf("Atracao: %s\n", i->atracao);
}

void altera_preco(Ingresso* i, float valor) {
    i->preco = valor;
}

void imprime_menor_maior_preco(int n, Ingresso* vet) {
    int i;
    float menor = vet[0].preco, maior = vet[0].preco;
    int indice_menor = 0, indice_maior = 0;

    for (i = 1; i < n; i++) {
        if (vet[i].preco < menor) {
            menor = vet[i].preco;
            indice_menor = i;
        }

        if (vet[i].preco > maior) {
            maior = vet[i].preco;
            indice_maior = i;
        }
    }

    printf("\nEvento de Ingresso mais barato:\n");
    imprime(&vet[indice_menor]);

    printf("\nEvento de Ingresso mais caro:\n");
    imprime(&vet[indice_maior]);
}

int main() {
    Ingresso ingresso1, ingresso2;

    printf("Preencha os dados do Ingresso 1:\n");
    preenche(&ingresso1);

    printf("\nPreencha os dados do Ingresso 2:\n");
    preenche(&ingresso2);

    printf("\nIngresso 1:\n");
    imprime(&ingresso1);

    printf("\nIngresso 2:\n");
    imprime(&ingresso2);

    float novo_preco;
    printf("\nDigite o novo valor do Ingresso 1: ");
    scanf("%f", &novo_preco);
    altera_preco(&ingresso1, novo_preco);

    printf("\nIngresso 1 (apos alteração de preco):\n");
    imprime(&ingresso1);

    Ingresso ingressos[2] = {ingresso1, ingresso2};
    imprime_menor_maior_preco(2, ingressos);

    return 0;
}
