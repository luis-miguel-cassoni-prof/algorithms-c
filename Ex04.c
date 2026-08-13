#include <stdio.h>

int main() {
    float largura, altura, area;

    printf("Digite a largura e altura de um terreno em metros quadrados: \n");
    scanf("%f", &largura);
    scanf("%f", &altura);

    area = largura * altura;

    printf("A área do terreno possui %.2fm²\n", area);
    return 0;
}