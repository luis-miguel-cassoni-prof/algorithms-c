#include <stdio.h>

int maior(int a, int b) {
    if(a > b) {
        return a;
    } else if(b > a) {
        return b;
    } else if(a == b) {
        return a;
    }
}

int main() {
    int n1, n2, oMaior;
    printf("Digite dois valores\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    oMaior = maior(n1, n2);

    printf("O maior número entre %d e %d é %d", n1, n2, oMaior);
    return 0;
}