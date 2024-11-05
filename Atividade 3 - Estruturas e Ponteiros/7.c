#include <stdio.h>

typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
} Livro;

int main() {
    Livro livros[3];
    for (int i = 0; i < 3; i++) {
        printf("Digite o título do livro %d: ", i+1);
        scanf(" %99[^\n]", livros[i].titulo);
        printf("Digite o autor do livro %d: ", i+1);
        scanf(" %99[^\n]", livros[i].autor);
        printf("Digite o ano do livro %d: ", i+1);
        scanf("%d", &livros[i].ano);
    }
    for (int i = 0; i < 3; i++) {
        printf("Livro %d: %s, %s, %d\n", i+1, livros[i].titulo, livros[i].autor, livros[i].ano);
    }
    return 0;
}