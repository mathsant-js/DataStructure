#include <stdio.h>
#include <stdlib.h>

// Criando um tipo que usa a estrutura do Node
typedef struct Node Node;

struct Node
{
    int valor;      // -> Valor da posição
    Node *proximo;  // -> Ponteiro que aponta para o próximo usando a estrutura do Node
};

// Função para inserir valor no final
Node *inserirFim(Node *inicio, int valor) {
    Node *novo = malloc(sizeof(Node));

    if (novo == NULL) {
        return inicio;
    }

    novo->valor = valor;
    novo->proximo = NULL;

    if (inicio == NULL) {
        return novo;
    }

    Node *atual = inicio;

    while (atual->proximo != NULL)
    {
        atual = atual->proximo;
    }

    atual->proximo = novo;
    return inicio;
}

int main() {
    Node *inicio = NULL;
    return 0;
}

// ERROS COMUNS
// Memory Leak
// -> Não Libera a memória
// Dangling Pointer
// -> Aponta para a memória que não tem nada
// Use-after-free
// -> Usar a variável após o free()
// Double free
// -> Usar o free() duas vezes
// NULL não verificado
// Não verificar se o valor é NULL