#include <stdio.h>

int main() {
    // ===== Carta 1 =====
    char estado1[50];
    char codigo1[4];        // Ex: A01 (3 caracteres + '\0')r
    char cidade1[50];       // Nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ===== Carta 2 =====
    char estado2[50];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ===== Entrada dos dados =====
    printf("Digite o Estado da Carta 1: \n");
    scanf("%s", &estado1);

    printf("Digite o Codigo da Carta 1: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade da Carta 1: \n");
    scanf(" %[^\n]", cidade1);  // Lê string com espaços

    printf("Digite a Populacao da Carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area da Carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos da Carta 1: \n");
    scanf("%d", &pontosTuristicos1);

    printf("\n"); // só pra dar espaço

    // ===== Entrada dos dados da Carta 2 =====
    printf("Digite o Estado da Carta 2: \n");
    scanf("%s", &estado2);

    printf("Digite o Codigo da Carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade da Carta 2: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao da Carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area da Carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos da Carta 2: \n");
    scanf("%d", &pontosTuristicos2);

    // ===== Saída formatada =====
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}