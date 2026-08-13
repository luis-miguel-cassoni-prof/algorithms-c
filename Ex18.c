#include <stdio.h>

int quadrado(int numero) {
    return numero * numero;
}

int main() {
    int n;
    printf("Digite um número\n");
    scanf("%d", &n);

    int nQuadrado = quadrado(n);

    printf("O quadrado de %d é: %d\n", n, nQuadrado);
    return 0;
}