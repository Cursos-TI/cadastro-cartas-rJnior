#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado[10];
  char nomeCidade[20];
  char codigoCarta[10];
  unsigned long int populacao;
  float areaKm;
  float pib;
  int pontosTuristicos;
  float densidadePopulacional;
  float pibPerCapita;
  float superPoder;
  int resultadoPoder;

  // Carta 2
  char estado2[10];
  char nomeCidade2[20];
  char codigoCarta2[10];
  unsigned long int populacao2;
  float areaKm2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float superPoder2;

  // Área para entrada de dados

  // Entradas de dados da carta 1
  printf("Digite o Estado da carta 1: ");
  scanf("%s", estado);

  printf("Digite o código da carta: ");
  scanf("%s", codigoCarta);

  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade);

  printf("Digite o número de população da cidade: ");
  scanf("%lu", &populacao);

  printf("Digite a aréa em km²: ");
  scanf("%f", &areaKm);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: "),
  scanf("%d", &pontosTuristicos);

  // Fim da entrada de dados carta 1

  // Entrada de dados da carta 2
  printf("Digite o Estado da carta 2: ");
  scanf("%s", estado2);

  printf("Digite o código da carta: ");
  scanf("%s", codigoCarta2);

  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade2);

  printf("Digite o número de população da cidade: ");
  scanf("%lu", &populacao2);

  printf("Digite a aréa em km²: ");
  scanf("%f", &areaKm2);

  printf("Digite o PIB da cidade 2: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Fim entrada de dados carta 2

  // Cálculo das densidades populacionais e PIB per capita
  densidadePopulacional = (float) populacao / areaKm;
  pibPerCapita = (pib * 1000000000) / populacao; // Convertendo PIB de bilhões para reais

  densidadePopulacional2 = (float) populacao2 / areaKm2;
  pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo PIB de bilhões para reais
  
  int resPopu = populacao > populacao2;
  int resArea = areaKm > areaKm2;
  int resPib = pib > pib2;
  int resPontos = pontosTuristicos > pontosTuristicos2;
  int resDensidade = densidadePopulacional < densidadePopulacional2;
  int resPibPerCapita = pibPerCapita > pibPerCapita2;

  superPoder = populacao + areaKm + pib + pontosTuristicos + (1.0f / densidadePopulacional) + pibPerCapita;
  superPoder2 = populacao2 + areaKm2 + pib2 + pontosTuristicos2 + (1.0f / densidadePopulacional2) + pibPerCapita2;

  resultadoPoder = superPoder > superPoder2;

  // Fim dos cálculos

  // Área para exibição dos dados da cidade
  printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais/hab\n", estado, codigoCarta, nomeCidade, populacao, areaKm, pib, pontosTuristicos, densidadePopulacional, pibPerCapita);
  printf("\n");
  printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais/hab\n", estado2, codigoCarta2, nomeCidade2, populacao2, areaKm2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);
  printf("\n");

  printf("Comparação das cartas:\n");
  printf("População: Carta 1 venceu (%d)\n", resPopu);
  printf("Área: Carta 1 venceu (%d)\n", resArea);
  printf("PIB: Carta 1 venceu (%d)\n", resPib);
  printf("Número de pontos turísticos: Carta 1 venceu (%d)\n", resPontos);
  printf("Densidade populacional: Carta 1 venceu (%d)\n", resDensidade);
  printf("PIB per capita: Carta 1 venceu (%d)\n", resPibPerCapita);
  printf("Super Poder: Carta 1 venceu (%d)\n", resultadoPoder);

  printf("Resultado de cartas (população): \n");
  printf("Carta 1 - %s (%s): %lu\n", nomeCidade, codigoCarta, populacao);
  printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, codigoCarta2, populacao2);

  if (populacao > populacao2) {
    printf("População: Carta 1 (%s) venceu!\n", nomeCidade);
  } else {
    printf("População: Carta 2 (%s) venceu!\n", nomeCidade2);
  }

  printf("Resultado de cartas (área): \n");
  printf("Carta 1 - %s (%s): %.2f km².\n", nomeCidade, codigoCarta, areaKm);
  printf("Carta 2 - %s (%s): %.2f km².\n", nomeCidade2, codigoCarta2, areaKm2);

  if (areaKm > areaKm2) {
    printf("Área: Carta 1 (%s) venceu!\n", nomeCidade);
  } else {
    printf("Área: Carta 2 (%s) venceu!\n", nomeCidade2);
  }

  printf("Resultado de cartas (PIB): \n");
  printf("Carta 1 - %s (%s): %.2f bilhões de reais.\n", nomeCidade, codigoCarta, pib);
  printf("Carta 2 - %s (%s): %.2f bilhões de reais.\n", nomeCidade2, codigoCarta2, pib2);

  if (pib > pib2) {
    printf("PIB: Carta 1 (%s) venceu!\n", nomeCidade);
  } else {
    printf("PIB: Carta 2 (%s) venceu!\n", nomeCidade2);
  }

  printf("Resultado de cartas (Número de pontos turísticos): \n");
  printf("Carta 1 - %s (%s): %d pontos turísticos.\n", nomeCidade, codigoCarta, pontosTuristicos);
  printf("Carta 2 - %s (%s): %d pontos turísticos.\n", nomeCidade2, codigoCarta2, pontosTuristicos2);

  if (pontosTuristicos > pontosTuristicos2) {
    printf("Número de pontos turísticos: Carta 1 (%s) venceu!\n", nomeCidade);
  } else {
    printf("Número de pontos turísticos: Carta 2 (%s) venceu!\n", nomeCidade2);
  }

  printf("Resultado de cartas (Densidade populacional): \n");
  printf("Carta 1 - %s (%s): %.2f hab/km².\n", nomeCidade, codigoCarta, densidadePopulacional);
  printf("Carta 2 - %s (%s): %.2f hab/km².\n", nomeCidade2, codigoCarta2, densidadePopulacional2);

  if (densidadePopulacional < densidadePopulacional2) {
    printf("Densidade populacional: Carta 1 (%s) venceu!\n", nomeCidade);
  } else {
    printf("Densidade populacional: Carta 2 (%s) venceu!\n", nomeCidade2);
  }

  printf("Resultado de cartas (PIB per capita): \n");
  printf("Carta 1 - %s (%s): %.2f reais/hab.\n", nomeCidade, codigoCarta, pibPerCapita);
  printf("Carta 2 - %s (%s): %.2f reais/hab.\n", nomeCidade2, codigoCarta2, pibPerCapita2);

  if (pibPerCapita > pibPerCapita2) {
    printf("PIB per capita: Carta 1 (%s) venceu!\n", nomeCidade);
  } else {
    printf("PIB per capita: Carta 2 (%s) venceu!\n", nomeCidade2);
  }

  printf("Resultado de cartas (Super Poder): \n");
  printf("Carta 1 - %s (%s): %.2f.\n", nomeCidade, codigoCarta, superPoder);
  printf("Carta 2 - %s (%s): %.2f.\n", nomeCidade2, codigoCarta2, superPoder2);

  if (superPoder > superPoder2) {
    printf("Super Poder: Carta 1 (%s) venceu!\n", nomeCidade);
  } else {
    printf("Super Poder: Carta 2 (%s) venceu!\n", nomeCidade2);
  }
  printf("\n");
  return 0;
} 
