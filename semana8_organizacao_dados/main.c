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
    struct Aluno aluno;

    // Atribuindo valores aos membros da struct
    aluno.rm = 13456;
    aluno.nota = 9.5;

    strcpy(aluno.nome, "Matheus Santana");

    printf("==== INFO ALUNO ====\n");
    printf("RM: %d\n", aluno.rm);
    printf("Nome: %s\n", aluno.nome);
    printf("Nota: %f", aluno.nota);

    return 0;
}