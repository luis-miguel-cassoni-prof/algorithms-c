#include <stdio.h>

int somar(int a, int b) {
    return a + b;
}

int main() {
    int n1, n2, total;
    printf("Digite dois valores\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    total = somar(n1, n2);

    printf("O valor total é %d\n", total);
    return 0;
}