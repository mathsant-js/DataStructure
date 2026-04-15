#include <stdio.h>

int main()
{
    int idade = 18;

    if (idade >= 18)
    {
        printf("Maior de idade!\n");
    }
    else
    {
        printf("Menor de idade!\n");
    }

    // Mostrando Média e Ausência
    int media;
    int presenca;

    printf("Média: %d | Presença: %d\n", media, presenca);

    if (media >= 9 && presenca >= 75)
    {
        printf("Excelente aprovado!\n");
    }
    else if (media >= 6 && presenca >= 75)
    {
        printf("Aprovado!\n");
    }
    else if (media < 6 && presenca >= 75)
    {
        printf("Reprovado, média insuficiente!");
    }
    else {
        printf("Reprovado, excesso de faltas!");
    }
    

    return 0;
}