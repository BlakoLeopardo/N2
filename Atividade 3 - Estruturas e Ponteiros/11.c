#include <stdio.h>
#include <string.h>
#include <ctype.h>

void paraMaiusculas(char *str) { for (; *str; str++) *str = toupper(*str); }
void paraMinusculas(char *str) { for (; *str; str++) *str = tolower(*str); }
void inverter(char *str) { strrev(str); }

int main() {
    char str[100] = "Hello World";
    int escolha;
    printf("Escolha a operação (0=Maiúsculas, 1=Minúsculas, 2=Inverter): ");
    scanf("%d", &escolha);
    void (*ops[])(char*) = {paraMaiusculas, paraMinusculas, inverter};
    ops[escolha](str);
    printf("Resultado: %s\n", str);
    return 0;
}