#include <stdio.h>

// Função para remover o caractere na posição p
void strdel(char *s, int p) 
{
int i = 0;
    
while (s[i] != '\0') 
{
    if (i >= p) 
    {
        s[i] = s[i + 1];  // Move os caracteres para "remover" o caractere
    }
    i++;
}
}

int main() 
{
char texto[] = "Remover caractere";
int posicao = 7;

    strdel(texto, posicao);

    printf("String apos remocao: %s\n", texto);

return 0;
}