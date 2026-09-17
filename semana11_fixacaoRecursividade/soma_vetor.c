#include <stdio.h>

int somaVetor(int v[], int n) {
    // Caso Base
    if (n == 0) return 0;

    // Caso Recursivo
    return v[n - 1] + somaVetor(v , n - 1);
}

int main() {
    int vetor[] = {1, 2, 3};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("%d\n", somaVetor(vetor, tamanho));
}