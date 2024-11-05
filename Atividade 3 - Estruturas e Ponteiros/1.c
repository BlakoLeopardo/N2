#include <stdio.h>

int main() {
    struct {
        char titulo[100];
        char autor[100];
        char editora[100];
        int ano;
    } livro = {"C Programming", "Dennis Ritchie", "Prentice Hall", 1978};

    printf("Livro: %s\nAutor: %s\nEditora: %s\nAno: %d\n", livro.titulo, livro.autor, livro.editora, livro.ano);
    return 0;
}