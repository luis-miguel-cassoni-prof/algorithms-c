#include <stdio.h>

int main() {
    int matriz[3][3];
    int linha, coluna, soma = 0;

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            printf("Digite a posição [%d][%d] da matriz:\n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
            soma += matriz[linha][coluna];
        }
    }

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("A soma total dos elementos da matriz mostrada acima é: %d\n", soma);
    return 0;
}