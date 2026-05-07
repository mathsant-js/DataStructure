#include <stdio.h>
#include <string.h>

int main() {
    // C não trabalha com Strings, usamos vetores de char como substituto
    // O \0 é encerra o vetor não adicionando nenhum caractere a mais
    // O espaço trabalha como o \0
    char nome[20]; // = {'M', 'A', 'T', 'H', 'E', 'U', 'S', '\0'};

    printf("Digite o seu nome completo: ");
    // scanf("%s", nome);

    // Consegue capturar o nome digitado
    // (variavel, tamanho, teclado)
    // stdin ele diz que o valor será digitado pelo teclado
    fgets(nome, sizeof(nome), stdin);
    int tamanho_antes = strlen(nome);

    // Capturo o espaço para e coloco ele para encerrar o vetor, assim, no final ele não pula linha
    // Quando retiro o \n o tamanho do vetor diminui em 1
    nome[strcspn(nome, " \n")] = '\0';

    int tamanho_depois = strlen(nome); // tamanho final após strcsnp da string

    printf("Oi, %s", nome);
    printf("\nTamanho Antes: %d", tamanho_antes);
    printf("\nTamanho Depois: %d", tamanho_depois);

    char nome_2[7];
    strcpy(nome_2, nome);
    
    printf("\nComo posso te ajudar, %s", nome_2);

    printf("\n");

    // Adição de Mensagem

    char msg[20] = "Como posso ajudar?";
    //printf("%s. %s\n", nome_2, msg);
    puts(nome_2);
    puts(msg);

    int comp;

    // A função strcmp compara duas strings e retorna os seguintes valores:
    //   valor == 0 -> Strings iguais
    //   valor > 0  -> a primeira string é maior
    //   valor < 0  -> a segunda string é menor
    comp = strcmp(nome_2, msg);
    int teste = strcmp(nome_2, nome_2);

    printf("Teste: %d", teste);
    printf("A comparacao e: %d", comp);

    return 0;
}