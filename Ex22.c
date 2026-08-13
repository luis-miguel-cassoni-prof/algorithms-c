#include <stdio.h>

int main() {
    int numeros[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite um número\n");
        scanf("%d", &numeros[i]);
    }

    for(int j = 0; j < 10; j++) {
        if(numeros[j] % 2 == 0) {
            printf("%d ", numeros[j]);
        }
    }

    return 0;
}