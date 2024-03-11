#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 50

typedef struct Aluno {
    int matricula;
    char nome[80];
    char turma;
    float notas[3];
    float media;
}Aluno;

void inicializaAlunos(Aluno **alunos) {
    for (int i = 0; i < MAX_ALUNOS; i++) {
        alunos[i] = NULL;
    }
}

void matricula(int n, Aluno **alunos) {
    if (n < 0 || n >= MAX_ALUNOS) {
        printf("Numero de vagas excedido.\n");
        return;
    }

    if (alunos[n] != NULL) {
        printf("Matricula ja ocupada.\n");
        return;
    }

    alunos[n] = (Aluno *)malloc(sizeof(Aluno));

    printf("Digite a matricula do aluno: ");
    scanf("%d", &(alunos[n]->matricula));

    printf("Digite o nome do aluno: ");
    scanf("%s", alunos[n]->nome);

    printf("Digite a turma do aluno: ");
    scanf(" %c", &(alunos[n]->turma));

    printf("Digite as notas do aluno (3 notas): ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &(alunos[n]->notas[i]));
    }

    alunos[n]->media = 0.0;
    for (int i = 0; i < 3; i++) {
        alunos[n]->media += alunos[n]->notas[i];
    }
    alunos[n]->media /= 3.0;

    printf("Matricula realizada com sucesso.\n");
}

void lanca_notas(int n, Aluno **alunos) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL) {
            printf("Digite as novas notas do aluno %d (3 notas): ", alunos[i]->matricula);
            for (int j = 0; j < 3; j++) {
                scanf("%f", &(alunos[i]->notas[j]));
            }

            alunos[i]->media = 0.0;
            for (int j = 0; j < 3; j++) {
                alunos[i]->media += alunos[i]->notas[j];
            }
            alunos[i]->media /= 3.0;
        }
    }
}

void imprime_tudo(int n, Aluno **alunos) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL) {
            printf("\nDados do Aluno %d:\n", alunos[i]->matricula);
            printf("Nome: %s\n", alunos[i]->nome);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Media: %.2f\n", alunos[i]->media);
        }
    }
}

void imprime_turma(int n, Aluno **alunos, char turma) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL && alunos[i]->turma == turma) {
            printf("\nDados do Aluno %d:\n", alunos[i]->matricula);
            printf("Nome: %s\n", alunos[i]->nome);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Media: %.2f\n", alunos[i]->media);
        }
    }
}

void imprime_turma_aprovados(int n, Aluno **alunos, char turma) {
    printf("\nAlunos aprovados na turma %c:\n", turma);
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL && alunos[i]->turma == turma && alunos[i]->media >= 7.0) {
            printf("Aluno %d: %s, Media: %.2f\n", alunos[i]->matricula, alunos[i]->nome, alunos[i]->media);
        }
    }
}

int main() {
    Aluno *alunos[MAX_ALUNOS];

    inicializaAlunos(alunos);
    matricula(0, alunos);
    matricula(1, alunos);
    matricula(2, alunos);

    lanca_notas(3, alunos);

    imprime_tudo(3, alunos);

    imprime_turma(3, alunos, 'A');

    imprime_turma_aprovados(3, alunos, 'A');

    for (int i = 0; i < MAX_ALUNOS; i++) {
        free(alunos[i]);
    }

    return 0;
}