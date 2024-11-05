#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* substring(const char* str, int inicio, int comprimento) {
    char* sub = (char*)malloc((comprimento + 1) * sizeof(char));
    if (sub != NULL) {
        strncpy(sub, str + inicio, comprimento);
        sub[comprimento] = '\0';
    }
    return sub;
}

int main() {
    char str[] = "OpenAI";
    int inicio = 2, comprimento = 3;
    char* sub = substring(str, inicio, comprimento);
    printf("Substring: %s\n", sub);
    free(sub);
    return 0;
}