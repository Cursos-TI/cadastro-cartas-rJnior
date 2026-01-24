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
  float populacao;
  float areaKm;
  float pib;
  int pontosTuristicos;
  float densidadePopulacional;
  float pibPerCapita;

  // Carta 2
  char estado2[10];
  char nomeCidade2[20];
  char codigoCarta2[10];
  float populacao2;
  float areaKm2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;

  // Área para entrada de dados

  // Entradas de dados da carta 1
  printf("Digite o Estado da carta 1: ");
  scanf("%s", &estado);

  printf("Digite o código da carta: ");
  scanf("%s", &codigoCarta);

  printf("Digite o nome da cidade: ");
  scanf("%s", &nomeCidade);

  printf("Digite o número de população da cidade: ");
  scanf("%f", &populacao);

  printf("Digite a aréa em km²: ");
  scanf("%f", &areaKm);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: "),
  scanf("%d", &pontosTuristicos);

  // Fim da entrada de dados carta 1

  // Entrada de dados da carta 2
  printf("Digite o Estado da carta 2: ");
  scanf("%s", &estado2);

  printf("Digite o código da carta: ");
  scanf("%s", &codigoCarta2);

  printf("Digite o nome da cidade: ");
  scanf("%s", &nomeCidade2);

  printf("Digite o número de população da cidade: ");
  scanf("%f", &populacao2);

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
  
  // Fim dos cálculos

  // Área para exibição dos dados da cidade
  printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %.0f\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais/hab\n", estado, codigoCarta, nomeCidade, populacao, areaKm, pib, pontosTuristicos, densidadePopulacional, pibPerCapita);
  printf("\n");
  printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %.0f\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais/hab\n", estado2, codigoCarta2, nomeCidade2, populacao2, areaKm2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);
 
return 0;
} 
