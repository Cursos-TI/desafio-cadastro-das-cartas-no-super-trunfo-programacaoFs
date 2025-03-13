
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Estrutura para representar um estado
typedef struct {
    char nome[50];
    int populacao;
    int area;
    int pib;
} Estado;

// Função para criar um baralho de estados
Estado* criarBaralho() {
    Estado* baralho = (Estado*) malloc(5 * sizeof(Estado));

    strcpy(baralho[0].nome, "São Paulo");
    baralho[0].populacao = 46000000;
    baralho[0].area = 248800;
    baralho[0].pib = 2300000000000;

    strcpy(baralho[1].nome, "Rio de Janeiro");
    baralho[1].populacao = 17000000;
    baralho[1].area = 43700;
    baralho[1].pib = 1500000000000;


    return baralho;
}

// Função para embaralhar o baralho
void embaralharBaralho(Estado* baralho) {
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        int j = rand() % 5;
        Estado temp = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = temp;
    }
}

// Função para jogar uma rodada
void jogarRodada(Estado* baralho, int* pontosJogador, int* pontosComputador) {
    Estado estadoJogador = baralho[0];
    Estado estadoComputador = baralho[1];

    printf("Estado do jogador: %s\n", estadoJogador.nome);
    printf("População: %d\n", estadoJogador.populacao);
    printf("Área: %d\n", estadoJogador.area);
    printf("PIB: %d\n", estadoJogador.pib);

    printf("Estado do computador: %s\n", estadoComputador.nome);
    printf("População: %d\n", estadoComputador.populacao);
    printf("Área: %d\n", estadoComputador.area);
    printf("PIB: %d\n", estadoComputador.pib);

    int escolhaJogador;
    printf("Escolha uma característica para comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    scanf("%d", &escolhaJogador);

    if (escolhaJogador == 1) {
        if (estadoJogador.populacao > estadoComputador.populacao) {
            (*pontosJogador)++;
            printf("Jogador ganhou esta rodada!\n");
        } else {
            (*pontosComputador)++;
            printf("Computador ganhou esta rodada!\n");
        }
    } else if (escolhaJogador == 2) {
        if (estadoJogador.area > estadoComputador.area) {
            (*pontosJogador)++;
            printf("Jogador ganhou esta rodada!\n");
        } else {
            (*pontosComputador)++;
            printf("Computador ganhou esta rodada!\n");
        }
    } else if (escolhaJogador == 3) {
     } if (estadoJogador.pib > estadoComputador.pib) {
            (*pontosJogador)++;
            printf("Jogador ganhou esta rodada!\n");
        }