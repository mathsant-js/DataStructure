#include <stdio.h>

int main() {
    int dia;

    printf("Digite um dia...\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("1 - Domingo");
        break;
    case 2:
        printf("2 - Segunda");
        break;
    case 3:
        printf("3 - Terça");
        break;
    case 4:
        printf("4 - Quarta");
        break;
    case 5:
        printf("5 - Quinta");
        break;
    case 6:
        printf("6 - Sexta");
        break;
    case 7:
        printf("7 - Sábado");
        break;
    default:
        printf("Dia Invalido!");
        break;
    }

    return 0;
}