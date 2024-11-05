#include <stdio.h>

typedef struct {
    char origem[50];
    char destino[50];
    char data[20];
    char horario[10];
} Voo;

int main() {
    Voo voo = {"São Paulo", "Rio de Janeiro", "20/12/2024", "10:00"};
    printf("Voo de %s para %s\nData: %s\nHorário: %s\n", voo.origem, voo.destino, voo.data, voo.horario);
    return 0;
}