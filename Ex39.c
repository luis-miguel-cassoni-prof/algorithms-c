#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[100];
    float preco;
};

int main() {
    struct Produto produto[5];

    printf("Digite o nome do produto:\n");
    scanf("%s", produto[0].nome);

    printf("Digite o preço do produto:\n");
    scanf("%f", &produto[0].preco);

    int indiceMaisCaro = 0;

    for(int i = 1; i < 5; i++) {
        printf("Digite o nome do produto:\n");
        scanf("%s", produto[i].nome);

        printf("Digite o preço do produto:\n");
        scanf("%f", &produto[i].preco);

        if(produto[i].preco > produto[indiceMaisCaro].preco) {
            indiceMaisCaro = i;
        }
    }

    printf("Produto Mais Caro\n");
    printf("Nome do Produto: %s\n", produto[indiceMaisCaro].nome);
    printf("Preço do Mais Caro: %.2f\n", produto[indiceMaisCaro].preco);

    return 0;
}