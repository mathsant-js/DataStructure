#include <stdio.h>

long soma_fibonacci(int n);

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Fibonacci de %d: %d", n, soma_fibonacci(n));

    return 0;
}

long soma_fibonacci(int n) {
    if (n <= 1) return n;

    return soma_fibonacci(n - 1) + soma_fibonacci(n - 2);
}