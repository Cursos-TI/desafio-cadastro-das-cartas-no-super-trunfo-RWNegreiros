#include <stdio.h>

int main() {
  printf("Super Trunfo Países!\n");
    // Dados da Carta 1 - Santiago, Chile
    char estado1[20] = "Chile";
    char codigo1[10] = "A01";
    char nomeCidade1[20] = "Santiago";
    int populacao1 = 868075;
    float area1 = 1391.770; // em km²
    float pib1 = 20.510; // em bilhões de reais
    int pontosTuristicos1 = 20;

    // Dados da Carta 2 - Lima, Peru
    char estado2[20] = "Peru";
    char codigo2[10] = "B02";
    char nomeCidade2[20] = "Lima";
    int populacao2 = 1014000;
    float area2 = 834.780; // em km²
    float pib2 = 31.100; // em bilhões de reais
    int pontosTuristicos2 = 18;

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
