#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Criar variáveis para armazenar informações das cartas 1 e 2
    char letra_estado1;
    char letra_estado2;
    char codigo_carta1[4];
    char codigo_carta2[4];
    char nome_cidade1[20];
    char nome_cidade2[20];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos_turisticos1;
    int pontos_turisticos2;

    // Instruir o usuário a fazer o preenchimento das suas cartas e coletar inputs
    // Carta 1
    printf("Preencha uma Letra de A a H para representar o estado da sua carta: ");
    scanf(" %c", &letra_estado1);
    
    printf("Digite a letra da sua carta seguida de um número de 01 a 04 para representar o código da sua carta: ");
    scanf("%s", &codigo_carta1);

    printf("Digite o nome da cidade que você escolheu: ");
    scanf("%s", &nome_cidade1);

    printf("Digite o número de habitantes da cidade escolhida: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade escolhida em km²: ");
    scanf("%f", &area1);

    printf("Preencha o número em reais do PIB da cidade escolhida: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos da cidade escolhida: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nCarta 1 Salva com sucesso!");

    // Carta 2
    printf("\nPreencha uma Letra de A a H para representar o estado da segunda carta: ");
    scanf(" %c", &letra_estado2);
    
    printf("Digite a letra da sua carta seguida de um número de 01 a 04 para representar o código da sua carta: ");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da cidade que você escolheu: ");
    scanf("%s", &nome_cidade2);

    printf("Digite o número de habitantes da cidade escolhida: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade escolhida em km²: ");
    scanf("%f", &area2);

    printf("Preencha o número em reais do PIB da cidade escolhida: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos da cidade escolhida: ");
    scanf("%d", &pontos_turisticos2);

    printf("\nCarta 2 Salva com sucesso!");

    // Imprime na tela o output com os resultados da carta 1
    printf("\nCarta 1:");
    printf("Letra Estado: %c\n", letra_estado1);
    printf("Código Carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    // Imprime na tela o output com os resultados da carta 2
    printf("\nCarta 2:\n");
    printf("Letra Estado: %c\n", letra_estado2);
    printf("Código Carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
