#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Personagem {
    char nome[50];
    int vida;
    int ataque;
};

int main() {
    struct Personagem *personagens;
    int quantidade, maiorVida, maiorAtaque;
    float vidaMedia = 0;

    printf("Digite a quantidade de membros do grupo:\n");
    scanf("%d", &quantidade);

    if(quantidade <= 0) {
        printf("Quantidade inválida\n");
    return 1;
    }

    personagens = malloc(quantidade * sizeof(struct Personagem));

    if(personagens == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    printf("Digite o nome do Jogador %d: ", 1);
    scanf("%s", personagens[0].nome);

    printf("Digite a vida do Jogador %d: ", 1);
    scanf("%d", &personagens[0].vida);

    printf("Digite o ataque do Jogador %d: ", 1);
    scanf("%d", &personagens[0].ataque);
    
    maiorVida = personagens[0].vida;
    maiorAtaque = personagens[0].ataque;
    vidaMedia += personagens[0].vida;

    for(int i = 1; i < quantidade; i++) {
        printf("Digite o nome do Jogador %d: ", i + 1);
        scanf("%s", personagens[i].nome);

        printf("Digite a vida do Jogador %d: ", i + 1);
        scanf("%d", &personagens[i].vida);

        printf("Digite o ataque do Jogador %d: ", i + 1);
        scanf("%d", &personagens[i].ataque);

        vidaMedia += personagens[i].vida;

        if(personagens[i].vida > maiorVida) {
            maiorVida = personagens[i].vida;
        }

        if(personagens[i].ataque > maiorAtaque) {
            maiorAtaque = personagens[i].ataque;
        }
    }
    vidaMedia = vidaMedia / quantidade;

    printf("PARTY:\n");
    for(int j = 0; j < quantidade; j++) {
        printf("Integrante %d\n", j + 1);
        printf("Nome: %s\n", personagens[j].nome);
        printf("Pontos de Vida: %d\n", personagens[j].vida);
        printf("Pontos de Ataque: %d\n", personagens[j].ataque);
        printf("\n");
    }

    printf("Maior HP do grupo: %d\n", maiorVida);
    printf("Maior ataque do grupo: %d\n", maiorAtaque);
    printf("Média de HP do grupo: %.2f\n", vidaMedia);

    free(personagens);
    return 0;
}