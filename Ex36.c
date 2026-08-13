#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[30];
    int idade;
};

int main() {
    struct Pessoa pessoa1;

    printf("Digite o nome de uma pessoa:\n");
    scanf("%s", pessoa1.nome);

    printf("Digite a idade de uma pessoa:\n");
    scanf("%d", &pessoa1.idade);

    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    return 0;
}