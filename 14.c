#include <stdio.h>
#define N 5

int main() {
int campo[N][N] = {0};
int minas[2][2] = {{1, 3}, {2, 2}}; // Posiciona minas em algumas coordenadas

    // Marca as minas no campo
for (int i = 0; i < 2; i++) 
{
    campo[minas[i][0]][minas[i][1]] = 9;
}

int x, y;
    
    printf("Digite as coordenadas para jogar (0 0 para sair):\n");

while (1) 
{
    printf("Coordenadas (x y): ");
        scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) 
    {
        printf("Saindo do jogo.\n");
    
    break;
    }

    if (campo[x][y] == 9) 
    {
        printf("Voce acertou uma mina! Fim de jogo.\n");
    break;
    } else 
    {
        printf("Campo seguro! Continue jogando.\n");
    }
}

return 0;
}