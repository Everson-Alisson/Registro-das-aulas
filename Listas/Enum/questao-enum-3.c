#include <stdio.h>

typedef enum {
    JANEIRO = 1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
} Mes;

typedef struct Data {
    int dia;
    Mes mes;
    int ano;
}Data;

int main() {
    Data data;

    printf("Digite o dia: ");
    scanf("%d", &data.dia);

    printf("Digite o mes (1 a 12): ");
    int mes;
    scanf("%d", &mes);

    if (mes < 1 || mes > 12) {
        printf("Mes invalido. Usando valor padrao.\n");
        mes = 1;
    }

    data.mes = (Mes)mes;

    printf("Digite o ano: ");
    scanf("%d", &data.ano);
    printf("\nData: %02d/%02d/%04d\n", data.dia, data.mes, data.ano);

    return 0;
}
