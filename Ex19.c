#include <stdio.h>

void verificarPar(int numero) {
    if(numero % 2 == 0) {
        printf("O número %d é par\n", numero);
    } else {
        printf("O número %d é ímpar\n", numero);
    }
}

int main() {
    int n;
    
    printf("Digite um número\n");
    scanf("%d", &n);

    verificarPar(n);
    return 0;
}
    