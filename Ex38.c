#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[30];
    int idade;
};

int main() {
    struct Pessoa pessoa[3];

    for(int i = 0; i < 3; i++) {
    printf("Digite o nome de uma pessoa:\n");
    scanf("%s", pessoa[i].nome);

    printf("Digite a idade de uma pessoa:\n");
    scanf("%d", &pessoa[i].idade);
    }

    for(int j = 0; j < 3; j++) {
    printf("Nome: %s\n", pessoa[j].nome);
    printf("Idade: %d\n", pessoa[j].idade);
    }
    return 0;
}