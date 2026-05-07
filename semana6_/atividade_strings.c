#include <stdio.h>
#include <string.h>

int main() {
    char user_name[50];

    printf("==== LOGIN ====\n");

    printf("USER NAME: ");
    fgets(user_name, sizeof(user_name), stdin);

    user_name[strcspn(user_name, "\n")] = 0;

    printf("Nome: %s\n", user_name);
    printf("Tamanho: %d\n", strlen(user_name));

    if (strcmp(user_name, "User") == 0) {
        printf("Ok, Acesso Liberado!");
    } else {
        printf("Acesso Negado!");
    }
    return 0;
}