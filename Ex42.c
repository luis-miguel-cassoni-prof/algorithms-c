#include <stdio.h>
#include <stdlib.h>

int main() {
    int *n, quantidade;

    printf("Digite uma quantidade: \n");
    scanf("%d", &quantidade);

    n = calloc(quantidade, sizeof(int));

    printf("Vetor antes do calloc:\n");
    for(int k = 0; k < quantidade; k++) {
        printf("Valor da posição %d: %d\n", k, n[k]);
    }

    for(int i = 0; i < quantidade; i++) {
        printf("Digite um valor\n");
        scanf("%d", &n[i]);
    }

    printf("Vetor após o calloc:\n");
    for(int j = 0; j < quantidade; j++) {
        printf("Valor da posição %d: %d\n", j, n[j]);
    }

    free(n);

    return 0;
}