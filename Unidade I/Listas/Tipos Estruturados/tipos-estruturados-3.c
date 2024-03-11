#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    float base;
    float altura;
} Retangulo;

typedef struct {
    float raio;
} Circulo;

typedef Retangulo Ret;

typedef Circulo Circ;

Ret* ret_circunscrito(Circ* c, float h) {
    Ret* retangulo = (Ret*)malloc(sizeof(Ret));

    retangulo->base = 2 * c->raio;
    retangulo->altura = h;

    return retangulo;
}

Circ* circ_interno(Ret* r) {
    Circ* circulo = (Circ*)malloc(sizeof(Circ));

    circulo->raio = fmin(0.5 * r->base, 0.5 * r->altura);

    return circulo;
}

int main() {
    Circulo circulo = {5};
    float altura_retangulo_circunscrito = 8;

    Retangulo* retangulo_circunscrito = ret_circunscrito(&circulo, altura_retangulo_circunscrito);

    printf("Retangulo circunscrito:\n");
    printf("Base: %.2f\n", retangulo_circunscrito->base);
    printf("Altura: %.2f\n", retangulo_circunscrito->altura);
    free(retangulo_circunscrito);

    Retangulo retangulo = {6, 4};

    Circulo* circulo_interno = circ_interno(&retangulo);

    printf("\nCirculo interno:\n");
    printf("Raio: %.2f\n", circulo_interno->raio);
    free(circulo_interno);

    return 0;
}
