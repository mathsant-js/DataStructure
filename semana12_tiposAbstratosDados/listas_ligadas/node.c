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

void imprimirLista(struct Node* head) {
    struct Node* atual = head;

    while (atual != NULL) {
        printf("%d -> ", atual->dado);
        atual = atual->proximo;
    }

    printf("NULL\n");
}

struct Node* buscar(struct Node* head, int alvo) {
    struct Node* atual = head;

    while (atual != NULL) {
        if (atual->dado == alvo) return atual;
        atual = atual->proximo;
    }
    
    return NULL;
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

    // Inserindo novo início da lista
    inserirInicio(&No, 5);

    // Imprimindo novo início
    printf("%d -> ", No->dado);

    // Imprimindo o novo próximo
    printf("%d -> ", No->proximo->dado);
    
    printf("NULL\n");

    printf("\n");

    inserirInicio(&No, 20);

    // Imprimindo a lista manualmente
    printf("%d -> ", No->dado);
    printf("%d -> ", No->proximo->dado);
    printf("%d -> ", No->proximo->proximo->dado);
    printf("NULL\n");

    // Função para imprimir a lista dinamicamente
    imprimirLista(No);

    inserirInicio(&No, 67);

    // Buscando um valor
    struct Node* novoNo;
    int alvo = 67;
    novoNo = buscar(No, alvo);
    printf("O valor buscado -> %d,\nValor encontrado -> %d", alvo, novoNo->dado);

    return 0;
}