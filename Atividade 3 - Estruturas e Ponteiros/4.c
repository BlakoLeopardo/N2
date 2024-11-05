#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    Ponto inicio;
    Ponto fim;
} Segmento;

float comprimento(Segmento s) {
    return sqrt(pow(s.fim.x - s.inicio.x, 2) + pow(s.fim.y - s.inicio.y, 2));
}

int main() {
    Segmento s = {{0, 0}, {3, 4}};
    printf("Comprimento: %.2f\n", comprimento(s));
    return 0;
}