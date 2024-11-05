#include <stdio.h>

typedef struct {
    int hora;
    int minuto;
    int segundo;
} Horario;

int main() {
    Horario h = {14, 30, 45};
    printf("Horário: %02d:%02d:%02d\n", h.hora, h.minuto, h.segundo);
    return 0;
}