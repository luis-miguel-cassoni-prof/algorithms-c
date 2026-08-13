#include <stdio.h>

void dobrar(int *numero) {
    *numero *= 2;
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    
    dobrar(&n);

    printf("Número Dobrado: %d\n", n);
    return 0;
}