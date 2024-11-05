#include <stdio.h>

void boasVindas() { printf("Bem-vindo!\n"); }
void erro() { printf("Erro!\n"); }
void despedida() { printf("Adeus!\n"); }

int main() {
    void (*mensagens[])() = {boasVindas, erro, despedida};
    int escolha;
    printf("Escolha uma mensagem (0=Boas-vindas, 1=Erro, 2=Despedida): ");
    scanf("%d", &escolha);
    mensagens[escolha]();
    return 0;
}
