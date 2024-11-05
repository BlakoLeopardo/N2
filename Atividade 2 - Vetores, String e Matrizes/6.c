#include <stdio.h>

// Função personalizada para exibir uma string com nova linha
void puts_custom(const char *s) 
{
while (*s != '\0') 
{
    putchar(*s);  // Exibe cada caractere da string
    s++;
}
    putchar('\n');  // Pula linha ao final
}

int main() 
{
char texto[] = "Ola, Mundo!";

    puts_custom(texto);  // Usa a função personalizada para exibir a string
    
return 0;
}