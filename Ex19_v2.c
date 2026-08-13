#include <stdio.h>

int verificarPar(int numero) {
    if(numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    
    printf("Digite um número\n");
    scanf("%d", &n);

    if(verificarPar(n)) {
        printf("O número %d é par\n", n);
    } else {
        printf("O número %d é ímpar\n", n);
    }
    return 0;
}
    