#include <stdio.h>

// Função para encontrar a posição de um caractere em uma string
int strpos(const char *s, char c) 
{
int pos = 0;
    
while (*s != '\0')
{
    if (*s == c) 
    {
        return pos;
    }
    s++;
    pos++;
}
    
return -1;  // Retorna -1 se o caractere não for encontrado
}

int main() 
{
char texto[] = "Exemplo de busca";
char caractere = 'd';
int posicao = strpos(texto, caractere);

if (posicao != -1) 
{
    printf("O caractere '%c' esta na posicao %d.\n", caractere, posicao);
} else 
{
    printf("Caractere '%c' nao encontrado.\n", caractere);
}

return 0;
}