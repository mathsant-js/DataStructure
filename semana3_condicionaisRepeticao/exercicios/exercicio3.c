#include <stdio.h>

int main() {
    int numero;

    do
    {
        printf("Digite um numero...\n");
        scanf("%d", &numero);
    } while (numero < 0);
    
    printf("Numero digitado: %d", numero);

    return 0;
}