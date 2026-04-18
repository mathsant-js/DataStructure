#include <stdio.h>

// Funções
// -- Antigamente precisava colocar o void no parâmetro da função
// -- quando a função não possuía parâmetros

void menu()
{
    printf("\n====Menu====\n");
    printf("1 - Calculadora de media\n");
    printf("2 - Verificador de presenca\n");
    printf("3 - Aprovacao\n");
    printf("4 - Encerrar Programa\n");
}

float mediaAritmetica(float nota1, float nota2)
{
    return (nota1 + nota2) / 2;
}

void verificadorPresenca(int presenca)
{
    if (presenca > 74 && presenca < 101)
    {
        printf("SITUACAO: Aluno esta com a presenca em dia\n");
    }
    else if (presenca >= 0 && presenca < 75)
    {
        printf("SITUACAO: Aluno esta com presenca pendente\n");
    }
    else
    {
        printf("SITUACAO: Presenca nao pode ser maior que 100 ou negativo\n");
    }
}

void aprovacao(float media)
{
    printf("\n---- VERIFICACAO DE APROVACAO ----\n");

    if (media >= 6)
    {
        printf("SITUACAO: Aprovado\n");
    }
    else if (media >= 4)
    {
        printf("SITUACAO: Recuperacao\n");
    }
    else
    {
        printf("SITUACAO: Reprovado\n");
    }
}

void opcoesAluno(int opcao, int presenca, int podeCalcularMedia, float nota1, float nota2, float media)
{
    switch (opcao)
    {
    case 1:
        printf("\n--- CALCULADORA MEDIA ---\n");

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = mediaAritmetica(nota1, nota2);

        printf("Media: %.2f\n", media);

        podeCalcularMedia = 1;

        menu();
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);
        opcoesAluno(opcao, presenca, podeCalcularMedia, nota1, nota2, media);

        break;
    case 2:
        printf("\n--- VERIFICADOR DE PRESENCA ---\n");

        printf("Digite a presenca do aluno (0-100): ");
        scanf("%d", &presenca);

        verificadorPresenca(presenca);

        menu();
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);
        opcoesAluno(opcao, presenca, podeCalcularMedia, nota1, nota2, media);

        break;
    case 3:
        if (podeCalcularMedia == 1) {
            aprovacao(media);
        } else {
            printf("Calcule a media antes\n\n");
        }

        menu();
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);
        opcoesAluno(opcao, presenca, podeCalcularMedia, nota1, nota2, media);

        break;
    case 4:
        printf("\n---- Programa encerrado ----\n");
        break;
    default:
        printf("\n[ERRO]: Opcao invalida\n");

        menu();
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);
        opcoesAluno(opcao, presenca, podeCalcularMedia, nota1, nota2, media);

        break;
    }
}

int main()
{
    int opcao, presenca;
    int podeCalcularMedia;
    float nota1, nota2, media;

    menu();

    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);

    opcoesAluno(opcao, presenca, podeCalcularMedia, nota1, nota2, media);

    return 0;
}