#include <stdio.h>

int main() {
    //para eu relembrar [linha][coluna]
    int matriz[3][3];
    int linha, coluna;

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            printf("Digite o valor da linha posição e coluna posição [%d][%d]\n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            printf("%d ", matriz[linha][coluna]);   
        }
        printf("\n");
    }
    
    return 0;
}