#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros, quantidade, soma = 0, maior, menor;
    
    printf("Digite a quantia de índices do vetor:\n");
    scanf("%d", &quantidade);

    numeros = malloc(quantidade * sizeof(int));

    printf("Digite um valor para a posição 0\n");
    scanf("%d", &numeros[0]);
    maior = numeros[0];
    menor = numeros[0];
    soma += numeros[0];

    for(int i = 1; i < quantidade; i++) {
        printf("Digite um valor para a posição %d\n", i);
        scanf("%d", &numeros[i]);
        soma += numeros[i];

        if(numeros[i] > maior) {
            maior = numeros[i];
        }

        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Soma de todos os elementos: %d\n", soma);

    free(numeros);
    return 0;
}