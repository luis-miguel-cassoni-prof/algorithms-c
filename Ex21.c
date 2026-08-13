#include <stdio.h>

int main() {
    int numeros[5];

    for(int i = 0; i < 5; i++) {
        printf("Digite um número\n");
        scanf("%d", &numeros[i]);
    }
    
   for(int j = 0; j < 5; j++) {
        printf("%d ", numeros[j]);
    }

    return 0;
}