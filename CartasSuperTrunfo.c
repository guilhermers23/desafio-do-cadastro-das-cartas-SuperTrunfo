#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado1;
  char codigo1[4] = "A01";
  char nomeCidade1[50] = "Cidade A";
  unsigned long int populacao1 = 10000;
  float area1 = 500;
  float pib1 = 2000;
  int pontosTuristicos1 = 5;
  float densidadePopulacional1;
  float pibPerCapita1;
  float superPoderC1;

  // Carta 2
  char estado2;
  char codigo2[4] = "B01";
  char nomeCidade2[50] = "Cidade B";
  unsigned long int populacao2 = 15000;
  float area2 = 750;
  float pib2 = 3000;
  int pontosTuristicos2 = 8;
  float densidadePopulacional2;
  float pibPerCapita2;
  float superPoderC2;

  // // Área para entrada de dados
  // // Dados para Carta 1
  // printf("Dados da Carta 1:\n");
  // printf("Digite o estado (A-H): \n");
  // scanf(" %c", &estado1);
  // printf("Digite o código da carta (ex: A01): \n");
  // scanf(" %s", &codigo1);
  // printf("Digite o nome da cidade: \n");
  // scanf(" %[^\n]", &nomeCidade1);
  // printf("Digite a população: \n");
  // scanf(" %d", &populacao1);
  // printf("Digite a área (km²): \n");
  // scanf(" %f", &area1);
  // printf("Digite o PIB: \n");
  // scanf(" %f", &pib1);
  // printf("Digite o número de pontos turísticos: \n");
  // scanf(" %d", &pontosTuristicos1);
  // printf("\n");

  // // Dados para Carta 2
  // printf("Dados da Carta 2:\n");
  // printf("Digite o estado (A-H): \n");
  // scanf(" %c", &estado2);
  // printf("Digite o código da carta (ex: A01): \n");
  // scanf(" %s", &codigo2);
  // printf("Digite o nome da cidade: \n");
  // scanf(" %[^\n]", &nomeCidade2);
  // printf("Digite a população: \n");
  // scanf(" %d", &populacao2);
  // printf("Digite a área (km²): \n");
  // scanf(" %f", &area2);
  // printf("Digite o PIB: \n");
  // scanf(" %f", &pib2);
  // printf("Digite o número de pontos turísticos: \n");
  // scanf(" %d", &pontosTuristicos2);
  // printf("\n");

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

  // Desafio: nível aventureiro
  printf("***** CARTAS EM COMBATE *****\n");
  // Desafio: nível mestre
  int atributoComparacao1;
  int atributoComparacao2;
  int pontosCarta1 = 0;
  int pontosCarta2 = 0;

  printf("Escolha a o primeiro atributo para comparacao: \n");
  printf("1 - População \n");
  printf("2 - Area \n");
  printf("3 - PIB \n");
  printf("4 - Pontos Turísticos \n");
  printf("5 - Densidade Paopulacional \n");
  scanf("%d", &atributoComparacao1);

  printf("Escolha a o segundo atributo para comparacao: \n");
  printf("1 - População \n");
  printf("2 - Area \n");
  printf("3 - PIB \n");
  printf("4 - Pontos Turísticos \n");
  printf("5 - Densidade Paopulacional \n");
  scanf("%d", &atributoComparacao2);

  if (atributoComparacao1 == atributoComparacao2)
  {
    printf("Atributos escolhidos para comparação são os mesmos! Por favor, escolha atributos diferentes para a comparação.\n");
    return 0;
  }

  switch (atributoComparacao1)
  {
  case 1:
    printf("Carta1: %s - Populacao: %d \n", nomeCidade1, populacao1);
    printf("Carta2: %s - Populacao: %d \n", nomeCidade2, populacao2);
    if (populacao1 > populacao2)
    {
      printf("Carta 1: %s  e a vencedora com base na populacao!\n", nomeCidade1);
      pontosCarta1 += 1;
    }
    else if (populacao1 < populacao2)
    {
      printf("Carta 2: %s e a vencedora com base na populacao!\n", nomeCidade2);
      pontosCarta2 += 1;
    }
    else
    {
      printf("Empate! Ambas as cartas tem a mesma populacao.\n");
    };
    break;

  case 2:
    printf("Carta1: %s - Area: %.2f \n", nomeCidade1, area1);
    printf("Carta2: %s - Area: %.2f \n", nomeCidade2, area2);
    if (area1 > area2)
    {
      printf("Carta 1: %s  é a vencedora com base na Area!\n", nomeCidade1);
      pontosCarta1 += 1;
    }
    else if (area1 < area2)
    {
      printf("Carta 2: %s é a vencedora com base na Area!\n", nomeCidade2);
      pontosCarta2 += 1;
    }
    else
    {
      printf("Empate! Ambas as cartas têm a mesma Area.\n");
    };
    break;

  case 3:
    printf("Carta1: %s - PIB: %.2f \n", nomeCidade1, pib1);
    printf("Carta2: %s - PIB: %.2f \n", nomeCidade2, pib2);
    if (pib1 > pib2)
    {
      printf("Carta 1: %s  é a vencedora com base no PIB!\n", nomeCidade1);
      pontosCarta1 += 1;
    }
    else if (pib1 < pib2)
    {
      printf("Carta 2: %s é a vencedora com base no PIB!\n", nomeCidade2);
      pontosCarta2 += 1;
    }
    else
    {
      printf("Empate! Ambas as cartas têm o mesmo PIB.\n");
    };
    break;

  case 4:
    printf("Carta1: %s - Pontos Turísticos: %d \n", nomeCidade1, pontosTuristicos1);
    printf("Carta2: %s - Pontos Turísticos: %d \n", nomeCidade2, pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2)
    {
      printf("Carta 1: %s  é a vencedora com base nos Pontos Turísticos!\n", nomeCidade1);
      pontosCarta1 += 2;
    }
    else if (pontosTuristicos1 < pontosTuristicos2)
    {
      printf("Carta 2: %s é a vencedora com base nos Pontos Turísticos!\n", nomeCidade2);
      pontosCarta2 += 1;
    }
    else
    {
      printf("Empate! Ambas as cartas têm os mesmos Pontos Turísticos.\n");
    };
    break;

  case 5:
    printf("Carta1: %s - Densidade Populacional: %.2f \n", nomeCidade1, densidadePopulacional1);
    printf("Carta2: %s - Densidade Populacional: %.2f \n", nomeCidade2, densidadePopulacional2);
    if (densidadePopulacional1 < densidadePopulacional2)
    {
      printf("Carta 1: %s  é a vencedora com base na Densidade Populacional!\n", nomeCidade1);
      pontosCarta1 += 1;
    }
    else if (densidadePopulacional1 > densidadePopulacional2)
    {
      printf("Carta 2: %s é a vencedora com base na Densidade Populacional!\n", nomeCidade2);
      pontosCarta2 += 1;
    }
    else
    {
      printf("Empate! Ambas as cartas têm a mesma Densidade Populacional.\n");
    };
    break;

  default:
    printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
    break;
  }

  // Comparcao do segundo atributo escolhido
  switch (atributoComparacao2)
  {
  case 1:
    printf("Carta1: %s - Populacao: %d \n", nomeCidade1, populacao1);
    printf("Carta2: %s - Populacao: %d \n", nomeCidade2, populacao2);
    if (populacao1 > populacao2)
    {
      printf("Carta 1: %s  e a vencedora com base na populacao!\n", nomeCidade1);
      pontosCarta1 += 1;
    }
    else if (populacao1 < populacao2)
    {
      printf("Carta 2: %s e a vencedora com base na populacao!\n", nomeCidade2);
      pontosCarta2 += 1;
    }
    else
    {
      printf("Empate! Ambas as cartas tem a mesma populacao.\n");
    };
    break;

  case 2:
    printf("Carta1: %s - Area: %.2f \n", nomeCidade1, area1);
    printf("Carta2: %s - Area: %.2f \n", nomeCidade2, area2);
    if (area1 > area2)
    {
      printf("Carta 1: %s  é a vencedora com base na Area!\n", nomeCidade1);
      pontosCarta1 += 1;
    }
    else if (area1 < area2)
    {
      printf("Carta 2: %s é a vencedora com base na Area!\n", nomeCidade2);
      pontosCarta2 += 1;
    }
    else
    {
      printf("Empate! Ambas as cartas têm a mesma Area.\n");
    };
    break;

  case 3:
    printf("Carta1: %s - PIB: %.2f \n", nomeCidade1, pib1);
    printf("Carta2: %s - PIB: %.2f \n", nomeCidade2, pib2);
    if (pib1 > pib2)
    {
      printf("Carta 1: %s  é a vencedora com base no PIB!\n", nomeCidade1);
      pontosCarta1 += 1;
    }
    else if (pib1 < pib2)
    {
      printf("Carta 2: %s é a vencedora com base no PIB!\n", nomeCidade2);
      pontosCarta2 += 1;
    }
    else
    {
      printf("Empate! Ambas as cartas têm o mesmo PIB.\n");
    };
    break;

  case 4:
    printf("Carta1: %s - Pontos Turísticos: %d \n", nomeCidade1, pontosTuristicos1);
    printf("Carta2: %s - Pontos Turísticos: %d \n", nomeCidade2, pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2)
    {
      printf("Carta 1: %s  é a vencedora com base nos Pontos Turísticos!\n", nomeCidade1);
      pontosCarta1 += 2;
    }
    else if (pontosTuristicos1 < pontosTuristicos2)
    {
      printf("Carta 2: %s é a vencedora com base nos Pontos Turísticos!\n", nomeCidade2);
      pontosCarta2 += 1;
    }
    else
    {
      printf("Empate! Ambas as cartas têm os mesmos Pontos Turísticos.\n");
    };
    break;

  case 5:
    printf("Carta1: %s - Densidade Populacional: %.2f \n", nomeCidade1, densidadePopulacional1);
    printf("Carta2: %s - Densidade Populacional: %.2f \n", nomeCidade2, densidadePopulacional2);
    if (densidadePopulacional1 < densidadePopulacional2)
    {
      printf("Carta 1: %s  é a vencedora com base na Densidade Populacional!\n", nomeCidade1);
      pontosCarta1 += 1;
    }
    else if (densidadePopulacional1 > densidadePopulacional2)
    {
      printf("Carta 2: %s é a vencedora com base na Densidade Populacional!\n", nomeCidade2);
      pontosCarta2 += 1;
    }
    else
    {
      printf("Empate! Ambas as cartas têm a mesma Densidade Populacional.\n");
    };
    break;

  default:
    printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
    break;
  }

  // Exibir o resultado final da comparacao
  pontosCarta1 > pontosCarta2 ? printf("Carta 1: %s é a vencedora do combate com %d pontos!\n", nomeCidade1, pontosCarta1) : (pontosCarta1 < pontosCarta2 ? printf("Carta 2: %s é a vencedora do combate com %d pontos!\n", nomeCidade2, pontosCarta2) : printf("Empate! Ambas as cartas têm o mesmo número de pontos.\n"));

  return 0;
}
