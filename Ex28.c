#include <stdio.h>


int main() {
    int matriz[3][3];
    int linha, coluna;

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            printf("Digite o valor da posição [%d][%d] da matriz:\n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            if(linha == coluna) {
                printf("%d\n", matriz[linha][coluna]);
            }
        }
    }

    return 0;
}