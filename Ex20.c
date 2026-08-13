#include <stdio.h>

float verificarAprovacao(float nota) {
    if(nota >= 6) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    float n;
    
    printf("Digite a nota de um determinado aluno\n");
    scanf("%f", &n);

    if(verificarAprovacao(n)) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}