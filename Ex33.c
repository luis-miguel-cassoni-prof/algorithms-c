#include <stdio.h>

int main() {
    int valor;
    int *p;

    printf("Digite um valor para uma variável: \n");
    scanf("%d", &valor);
    
    p = &valor;

    printf("Valor sem alterar a referência pelo ponteiro %d\n", valor);

    *p = 33;

    printf("Valor após alterar o ponteiro: %d\n", valor);
    return 0;
}