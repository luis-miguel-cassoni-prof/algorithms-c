#include <stdio.h>

int main() {
    int numeros[10];
    
    printf("Digite um número\n");
    scanf("%d", &numeros[0]);
    int menor = numeros[0];

    for(int i = 1; i < 10; i++) {
        printf("Digite um número\n");
        scanf("%d", &numeros[i]);

        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("O menor número deste vetor é %d\n", menor);

    return 0;
}