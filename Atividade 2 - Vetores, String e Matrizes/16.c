#include <stdio.h>
#define N 8

void contarAdjacentes(int campo[N][N]) 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (campo[i][j] == 9) continue; // Se for uma bomba, pula

            int bombas = 0;

            // Verifica as 8 posições ao redor
            for (int x = i - 1; x <= i + 1; x++) 
            {
                for (int y = j - 1; y <= j + 1; y++) 
                {
                    if (x >= 0 && x < N && y >= 0 && y < N && campo[x][y] == 9) 
                    {
                        bombas++;
                    }
                }
            }
            campo[i][j] = bombas; // Marca o número de bombas adjacentes
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
                printf(" %d ", campo[i][j]);
        }
        
        printf("\n");
    }
}

int main() 
{
int campo[N][N] = {0};

    // Posiciona algumas bombas para testar
    campo[1][1] = 9;
    campo[3][4] = 9;
    campo[4][2] = 9;
    campo[6][5] = 9;

    contarAdjacentes(campo);
    exibirCampo(campo);

return 0;
}