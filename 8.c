#include <stdio.h>

// Função para contar o número de caracteres em uma string
int strlen_custom(const char *s) 
{
int count = 0;

while (*s != '\0') 
{
    count++;
    s++;
}

return count;
}

int main() 
{
char texto[] = "Contando caracteres";
int comprimento = strlen_custom(texto);

    printf("Comprimento da string: %d\n", comprimento);

return 0;
}