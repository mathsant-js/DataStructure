#include <stdio.h>

typedef struct
{
    int id;
    char nome[50];
    float preco;
} Produto;

void aplicarDesconto(Produto *p, float desc);

int main()
{
    Produto produto = {0, "Manteiga", 20.00};

    Produto *ptr = &produto;

    float porcentagem_desconto = 1000;

    printf("\n==== INFO PRODUTO ====\n");
    printf("Nome: %s", ptr->nome);
    printf("\nPreco Original: R$%.2f", ptr->preco);
    printf("\nPorcentagem de desconto: %.2f%%\n", porcentagem_desconto);

    aplicarDesconto(ptr, porcentagem_desconto);

    printf("\nPreco com Desconto: R$%.2f", ptr->preco);
}

void aplicarDesconto(Produto *p, float desc)
{
    if (desc > 100 || desc < 0) {
        
        printf("[ERRO] O desconto não pode ser mais do 100%% ou menos que 0%%");
    }
    else {
        desc /= 100 * p->preco;

        p->preco = p->preco - desc;
    }
}