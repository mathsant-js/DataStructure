#include <stdio.h>

// Função recursiva
long fatorial(int n) {

    if (n == 0) {
        return 1;
    }

    return n * fatorial(n - 1);
}

// Função recursiva de cauda
int fat_cauda(int n, int acc) {
    if (n == 0) return acc;

    return fat_cauda(n - 1, n * acc);
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%d! = %lld\n", n, fatorial(n));
    printf("\n");
    printf("%d! = %lld\n", n, fat_cauda(n, 1));

    return 0;
}