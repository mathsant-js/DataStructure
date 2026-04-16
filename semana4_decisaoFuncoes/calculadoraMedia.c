#include <stdio.h>

// Funções
// -- Antigamente precisava colocar o void no parâmetro da função
// -- quando a função não possuía parâmetros

void menu()
{
    printf("====Menu====\n");
    printf("1 - Calculadora de media\n");
    printf("2 - Verificador de presenca\n");
}

float mediaAritmetica(float nota1, float nota2)
{
    return (nota1 + nota2) / 2;
}

void verificadorPresenca(int presenca)
{
    if (presenca > 74 && presenca < 101)
    {
        printf("\nAluno esta com a presenca em dia");
    }
    else if (presenca >= 0 && presenca < 75)
    {
        printf("\nAluno esta com presenca pendente");
    }
    else
    {
        printf("\nPresenca nao pode ser maior que 100 ou negativo");
    }
}

int main()
{
    int opcao;

    menu();

    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\n--- CALCULADORA MEDIA ---\n");
        float media, nota1, nota2;

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Media: %.2f", mediaAritmetica(nota1, nota2));

        break;
    case 2:
        printf("\n--- VERIFICADOR DE PRESENCA ---\n");

        int presenca;

        printf("Digite a presenca do aluno (0-100): ");
        scanf("%d", &presenca);

        verificadorPresenca(presenca);

        break;
    default:
        printf("Opcao invalida");
        break;
    }
    return 0;
}