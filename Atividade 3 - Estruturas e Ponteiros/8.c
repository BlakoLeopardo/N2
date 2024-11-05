#include <stdio.h>

typedef int (*Operacao)(int, int);

int soma(int a, int b) { return a + b; }
int subtracao(int a, int b) { return a - b; }
int multiplicacao(int a, int b) { return a * b; }
int divisao(int a, int b) { return b != 0 ? a / b : 0; }

int main() {
    Operacao op[] = {soma, subtracao, multiplicacao, divisao};
    int a = 6, b = 3, escolha;
    printf("Escolha uma operação (0=Soma, 1=Subtração, 2=Multiplicação, 3=Divisão): ");
    scanf("%d", &escolha);
    printf("Resultado: %d\n", op[escolha](a, b));
    return 0;
}