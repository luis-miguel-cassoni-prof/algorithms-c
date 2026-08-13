#include <stdio.h>

int main() {
    int numeros[10];
    
    printf("Digite um número\n");
    scanf("%d", &numeros[0]);
    int maior = numeros[0];

    for(int i = 1; i < 10; i++) {
        printf("Digite um número\n");
        scanf("%d", &numeros[i]);

        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior número deste vetor é %d\n", maior);

    return 0;
}