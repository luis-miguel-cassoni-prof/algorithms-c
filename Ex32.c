#include <stdio.h>

int main() {
    int valor;
    int *p;

    printf("Digite um valor inteiro qualquer:\n");
    scanf("%d", &valor);

    p = &valor;

    printf("Valor da variável: %d\nPosição do valor na memória: %p\nPosição referenciando ponteiro: %p\nValor Referenciando o Ponteiro: %d", valor, (void*)&valor, (void*)p, *p);

    return 0;
}