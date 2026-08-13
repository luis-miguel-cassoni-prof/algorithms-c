#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número\n");
    scanf("%d", &numero);

    if(numero > 0) {
        printf("Positivo\n");
    } else if(numero < 0) {
        printf("Negativo\n");
    } else {
        printf("é Zero\n");
    }
    return 0;
}