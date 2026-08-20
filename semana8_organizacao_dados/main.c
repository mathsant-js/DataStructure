#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Criando tipos
typedef unsigned int uint;
typedef unsigned long ulong;

typedef struct
{
    char rua[50];
    uint numero;
    char bairro[50];
    char cidade[50];
} Endereco;

// Criando uma struct
typedef struct
{
    int rm;
    char nome[50];
    float nota[3];
    bool aprovacao;
    Endereco endereco;
} Aluno;

float calcular_media(Aluno *aluno, int posicao, int tamanho)
{
    float soma_nota = 0.0;

    for (int i = 0; i < tamanho; i++)
    {
        soma_nota += aluno[posicao].nota[i];
    }

    return soma_nota / tamanho;
}

bool calcular_aprovacao(float media)
{
    if (media >= 6)
    {
        return true;
    }

    return false;
}

void exibir_situacao_aluno(bool aprovacao, float media)
{
    if (aprovacao)
    {
        printf("Aprovado!");
    }
    else
    {
        if (media < 6 && media >= 4)
        {
            printf("Exame!");
        }
        else
        {
            printf("Reprovado!");
        }
    }
}

int main()
{
    // Atribuindo uma struct
    Aluno aluno[40];

    // Atribuindo valores aos membros da struct
    aluno[0].rm = 13456;
    aluno[0].nota[0] = 9.5;

    strcpy(aluno[0].nome, "Matheus Santana");

    strcpy(aluno[0].endereco.rua, "Rua Inexistente");
    aluno[0].endereco.numero = 20;
    strcpy(aluno[0].endereco.bairro, "Bairro comum");
    strcpy(aluno[0].endereco.cidade, "Sao Paulo");

    printf("==== INFO ALUNO ====\n");
    printf("RM: %d\n", aluno[0].rm);
    printf("Nome: %s\n", aluno[0].nome);
    printf("Nota Original: %.1f", aluno[0].nota[0]);

    printf("\n\n");

    printf("ENDERECO\n");
    printf("--------------------------\n");
    printf("Rua: %s\n", aluno[0].endereco.rua);
    printf("Numero: %d\n", aluno[0].endereco.numero);
    printf("Bairro: %s\n", aluno[0].endereco.bairro);
    printf("Cidade: %s\n", aluno[0].endereco.cidade);

    float notas[3] = {10.0, 9.0, 8.0};

    int tamanho = sizeof(aluno[0].nota) / sizeof(aluno[0].nota[0]);

    for (int i = 0; i < tamanho; i++)
    {
        aluno[0].nota[i] = notas[i];
    }

    float media = calcular_media(aluno, 0, tamanho);
    bool aprovacao = calcular_aprovacao(media);

    printf("--------------------------\n");

    printf("\n==== Situacao do Aluno ====\n");
    printf("Media: %.1f\n", media);
    exibir_situacao_aluno(aprovacao, media);

    /*
    printf("\n\n");

    aluno[1].rm = 789455;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno[1].nome);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno[1].nota[0]);

    printf("\n\n");

    printf("==== INFO ALUNO ====\n");
    printf("RM: %d\n", aluno[1].rm);
    printf("Nome: %s\n", aluno[1].nome);
    printf("Nota: %f", aluno[1].nota[0]);
    */

    return 0;
}