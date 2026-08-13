#include <stdio.h>

int main() {
    int pares = 0;
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            pares++;
        }
    }

    printf("O número de pares entre 1 e 100 é: %d\n", pares);

    return 0;
}