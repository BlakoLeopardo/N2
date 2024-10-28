#include <stdio.h>

int main() {
int w[9] = {0}; // Inicializa o vetor w com 9 elementos zerados
int i = 5;

    // Realiza as atribuições conforme descrito no exercício
    w[0] = 17;
    w[i / 2] = 9;
    w[2 * i - 2] = 95;
    w[i - 1] = w[8] / 2;
    w[i] = w[2];
    w[i + 1] = w[i] + w[i - 1];
    w[w[2] - 2] = 78;
    w[w[i] - 1] = w[1] * w[i];

    // Exibe o vetor resultante
    printf("Valores de w apos as atribuicoes:\n");
    
for (int j = 0; j < 9; j++) 
{
    printf("w[%d] = %d\n", j, w[j]);
}

return 0;
}