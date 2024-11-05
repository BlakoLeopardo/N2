#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complexo;

Complexo somaComplexo(Complexo a, Complexo b) {
    Complexo resultado = {a.real + b.real, a.imag + b.imag};
    return resultado;
}

int main() {
    Complexo num1 = {2, 3}, num2 = {4, -5};
    Complexo resultado = somaComplexo(num1, num2);
    printf("Soma: %.1f + %.1fi\n", resultado.real, resultado.imag);
    return 0;
}