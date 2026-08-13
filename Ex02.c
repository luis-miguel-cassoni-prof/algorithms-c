#include <stdio.h>

int main() {
    int idade, mesesDeIdade;

    printf("Digite quantos anos você tem\n");
    scanf("%d", &idade);

    mesesDeIdade = idade * 12;

    printf("Você está vivo há pelo menos %d meses", mesesDeIdade);

    return 0;
}