#include <stdio.h>

int main() {
    int soma = 0;
    int numero;

    do {
        soma += numero;
        printf("Digite um numero...");
        scanf("%d", &numero);
    } while (numero != 0);
    
    printf("Soma: %d", soma);

    return 0;
}