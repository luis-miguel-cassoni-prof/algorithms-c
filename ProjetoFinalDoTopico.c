#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct Aluno {
    char nome[50];
    float n1;
    float n2;
    float media;
    bool status;
};

struct Aprovacoes {
    int aprovados;
    int reprovados;
};

float calcularMedia(float n1, float n2) {
    return (n1 + n2) / 2;
}

int main() {
    struct Aluno *alunos;
    struct Aprovacoes aprovacao;
    int qtdAlunos;
    float maiorMedia, menorMedia, mediaGeral = 0;

    aprovacao.aprovados = 0;
    aprovacao.reprovados = 0;

    printf("Quantos alunos a turma tem?\n");
    scanf("%d", &qtdAlunos);

    if(qtdAlunos <= 0) {
        printf("Quantidade inválida\n");
        return 1;
    }

    alunos = malloc(qtdAlunos * sizeof(struct Aluno));

    if(alunos == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Digite o Nome do Aluno %d\n", 1);
    scanf("%s", alunos[0].nome);

    printf("Digite a Primeira Nota do Aluno %d\n", 1);
    scanf("%f", &alunos[0].n1);

    printf("Digite a Segunda Nota do Aluno %d\n", 1);
    scanf("%f", &alunos[0].n2);
    
    alunos[0].media = calcularMedia(alunos[0].n1, alunos[0].n2);
    
    maiorMedia = alunos[0].media;
    menorMedia = alunos[0].media;
    mediaGeral += alunos[0].media;

        if(alunos[0].media >= 7) { //Média de aprovação subiu, escola rigída hehe :D
            aprovacao.aprovados++;
            alunos[0].status = true;
        } else {
            aprovacao.reprovados++;
            alunos[0].status = false;
        }

    for(int i = 1; i < qtdAlunos; i++) {
        printf("Digite o Nome do Aluno %d\n", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite a Primeira Nota do Aluno %d\n", i + 1);
        scanf("%f", &alunos[i].n1);

        printf("Digite a Segunda Nota do Aluno %d\n", i + 1);
        scanf("%f", &alunos[i].n2);
    
        alunos[i].media = calcularMedia(alunos[i].n1, alunos[i].n2);
        mediaGeral += alunos[i].media;

        if(alunos[i].media > maiorMedia) {
            maiorMedia = alunos[i].media;
        }

        if(alunos[i].media < menorMedia) {
            menorMedia = alunos[i].media;
        }

        if(alunos[i].media >= 7) {
            aprovacao.aprovados++;
            alunos[i].status = true;
        } else {
            aprovacao.reprovados++;
            alunos[i].status = false;
        }
    }
    mediaGeral = mediaGeral / qtdAlunos;
    printf("\n");
    printf("RELATÓRIO DE TODOS OS ALUNOS DA SALA:\n");

    for(int j = 0; j < qtdAlunos; j++) {
        printf("Nome Aluno: %s\n", alunos[j].nome);
        printf("Nota 1: %.2f\n", alunos[j].n1);
        printf("Nota 2: %.2f\n", alunos[j].n2);
        printf("Média: %.2f\n", alunos[j].media);

        if(alunos[j].status) {
            printf("Status: Aprovado\n");
        } else {
            printf("Status: Reprovado\n");
        }
    }

    printf("\n");
    printf("RELATÓRIO FINAL:\n");
    printf("Maior Média da Turma: %.2f\n", maiorMedia);
    printf("Menor Média da Turma: %.2f\n", menorMedia);
    printf("Aprovados: %d\n", aprovacao.aprovados);
    printf("Reprovados: %d\n", aprovacao.reprovados);
    printf("Média Geral da Turma: %.2f\n", mediaGeral);

    free(alunos);
    return 0;
}