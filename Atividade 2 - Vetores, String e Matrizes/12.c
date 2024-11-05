#include <stdio.h>

int main() 
{
int n;
    
    printf("Digite a ordem da matriz quadrada: ");
        scanf("%d", &n);

int matriz[n][n];

    // Lê os elementos da matriz
    printf("Digite os elementos da matriz:\n");
    
for (int i = 0; i < n; i++) 
{
    for (int j = 0; j < n; j++) 
    {
        scanf("%d", &matriz[i][j]);
    }
}

    // Exibe a diagonal principal
    printf("Diagonal principal:\n");
    
for (int i = 0; i < n; i++) 
{
    printf("%d ", matriz[i][i]);
}
    printf("\n");

return 0;
}