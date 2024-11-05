#include <stdio.h>

int main() {
char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    printf("Tabuleiro do Jogo da Velha:\n");

for (int i = 0; i < 3; i++) 
{
    for (int j = 0; j < 3; j++) 
    {
        printf(" %c ", tabuleiro[i][j]);
            
        if (j < 2) printf("|");
    }
        printf("\n");
        
    if (i < 2) printf("---+---+---\n");
}

return 0;
}