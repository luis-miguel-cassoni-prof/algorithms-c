#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite um número\n");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("A soma de todos os números deste vetor é %d\n", soma);

    return 0;
}