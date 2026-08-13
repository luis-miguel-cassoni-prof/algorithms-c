#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Valor a: %d\n", *a);
    printf("Valor b: %d\n", *b);
}

int main() {
    int a, b;
    printf("Digite um valor para a: ");
    scanf("%d", &a);
    printf("Digite um valor para b: ");
    scanf("%d", &b);

    trocar(&a, &b);
    return 0;
}