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

    // Casting de variáveis
    int numero1 = 10;
    int numero2 = 5;

    printf("%f\n", (float) numero1 + numero2);

    // Operadores Relacionais

    int x = 10;
    int y = 5;

    printf("%d\n", x > y);  // -> Verdadeiro (1)
    printf("%d\n", x == y); // -> Falso (0)

    int resultado = (x + y) > 10;
    printf("%d\n", resultado); // A linguagem C não tem o tipo booleano

    return 0;
}