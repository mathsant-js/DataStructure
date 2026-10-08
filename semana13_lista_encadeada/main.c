#include <stdio.h>
#include <stdlib.h>

// Criando um tipo que usa a estrutura do Node
typedef struct Node Node;

struct Node
{
    int valor;      // -> Valor da posição
    Node *proximo;  // -> Ponteiro que aponta para o próximo usando a estrutura do Node
};

int main() {
    
    return 0;
}