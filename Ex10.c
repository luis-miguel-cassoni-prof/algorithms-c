#include <stdio.h>

int main() {
    int n1, n2, n3, maior;
    printf("Digite três números distintos\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    maior = n1;

    if(n2 > maior) {
        maior = n2;
    } 
    if(n3 > maior) {
        maior = n3;
    }

    printf("Maior é %d", maior);
    return 0;
}