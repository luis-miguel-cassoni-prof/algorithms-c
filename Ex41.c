#include <stdio.h>
#include <stdlib.h>

int main() {
    int *n, quantidade;

    printf("Digite uma quantidade: \n");
    scanf("%d", &quantidade);

    n = malloc(quantidade * sizeof(int));

    for(int i = 0; i < quantidade; i++) {
        printf("Digite um valor\n");
        scanf("%d", &n[i]);
    }

    for(int j = 0; j < quantidade; j++) {
        printf("Valor da posição %d: %d\n", j, n[j]);
    }

    free(n);

    return 0;
}