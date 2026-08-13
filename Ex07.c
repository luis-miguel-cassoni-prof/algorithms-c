#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade\n");
    scanf("%d", &idade);

    if(idade >= 18) {
        printf("Maior de Idade\n");
    } else {
        printf("Menor de Idade\n");
    }

    return 0;
}