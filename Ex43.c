#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros;

    numeros = malloc(5 * sizeof(int));
    for(int i = 0; i < 5; i++) {
        numeros[i] = i + 1;
        printf("%d ", numeros[i]);
    }
    
    printf("\n");
    
    numeros = realloc(numeros, 10 * sizeof(int));

    //alocar os espaços restantes
    for(int j = 5; j < 10; j++) {
        numeros[j] = j + 1;
    }

    //mostrar todos os espaços já preenchidos
    for(int k = 0; k < 10; k++) {
        printf("%d ", numeros[k]);
    }

    free(numeros);
    
    return 0;
}