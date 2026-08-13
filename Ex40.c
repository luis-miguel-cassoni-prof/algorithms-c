#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[40];
    float nota1;
    float nota2;
    float media;
};

float calcularMedia(float n1, float n2) {
    return (n1 + n2) / 2;
}

int main() {
    struct Aluno a1;
    printf("Digite o nome do Aluno:\n");
    scanf("%s", a1.nome);

    printf("Digite a primeira nota do Aluno:\n");
    scanf("%f", &a1.nota1);

    printf("Digite a segunda nota do Aluno:\n");
    scanf("%f", &a1.nota2);

    a1.media = calcularMedia(a1.nota1, a1.nota2);

    printf("Nome: %s\n", a1.nome);
    printf("Média: %.2f\n", a1.media);
    return 0;
}