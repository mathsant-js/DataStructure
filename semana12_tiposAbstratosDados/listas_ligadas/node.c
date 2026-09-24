#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int dado;
    struct Node *proximo; // ponteiro -> O link
};

int main() {
    struct Node* No;

    No = (struct Node*) malloc(sizeof(struct Node));

    // Antes de atribuir valor
    printf("%d\n", No->dado);

    No->dado = 10;
    No->proximo = NULL;

    // Depois de atribuir valor
    printf("%d\n", No->dado);

    return 0;
}