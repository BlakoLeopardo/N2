#include <stdio.h>

int main() {
int valor, cedulas100, cedulas50, cedulas10, cedulas5, cedulas1;

    printf("Digite o valor em reais: ");
        scanf("%d", &valor);

    cedulas100 = valor / 100;
    valor %= 100;

    cedulas50 = valor / 50;
    valor %= 50;

    cedulas10 = valor / 10;
    valor %= 10;

    cedulas5 = valor / 5;
    valor %= 5;

    cedulas1 = valor;

    // Exibe o resultado
    printf("Cédulas necessárias:\n");
        printf("%d cédulas de R$100\n", cedulas100);
            printf("%d cédulas de R$50\n", cedulas50);
                printf("%d cédulas de R$10\n", cedulas10);
                    printf("%d cédulas de R$5\n", cedulas5);
                        printf("%d cédulas de R$1\n", cedulas1);

return 0;
}