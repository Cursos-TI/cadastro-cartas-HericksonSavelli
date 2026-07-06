#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char letra;
  char codigo[4];
  char estado[50];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float Pib1, Pib2;
  int pontosturisticos1, pontosturisticos2;
  float densidade1, densidade2;
  float PIBperCapita1, PIBperCapita2;
  int populacao, area, pontosturisticos, pib, densidade, superpoder;

  // Área para entrada de dados
  printf("--- CADASTRO DA CARTA 1 ---\n");

  printf("Digite uma letra de A a H: ");
  scanf(" %c", &letra);

  printf("Digite um numero de 1 a 4: ");
  scanf("%s", codigo);

  printf("Digite nome da cidade: ");
  scanf("%s", estado);

  printf("Digite numero de habitantes da cidade: ");
  scanf("%lu", &populacao1);

  printf("Digite a area em quilometros quadrados: ");
  scanf("%f", &area1);

  printf("Digite produto interno bruto: ");
  scanf("%f", &Pib1);

  printf("Digite a quantidade de pontos turisticos da cidade: ");
  scanf("%d", &pontosturisticos1);

  // Calculo de novas funções
  densidade1 = populacao1 / area1;
  PIBperCapita1 = Pib1 / populacao1;

  printf("\n\n");

  // Área para exibição dos dados da cidade
  printf("Carta 1:\n");
  printf("Estado:%c\n", letra);
  printf("codigo:%c%s\n", letra, codigo);
  printf("Nome da cidade:%s\n", estado);
  printf("População:%lu\n", populacao1);
  printf("Área:%.2f km²\n", area1);
  printf("PIB:%.2f bilhões de reais\n", Pib1);
  printf("Numero de pontos turisticos:%d\n", pontosturisticos1);
  printf("Densidade População: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n\n", PIBperCapita1);

  // Área para entrada de dados
  printf("--- CADASTRO DA CARTA 2 ---\n");

  printf("Digite uma letra de A a H: ");
  scanf(" %c", &letra);

  printf("Digite um numero de 01 a 04: ");
  scanf("%s", codigo);

  printf("Digite nome da cidade: ");
  scanf("%s", estado);

  printf("Digite numero de habitantes da cidade: ");
  scanf("%lu", &populacao2);

  printf("Digite a area em quilometros quadrados: ");
  scanf("%f", &area2);

  printf("Digite produto interno bruto: ");
  scanf("%f", &Pib2);

  printf("Digite a quantidade de pontos turisticos da cidade: ");
  scanf("%d", &pontosturisticos2);

  // Calculo de novas funções
  densidade2 = populacao2 / area2;
  PIBperCapita2 = Pib2 / populacao2;

  printf("\n\n");

  // Área para exibição dos dados da cidade
  printf("Carta 2:\n");
  printf("Estado:%c\n", letra);
  printf("codigo:%c %s\n", letra, codigo);
  printf("Nome da cidade:%s\n", estado);
  printf("População:%lu\n", populacao2);
  printf("Área:%.2f km²\n", area2);
  printf("PIB:%.2f bilhões de reais\n", Pib2);
  printf("Numero de pontos turisticos:%d\n", pontosturisticos2);
  printf("Densidade População: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

  printf("\n\n");

  // impressão resultado da compação das cartas

  printf("Comparação da Cartas:\n");
  printf("População: %s\n", (populacao1 > populacao2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  printf("Área: %s\n", (area1 > area2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  printf("Pontos turísticos: %s\n", (pontosturisticos1 > pontosturisticos2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  printf("Densidade Populacional: %s\n", (densidade1 < densidade2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  printf("PIB: %s\n", (Pib1 > Pib2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  printf("Super Poder: %s\n", (densidade1 < densidade2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

  return 0;
}
