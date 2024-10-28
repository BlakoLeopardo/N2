#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
int id;
char nome[20];
float nota;
} Aluno;

// Função de comparação para ordenar por nota
int compara_nota(const void *a, const void *b) 
{
float notaA = ((Aluno*)a)->nota;
float notaB = ((Aluno*)b)->nota;
    
return (notaA > notaB) - (notaA < notaB);
}

int main() 
{
Aluno alunos[] = {{1, "Carlos", 8.5}, {2, "Ana", 9.3}, {3, "Bruno", 7.8}};
    
int n = sizeof(alunos) / sizeof(alunos[0]);

    // Ordena os alunos por nota
    qsort(alunos, n, sizeof(Aluno), compara_nota);

    // Exibe os alunos ordenados
    printf("Alunos ordenados por nota:\n");
    
for (int i = 0; i < n; i++)
{
    printf("ID: %d, Nome: %s, Nota: %.2f\n", alunos[i].id, alunos[i].nome, alunos[i].nota);
}

return 0;
}