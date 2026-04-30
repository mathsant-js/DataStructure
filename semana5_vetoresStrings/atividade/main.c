#include <stdio.h>

int main() {
    int tamanho;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float notas[5];
    float somaNota = 0.0;
    float media;
    notas[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        somaNota += notas[i];
    }

    media = somaNota / tamanho;
    printf("Media: %.2f", media);

    return 0;
}