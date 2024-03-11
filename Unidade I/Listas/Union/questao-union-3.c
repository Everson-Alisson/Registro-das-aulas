#include <stdio.h>

typedef union {
    int janeiro;
    int fevereiro;
    int marco;
    int abril;
    int maio;
    int junho;
    int julho;
    int agosto;
    int setembro;
    int outubro;
    int novembro;
    int dezembro;
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

    switch (mes) {
        case 1:
            data.mes.janeiro = 1;
            break;
        case 2:
            data.mes.fevereiro = 2;
            break;
        case 3:
            data.mes.marco = 3;
            break;
        case 4:
            data.mes.abril = 4;
            break;
        case 5:
            data.mes.maio = 5;
            break;
        case 6:
            data.mes.junho = 6;
            break;
        case 7:
            data.mes.julho = 7;
            break;
        case 8:
            data.mes.agosto = 8;
            break;
        case 9:
            data.mes.setembro = 9;
            break;
        case 10:
            data.mes.outubro = 10;
            break;
        case 11:
            data.mes.novembro = 11;
            break;
        case 12:
            data.mes.dezembro = 12;
            break;
        default:
            printf("Mes invalido. Usando valor padrao.\n");
            data.mes.janeiro = 1;
    }

    printf("Digite o ano: ");
    scanf("%d", &data.ano);
    printf("\nData: %02d/%02d/%04d\n", data.dia, mes, data.ano);

    return 0;
}
