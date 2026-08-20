#include <stdio.h>

typedef struct
{
    int id;
    char nome[50];
    float preco;
} Produto;

int main()
{
    Produto produtos[4];

    int tamanho = sizeof(produtos) / sizeof(produtos[0]);

    for (int i = 0; i < tamanho; i++)
    {
        produtos[i].id = i;

        printf("\n==== ADICIONANDO PRODUTOS ==== \n");

        printf("Digite o nome do %d produto: ", i + 1);
        scanf("%s", produtos[i].nome);

        printf("Digite o preco do %d produto: ", i + 1);
        scanf("%f", &produtos[i].preco);
    }

    printf("\n==== INFO DO PRODUTO ====\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("ID: %d\n", produtos[i].id);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Preco: R$%.2f\n", produtos[i].preco);

        printf("\n");
        printf("---------------------");
        printf("\n");
    }

    return 0;
}