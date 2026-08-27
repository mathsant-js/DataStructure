#include <stdio.h>

typedef struct
{
    int rm;
    char nome[50];
    float nota;
} Aluno;

int main() {
    Aluno a1 = {123, "teste", 5};

    // Armazenando o valor em memória
    Aluno* ptr = &a1;

    // Forma 1: Desreferência + Ponto
    (*ptr).nota = 10.0;

    // Forma 2: Operador Seta (Recomendado)
    ptr->nota = 10.0;

    // Exibindo dados
    printf("Nome: %s", ptr->nome);
}