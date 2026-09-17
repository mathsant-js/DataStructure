#include <stdio.h>

void contagem(int n) {
    // Caso Base
    if (n == 0) return;

    printf("%d\n", n);

    // Caso recursivo
    return contagem(n - 1);

    // printf("%d\n", n); // Retorno da pilha da memória
}

int main() {
    contagem(5);
    return 0;
}