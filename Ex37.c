#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[100];
    float preco;
};

int main() {
    struct Produto produto1;
    
    printf("Digite o nome do produto:\n");
    scanf("%s", produto1.nome);

    printf("Digite o preço do produto:\n");
    scanf("%f", &produto1.preco);

    printf("Nome do Produto: %s\n", produto1.nome);
    printf("Preço R$%.2f\n", produto1.preco);
    return 0;
}