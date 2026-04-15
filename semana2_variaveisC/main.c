#include <stdio.h>

int main() {
    // Entrando com valor na variável a partir de dados inseridos via terminal
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("A sua idade é: %d\n", idade);

    // Operações Matemáticas
    int a = 10;
    int b = 3;

    printf("Soma: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    printf("Divisão inteira: %d\n", a / b);
    printf("Resto: %d\n", a % b);

    return 0;
}