#include <stdio.h>
#include <stdlib.h>

int cmpCrescente(const void *a, const void *b) { return (*(int *)a - *(int *)b); }
int cmpDecrescente(const void *a, const void *b) { return (*(int *)b - *(int *)a); }

int main() {
    int valores[] = {3, 1, 4, 1, 5};
    int n = sizeof(valores) / sizeof(valores[0]);
    int escolha;
    printf("Escolha uma ordenação (0=Crescente, 1=Decrescente): ");
    scanf("%d", &escolha);
    qsort(valores, n, sizeof(int), escolha == 0 ? cmpCrescente : cmpDecrescente);
    for (int i = 0; i < n; i++) printf("%d ", valores[i]);
    return 0;
}