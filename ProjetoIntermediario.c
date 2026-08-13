#include <stdio.h>
#include <string.h>

float calcularMedia(float n1, float n2) {
    return (n1 + n2) / 2;
}

int main() {
    int numeroDeAlunos, aprovados = 0, reprovados = 0;

    printf("Quantos alunos a sala vai possuir?\n");
    scanf("%d", &numeroDeAlunos);

    char nomes[numeroDeAlunos][50];
    float nota1[numeroDeAlunos], nota2[numeroDeAlunos], media[numeroDeAlunos], mediaGeral = 0, maiorMedia = 0, menorMedia = 10;
    //aqui considero que a maior nota da instituição de ensino é 10 mesmo, então sempre qualquer nota abaixo disso é menor

    for(int i = 0; i < numeroDeAlunos; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%s", nomes[i]);

        printf("Digite a nota 1 do aluno: ");
        scanf("%f", &nota1[i]);

        printf("Digite a nota 2 do aluno: ");
        scanf("%f", &nota2[i]);

        media[i] = calcularMedia(nota1[i], nota2[i]);
        mediaGeral += media[i];

        printf("Aluno: %s\n", nomes[i]);
        printf("Nota 1: %.2f\n", nota1[i]);
        printf("Nota 2: %.2f\n", nota2[i]);
        printf("Média: %.2f\n", media[i]);
        if(media[i] >= 6) {
            printf("Situação: Aprovado\n");
            aprovados++;
        } else {
            printf("Situação: Reprovado\n");
            reprovados++;
        }

        if(media[i] > maiorMedia) {
            maiorMedia = media[i];
        }

        if(media[i] < menorMedia) {
            menorMedia = media[i];
        }
    }
    
    mediaGeral = mediaGeral / numeroDeAlunos;

    printf("Maior média: %.2f\n", maiorMedia);
    printf("Menor Média: %.2f\n", menorMedia);
    printf("Alunos Aprovados: %d\n", aprovados);
    printf("Alunos Reprovados: %d\n", reprovados);
    printf("Média Geral da Turma: %.2f\n", mediaGeral);

    return 0;
}