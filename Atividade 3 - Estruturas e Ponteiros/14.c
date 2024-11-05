#include <stdio.h>
#include <stdlib.h>

int* obtemElemento(int** matriz, int linhas, int colunas, int linha, int coluna) {
    if (linha >= 0 && linha < linhas && coluna >= 0 && coluna < colunas) {
        return &matriz[linha][coluna];
    }
    return NULL;
}

int main() {
    int linhas = 3, colunas = 3;
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = i * colunas + j;
        }
    }

    int linha = 1, coluna = 1;
    int* elemento = obtemElemento(matriz, linhas, colunas, linha, coluna);
    if (elemento != NULL) {
        printf("Elemento encontrado: %d\n", *elemento);
    } else {
        printf("Índices fora dos limites.\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}