#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite dois números inteiros!\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    int soma = n1 + n2;
    int sub = n1 - n2;
    int mult = n1 * n2;
    float div = (float)n1 / n2;

    printf("Soma de n1 e n2: %d\n", soma);
    printf("Subtração de n1 e n2: %d\n", sub);
    printf("Multiplicação de n1 e n2: %d\n", mult);
    printf("Divisão de n1 e n2: %.2f\n", div);
    return 0;
}