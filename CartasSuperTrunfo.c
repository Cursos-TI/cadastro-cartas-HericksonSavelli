#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   char letra;
    char codigo[4];
    char estado[50];
    int populacao;
    float area;
    float Pib;
    int pontosturisticos;

  // Área para entrada de dados
   printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &letra);
    
    printf("Digite um numero de 1 a 4: ");
    scanf("%s", codigo);
    
    printf("Digite nome da cidade: ");
    scanf("%s", estado);
    
    printf("Digite numero de habitantes da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a area em quilometros quadrados: ");
    scanf("%f", &area);
    
    printf("Digite produto interno bruto: ");
    scanf("%f", &Pib);
    
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontosturisticos );

    printf("\n\n");

  // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado:%c\n", letra);
    printf("codigo:%c %s\n", letra, codigo);
    printf("Nome da cidade:%s\n", estado);
    printf("População:%d\n", populacao);
    printf("Área:%.2f km²\n", area);
    printf("PIB:%.2f bilhões de reais\n", Pib);
    printf("Numero de pontos turisticos:%d\n\n", pontosturisticos);

    // Área para entrada de dados
    printf("--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &letra);
    
    printf("Digite um numero de 01 a 04: ");
    scanf("%s", codigo);

    printf("Digite nome da cidade: ");
    scanf("%s", estado);

    printf("Digite numero de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area em quilometros quadrados: ");
    scanf("%f", &area);

    printf("Digite produto interno bruto: ");
    scanf("%f", &Pib);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontosturisticos );

    printf("\n\n");

     // Área para exibição dos dados da cidade
    printf("Carta 2:\n");
    printf("Estado:%c\n", letra);
    printf("codigo:%c %s\n", letra, codigo);
    printf("Nome da cidade:%s\n", estado);
    printf("População:%d\n", populacao);
    printf("Área:%.2f km²\n", area);
    printf("PIB:%.2f bilhões de reais\n", Pib);
    printf("Numero de pontos turisticos:%d\n", pontosturisticos);
    
    
return 0;
} 
