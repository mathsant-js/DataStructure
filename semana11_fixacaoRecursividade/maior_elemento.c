#include <stdio.h>

int maior(int v[], int n) {
    if (n == 1) return v[0];

    int anterior = maior(v, n - 1);

    if (v[n - 1] > anterior) {
        return v[n - 1];
    }

    return anterior;
}

int main() {
    int vetor[] = {5, 2, 3, 7};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("%d\n", maior(vetor, tamanho));
    return 0;
}