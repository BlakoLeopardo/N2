#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

float calculaDistancia(Ponto p1, Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Ponto p1 = {0, 0}, p2 = {3, 4};
    printf("Distância: %.2f\n", calculaDistancia(p1, p2));
    return 0;
}