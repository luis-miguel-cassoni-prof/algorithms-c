#include <stdio.h>

int main() {
    float area, raio;
    float pi = 3.14;

    printf("Digite o raio de um círculo\n");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("A área de seu círculo é de %.2f centímetros quadrados\n", area);
    return 0;
}