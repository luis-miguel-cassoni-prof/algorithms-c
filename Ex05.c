#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite uma temperatura em Graus Celsius\n");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("A temperatura em farenheit é %.2f°F\n", fahrenheit);
    return 0;
}