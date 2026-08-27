#include <stdio.h>

typedef struct
{
    int rm;
    char nome[50];
    float nota;
} Aluno;

void atualizar_nota(Aluno* aluno);

int main() {
    // Testando com um aluno
    Aluno a1 = {123, "Matheus", 5};

    // Testando com dois alunos
    Aluno alunos[2] = {{154, "Marcos", 8}, {789, "Ana", 6}};
    Aluno* ponteiro = alunos;

    // Armazenando o valor em memória
    Aluno* ptr = &a1;

    // Forma 1: Desreferência + Ponto
    (*ptr).nota = 10.0;

    // Forma 2: Operador Seta (Recomendado)
    ptr->nota = 10.0;

    // Exibindo dados
    printf("Nome: %s\n\n", ptr->nome);

    // Aumentando o valor do ponteiro para acessar o segundo aluno
    ponteiro++;

    // Exibe o segundo aluno da matriz alunos
    printf("RM: %d\n", ponteiro->rm);
    printf("Nome: %s\n", ponteiro->nome);
    printf("Nota: %.2f\n", ponteiro->nota);

    // Atualizando nota do aluno
    atualizar_nota(ptr);

    printf("\nNome: %s\n", ptr->nome);
    printf("Nota: %f", ptr->nota);
}

// Criando função que altera valor em memória do argumento
void atualizar_nota(Aluno* aluno) {
    aluno->nota = 10;
}