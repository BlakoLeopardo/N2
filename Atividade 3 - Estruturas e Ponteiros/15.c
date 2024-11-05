#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char titulo[100];
    int ano;
} Livro;

int comparaTitulo(const void* a, const void* b) {
    return strcmp(((Livro*)a)->titulo, ((Livro*)b)->titulo);
}

int comparaAno(const void* a, const void* b) {
    return ((Livro*)a)->ano - ((Livro*)b)->ano;
}

int main() {
    Livro livros[] = {{"C Programming", 1978}, {"The Art of Computer Programming", 1968}, {"Clean Code", 2008}};
    int n = sizeof(livros) / sizeof(livros[0]);
    
    printf("Ordenar por (0=Título, 1=Ano): ");
    int escolha;
    scanf("%d", &escolha);

    qsort(livros, n, sizeof(Livro), escolha == 0 ? comparaTitulo : comparaAno);

    for (int i = 0; i < n; i++) {
        printf("Livro: %s, Ano: %d\n", livros[i].titulo, livros[i].ano);
    }
    return 0;
}