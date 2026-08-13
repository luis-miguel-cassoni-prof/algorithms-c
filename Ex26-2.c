#include <stdio.h>

int main() {
    int matriz[3][3];
    int linha, coluna;

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            printf("Digite a posição [%d][%d] da matriz:\n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            if(matriz[linha][coluna] % 2 == 0) {
                printf("%d\n", matriz[linha][coluna]);   
            }
        }
    }
    
    return 0;
}