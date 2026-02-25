#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  // Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // Área para entrada de dados
  // Dados para Carta 1
  printf("Dados da Carta 1:\n");
  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Digite o código da carta (ex: A01): ");
  scanf(" %s", &codigo1);
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", &nomeCidade1);
  printf("Digite a população: ");
  scanf(" %d", &populacao1);
  printf("Digite a área (km²): ");
  scanf(" %f", &area1);
  printf("Digite o PIB: ");
  scanf(" %f", &pib1);
  printf("Digite o número de pontos turísticos: ");
  scanf(" %d", &pontosTuristicos1);
  printf("\n");

  // Dados para Carta 2
  printf("Dados da Carta 2:\n");
  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Digite o código da carta (ex: A01): ");
  scanf(" %s", &codigo2);
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", &nomeCidade2);
  printf("Digite a população: ");
  scanf(" %d", &populacao2);
  printf("Digite a área (km²): ");
  scanf(" %f", &area2);
  printf("Digite o PIB: ");
  scanf(" %f", &pib2);
  printf("Digite o número de pontos turísticos: ");
  scanf(" %d", &pontosTuristicos2);
  printf("\n");

  // Área para exibição dos dados da cidade
  printf("\nCartas Cadastradas:\n");
  // Exibição da Carta 1
  printf("|--------Carta 1--------\n");
  printf("| Estado: %c - Código: %s \n| Nome da Cidade: %s \n| População : %d \n| Área : %.2f km² \n| PIB : %.2f bilhões de reais \n| Pontos Turísticos : %d\n", estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1);
  printf("|----------------------- \n");
  printf("\n");
  // Exibição da Carta 2
  printf("|--------Carta 2--------\n");
  printf("| Estado: %c - Código: %s \n| Nome da Cidade: %s \n| População : %d \n| Área : %.2f km² \n| PIB : %.2f bilhões de reais \n| Pontos Turísticos : %d\n", estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2);
  printf("|----------------------- \n \n");

  return 0;
}
