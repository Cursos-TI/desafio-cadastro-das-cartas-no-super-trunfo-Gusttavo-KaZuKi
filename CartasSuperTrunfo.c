#include <stdio.h>

int main() {
    // Criar variáveis para armazenar informações das cartas 1 e 2
    char letra_estado1;
    char letra_estado2;
    char codigo_carta1[4];
    char codigo_carta2[4];
    char nome_cidade1[20];
    char nome_cidade2[20];
    unsigned long int populacao1;
    unsigned long int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos_turisticos1;
    int pontos_turisticos2;

    // Instruir o usuário a preencher as informações das cartas e coletar inputs
    // Carta 1
    printf("Preencha uma Letra de A a H para representar o estado da sua carta: ");
    scanf(" %c", &letra_estado1);
    
    printf("Digite a letra da sua carta seguida de um número de 01 a 04 para representar o código da sua carta: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade que você escolheu: ");
    scanf("%s", nome_cidade1);

    printf("Digite o número de habitantes da cidade escolhida: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade escolhida em km²: ");
    scanf("%f", &area1);

    printf("Preencha o número em reais do PIB da cidade escolhida: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos da cidade escolhida: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nCarta 1 Salva com sucesso!\n");

    // Carta 2
    printf("\nPreencha uma Letra de A a H para representar o estado da segunda carta: ");
    scanf(" %c", &letra_estado2);
    
    printf("Digite a letra da sua carta seguida de um número de 01 a 04 para representar o código da sua carta: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade que você escolheu: ");
    scanf("%s", nome_cidade2);

    printf("Digite o número de habitantes da cidade escolhida: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade escolhida em km²: ");
    scanf("%f", &area2);

    printf("Preencha o número em reais do PIB da cidade escolhida: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos da cidade escolhida: ");
    scanf("%d", &pontos_turisticos2);

    printf("\nCarta 2 Salva com sucesso!\n");

    // Densidade populacional e PIB per capita
    float densidade_populacional1 = (float)populacao1 / area1;
    float densidade_populacional2 = (float)populacao2 / area2;

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Super Poder: soma de todos os atributos numéricos, incluindo inverso da densidade
    float super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade_populacional1);
    float super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade_populacional2);

    int resultado;

    printf("\nComparação de Cartas usando 'resultado':\n\n");

    // População
    resultado = (populacao1 > populacao2) ? 1 : 0;
    printf("População: Se resultado for 0 a Carta 2 venceu, se resultado for 1 a Carta 1 venceu, o resultado foi %d\n", resultado);

    // Área
    resultado = (area1 > area2) ? 1 : 0;
    printf("Área: Se resultado for 0 a Carta 2 venceu, se resultado for 1 a Carta 1 venceu, o resultado foi %d\n", resultado);

    // PIB
    resultado = (pib1 > pib2) ? 1 : 0;
    printf("PIB: Se resultado for 0 a Carta 2 venceu, se resultado for 1 a Carta 1 venceu, o resultado foi %d\n", resultado);

    // Pontos Turísticos
    resultado = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
    printf("Pontos Turísticos: Se resultado for 0 a Carta 2 venceu, se resultado for 1 a Carta 1 venceu, o resultado foi %d\n", resultado);

    // Densidade Populacional (menor vence)
    resultado = (densidade_populacional1 < densidade_populacional2) ? 1 : 0;
    printf("Densidade Populacional: Se resultado for 0 a Carta 2 venceu, se resultado for 1 a Carta 1 venceu, o resultado foi %d\n", resultado);

    // PIB per Capita
    resultado = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
    printf("PIB per Capita: Se resultado for 0 a Carta 2 venceu, se resultado for 1 a Carta 1 venceu, o resultado foi %d\n", resultado);

    // Super Poder
    resultado = (super_poder1 > super_poder2) ? 1 : 0;
    printf("Super Poder: Se resultado for 0 a Carta 2 venceu, se resultado for 1 a Carta 1 venceu, o resultado foi %d\n", resultado);

    return 0;
}
