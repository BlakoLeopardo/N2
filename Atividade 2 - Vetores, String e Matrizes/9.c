#include <stdio.h>

// Função para concatenar a string t ao final da string s
void strcat_custom(char *s, const char *t) 
{
while (*s != '\0') 
{
    s++;  // Move o ponteiro até o fim da string s
}
while (*t != '\0') 
{
    *s = *t;  // Adiciona os caracteres de t a s
    s++;
    t++;
}
    *s = '\0';  // Termina a string concatenada com '\0'
}

int main() 
{
char s[50] = "Primeira parte, ";
char t[] = "e segunda parte";

    strcat_custom(s, t);

    printf("String concatenada: %s\n", s);

return 0;
}