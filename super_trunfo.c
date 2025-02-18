#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Entrada dos dados da primeira carta
    printf("Digite o estado da primeira cidade (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^"]s", cidade1);
    printf("Digite a população da primeira cidade: ");
    scanf(" %d", &populacao1);
    printf("Digite a área da primeira cidade (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da primeira cidade (bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf(" %d", &pontos_turisticos1);

    // Entrada dos dados da segunda carta
    printf("\nDigite o estado da segunda cidade (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^"]s", cidade2);
    printf("Digite a população da segunda cidade: ");
    scanf(" %d", &populacao2);
    printf("Digite a área da segunda cidade (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da segunda cidade (bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf(" %d", &pontos_turisticos2);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
