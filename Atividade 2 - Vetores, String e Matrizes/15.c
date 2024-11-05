#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void inicializarCampo(int campo[N][N], int facilidade) 
{
    srand(time(NULL));

for (int i = 0; i < N; i++) 
{
    for (int j = 0; j < N; j++) 
    {
        campo[i][j] = (rand() % 100 < facilidade) ? 9 : 0;
    }
}
}

void exibirCampo(int campo[N][N]) 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (campo[i][j] == 9)
                printf(" * ");
            else
                printf(" . ");
        }
        
        printf("\n");
    }
}

int main() 
{
int campo[N][N];
int facilidade;

    printf("Digite a facilidade do campo (0 a 100): ");
        scanf("%d", &facilidade);

    inicializarCampo(campo, facilidade);
    exibirCampo(campo);

return 0;
}