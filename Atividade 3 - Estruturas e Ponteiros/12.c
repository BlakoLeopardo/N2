#include <stdio.h>

int* encontraMaior(int* array, int tamanho) {
    int* maior = array;
    for (int i = 1; i < tamanho; i++) {
        if (array[i] > *maior) {
            maior = &array[i];
        }
    }
    return maior;
}

int main() {
    int arr[] = {5, 3, 9, 2, 10};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int* maior = encontraMaior(arr, tamanho);
    printf("O maior valor é %d\n", *maior);
    return 0;
}