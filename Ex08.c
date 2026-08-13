#include <stdio.h>

int main() {
    float n1, n2, mediaFinal;
    printf("Digite a primeira nota de um aluno\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota de um aluno\n");
    scanf("%f", &n2);

    mediaFinal = (n1 + n2) / 2;

    //Considerarei média de aprovação 6, 4 tem recuperação

    if(mediaFinal >= 6) {
        printf("Aprovado\n");
    } else if(mediaFinal < 6 && mediaFinal >= 4) {
        printf("Recuperação\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}