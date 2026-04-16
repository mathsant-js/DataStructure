#include <stdio.h>

int main() {

    int opcao;

    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Selecionado opcao 1");
        break;
    case 2:
        printf("Selecionado opcao 2");
        break;
    default:
        printf("Opcao invalida");
    }

    return 0;
}