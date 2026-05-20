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
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;
  float superPoderC1;

  // Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float superPoderC2;

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

  // Calcular a Densidade Populacional e o PIB per Capita
  densidadePopulacional1 = (populacao1 / area1);
  densidadePopulacional2 = (populacao2 / area2);
  pibPerCapita1 = (pib1 / populacao1);
  pibPerCapita2 = (pib2 / populacao2);

  // Calcular Super Poder das Cartas
  superPoderC1 = (populacao1 + area1 + pib1 + pontosTuristicos1 + (1 / densidadePopulacional1) + pibPerCapita1);
  superPoderC2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + (1 / densidadePopulacional2) + pibPerCapita2);

  // Área para exibição dos dados da cidade
  printf("\nCartas Cadastradas:\n");
  // Exibição da Carta 1
  printf("|--------Carta 1--------\n");
  printf("| Estado: %c - Código: %s \n| Nome da Cidade: %s \n| População : %d \n| Área : %.2f km² \n| PIB : %.2f bilhões de reais \n| Pontos Turísticos : %d\n| Densidade Populacional : %.2f hab/km² \n| PIB per Capita : %.2f bilhões de reais \n| Super Poder : %.2f\n", estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1, superPoderC1);
  printf("|----------------------- \n");
  printf("\n");
  // Exibição da Carta 2
  printf("|--------Carta 2--------\n");
  printf("| Estado: %c - Código: %s \n| Nome da Cidade: %s \n| População : %d \n| Área : %.2f km² \n| PIB : %.2f bilhões de reais \n| Pontos Turísticos : %d\n| Densidade Populacional : %.2f hab/km² \n| PIB per Capita : %.2f bilhões de reais \n| Super Poder : %.2f\n", estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoderC2);
  printf("|----------------------- \n \n");

  // Tema 2 - Comparando Cartas do Super Trunfo
  //  Objetivo: Você implementará a lógica para comparar duas cartas e determinar a vencedora com base em um único atributo numérico (como população, área, PIB, etc.). Este desafio é uma continuação do desafio do tema anterior, onde você desenvolveu o cadastro das cartas e você poderá reaproveitar o código de cadastro de cartas que já foi desenvolvido. O foco deste nível é a comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if-else.

  // Comparando as CARTAS
  printf("***** CARTAS EM COMBATE *****\n");
  printf("Carta1: %s - População: %d \n", nomeCidade1, populacao1);
  printf("Carta2: %s - População: %d \n", nomeCidade2, populacao2);
  if (populacao1 > populacao2)
  {
    printf("Carta 1: %s  é a vencedora com base na população!\n", nomeCidade1);
  }
  else if (populacao1 < populacao2)
  {
    printf("Carta 2: %s é a vencedora com base na população!\n", nomeCidade2);
  }
  else
  {
    printf("Empate! Ambas as cartas têm a mesma população.\n");
  };

  printf("Carta1: %s - Área: %d \n", nomeCidade1, area1);
  printf("Carta2: %s - Área: %d \n", nomeCidade2, area2);
  if (area1 > area2)
  {
    printf("Carta 1: %s  é a vencedora com base na Área!\n", nomeCidade1);
  }
  else if (area1 < area2)
  {
    printf("Carta 2: %s é a vencedora com base na Área!\n", nomeCidade2);
  }
  else
  {
    printf("Empate! Ambas as cartas têm a mesma Área.\n");
  };

  printf("Carta1: %s - Densidade Populacional: %d \n", nomeCidade1, densidadePopulacional1);
  printf("Carta2: %s - Densidade Populacional: %d \n", nomeCidade2, densidadePopulacional2);
  if (densidadePopulacional1 < densidadePopulacional2)
  {
    printf("Carta 1: %s  é a vencedora com base na Densidade Populacional!\n", nomeCidade1);
  }
  else if (densidadePopulacional1 > densidadePopulacional2)
  {
    printf("Carta 2: %s é a vencedora com base na Densidade Populacional!\n", nomeCidade2);
  }
  else
  {
    printf("Empate! Ambas as cartas têm a mesma Densidade Populacional.\n");
  };

  printf("Carta1: %s - Super Poder: %d \n", nomeCidade1, superPoderC1);
  printf("Carta2: %s - Super Poder: %d \n", nomeCidade2, superPoderC2);
  if (superPoderC1 > superPoderC2)
  {
    printf("Carta 1: %s  é a vencedora com base no Super Poder!\n", nomeCidade1);
  }
  else if (superPoderC1 < superPoderC2)
  {
    printf("Carta 2: %s é a vencedora com base no Super Poder!\n", nomeCidade2);
  }
  else
  {
    printf("Empate! Ambas as cartas têm o mesmo Super Poder.\n");
  };

  return 0;
}
