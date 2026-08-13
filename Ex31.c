#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor inteiro qualquer:\n");
    scanf("%d", &valor);

    printf("Valor da variável: %d\nPosição do valor na memória: %p", valor, (void*)&valor);

    return 0;
}