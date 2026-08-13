#include <stdio.h>

int main() {
    int numero, multiplicacao;

    printf("Digite um número\n");
    scanf("%d", &numero);

    for(int i = 1; i <= 10; i++) {
        multiplicacao = numero * i;
        printf("%d x %d = %d\n", numero, i, multiplicacao);
    }
    return 0;
}