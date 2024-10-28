#include <stdio.h>

int main() {
int numeros[5];

    // Solicita os 5 números do usuário
    printf("Digite 5 numeros:\n");
for (int i = 0; i < 5; i++) 
{
    printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
}

    // Exibe os números em ordem inversa
    printf("Numeros em ordem inversa:\n");
    
for (int i = 4; i >= 0; i--) 
{
    printf("%d ", numeros[i]);
}
    printf("\n");

return 0;
}