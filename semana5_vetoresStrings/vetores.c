#include <stdio.h>
void mostrar_vetor(int vetor[]);

int main() {
    int valores[3] = {1, 2, 3};

    mostrar_vetor(valores);

    for (int i = 0; i < 3; i++) {
        printf("Digite um numero: ");
        scanf("%d", &valores[i]);
    }

    mostrar_vetor(valores);    

    return 0;
}

// Função para percorrer o vetor
void mostrar_vetor(int vetor[]) {
    for (int i = 0; i < 3; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}