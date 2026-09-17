#include <stdio.h>

long long potencia(int base, int exp) {
    // Caso Base
    if (exp == 0) return 1;

    // Caso recursivo
    return base * potencia(base, exp - 1);
}

int main() {
    printf("%lld\n", potencia(2, 3));

    return 0;
}