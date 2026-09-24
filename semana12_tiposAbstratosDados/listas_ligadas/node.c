#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int dado;
    struct Node *proximo; // ponteiro -> O link
};

void inserirInicio(struct Node** head, int valor) {
    struct Node* novo = malloc(sizeof(struct Node));
    novo->dado = valor;
    novo->proximo = *head;
    *head = novo;
}

int main() {
    struct Node* No;

    // Alocando apenas o espaço de memória necessário para o nó
    No = (struct Node*) malloc(sizeof(struct Node));

    // Antes de atribuir valor
    printf("%d\n", No->dado);

    No->dado = 10;
    No->proximo = NULL;

    // Depois de atribuir valor
    printf("%d\n", No->dado);

    // Inserindo novo início
    if (No == NULL) {
        printf("[ERRO] Memoria insuficiente\n");
        exit(1);
    }

    inserirInicio(&No, 5);

    // Imprimindo novo início
    printf("%d\n", No->dado);

    // Imprimindo o novo próximo
    printf("%d\n", No->proximo->dado);

    return 0;
}