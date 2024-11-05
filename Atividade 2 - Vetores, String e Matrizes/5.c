#include <stdio.h>

// Função para preencher o vetor com valores fornecidos pelo usuário
void carrega(int *v, int n) 
{
    printf("Digite os valores do vetor:\n");

for (int i = 0; i < n; i++) 
{
    scanf("%d", v + i);  // Utiliza o ponteiro para armazenar o valor no vetor
}
}

int main() 
{
int n;

    printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

int v[n];
    
    carrega(v, n);

    printf("Valores no vetor:\n");
    
for (int i = 0; i < n; i++) 
{
    printf("%d ", v[i]);
}
    
    printf("\n");

return 0;
}