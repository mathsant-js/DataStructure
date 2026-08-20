#include <stdio.h>
#include <string.h>

// Criando uma struct
struct Aluno
{
    int rm;
    char nome[50];
    float nota;
};

int main()
{
    // Atribuindo uma struct
    struct Aluno aluno[40];

    // Atribuindo valores aos membros da struct
    aluno[0].rm = 13456;
    aluno[0].nota = 9.5;

    strcpy(aluno[0].nome, "Matheus Santana");

    printf("==== INFO ALUNO ====\n");
    printf("RM: %d\n", aluno[0].rm);
    printf("Nome: %s\n", aluno[0].nome);
    printf("Nota: %f", aluno[0].nota);

    printf("\n\n");

    aluno[1].rm = 789455;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno[1].nome);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno[1].nota);

    printf("\n\n");

    printf("==== INFO ALUNO ====\n");
    printf("RM: %d\n", aluno[1].rm);
    printf("Nome: %s\n", aluno[1].nome);
    printf("Nota: %f", aluno[1].nota);

    return 0;
}