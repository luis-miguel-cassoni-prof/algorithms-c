#include <stdio.h>


int main() {
    int matriz[2][2];
    int linha, coluna, soma = 0;

    for(linha = 0; linha < 2; linha++) {
        for(coluna = 0; coluna < 2; coluna++) {
            printf("Digite o valor da posição [%d][%d] da matriz:\n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
            soma += matriz[linha][coluna];
        }
    }

    for(linha = 0; linha < 2; linha++) {
        for(coluna = 0; coluna < 2; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("A soma dos elementos da matriz demonstrada é: %d", soma);

    return 0;
}