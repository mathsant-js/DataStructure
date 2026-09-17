#include <stdio.h>

int soma_par(int vetor[], int tamanho) {
    if (tamanho == 0) return 0;

    if (vetor[tamanho - 1] % 2 == 0)
    {
        return vetor[tamanho - 1] + soma_par(vetor, tamanho - 1);
    }

    return soma_par(vetor, tamanho - 1);
}

int main() {
    int vetor[] = {1, 2, 3, 8};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Soma dos pares de um vetor: %d", soma_par(vetor, tamanho));

    return 0;
}