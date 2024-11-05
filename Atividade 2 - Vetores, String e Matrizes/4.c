#include <stdio.h>

// Função que encontra o valor mínimo e máximo em um vetor
void minimax(float v[], int n, float *min, float *max) {
    *min = *max = v[0];  // Inicializa min e max com o primeiro valor do vetor

for (int i = 1; i < n; i++) 
{
    if (v[i] < *min) *min = v[i];
    if (v[i] > *max) *max = v[i];
}
}

int main() 
{
int n;

    printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

float v[n];

    printf("Digite os elementos do vetor:\n");

for (int i = 0; i < n; i++) 
{
    scanf("%f", &v[i]);
}

float min, max;

    minimax(v, n, &min, &max);  // Chama a função

    printf("Valor minimo: %.2f\n", min);
        printf("Valor maximo: %.2f\n", max);

return 0;
}