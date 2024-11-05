#include <stdio.h>

// Função para copiar uma string
void strcpy_custom(char *dest, const char *src) 
{
while (*src != '\0') 
{
    *dest = *src;  // Copia o caractere de src para dest
    dest++;
    src++;
}
    *dest = '\0';  // Adiciona o terminador na string de destino
}

int main() 
{
char origem[] = "Exemplo de texto";
char destino[50];

    strcpy_custom(destino, origem);

    printf("Texto copiado: %s\n", destino);

return 0;
}