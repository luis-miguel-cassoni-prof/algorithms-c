#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int tamanho;

    printf("Digite uma palavra aleatória\n");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    printf("A palavra %s possui %d caracteres", palavra, tamanho);

    return 0;
}