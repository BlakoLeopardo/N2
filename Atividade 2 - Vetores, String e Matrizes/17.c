#include <stdio.h>

// Função para contar caracteres usando ponteiros
int strlen_pointer(const char *s) 
{
const char *inicio = s;
    
while (*s != '\0')
{
    s++;  // Avança o ponteiro até o fim da string
}
   
return s - inicio;  // Retorna a diferença de posições dos ponteiros
}

int main() 
{
char texto[] = "Contagem com ponteiros";
int comprimento = strlen_pointer(texto);

    printf("Comprimento da string: %d\n", comprimento);

return 0;
}