#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

      int pontost, populacao;
      char estado[8];
      char codigo[4];
      char cidade[50];
      float area, pib;
      float densidade, pibcapita;

  // Área para entrada de dados

      printf ("Digite o estado: \n");
      scanf ("%s", &estado);

      printf ("Digite o codigo da carta: \n");
      scanf ("%s", &codigo);

      printf ("Digite o nome da cidade: \n");
      scanf ("%s", &cidade);

      printf ("Digite a população: \n");
      scanf ("%d", &populacao);

      printf ("Digite a área (em km²): \n");
      scanf ("%f", &area);

      printf ("Digite o PIB: \n");
      scanf ("%f", &pib);

      printf ("Digite o número de pontos turísticos: \n");
      scanf ("%d", &pontost);

  // Área para calculo da densidade populacional e PIB per capita

      densidade = (populacao/area);
      pibcapita = (pib/populacao);

  // Área para exibição dos dados da cidade

      printf ("Estado: %s \n", estado);
      printf ("Código da Carta: %s \n", codigo);
      printf ("Nome da Cidade: %s \n", cidade);
      printf ("População: %d \n", populacao);
      printf ("Área: %.2f km² \n", area);
      printf ("PIB: %.2f bilhões de reais \n", pib);
      printf ("Número de Pontos Turísticos: %d \n", pontost);
      printf ("Densidade Populacional: %.2f hab/km² \n", densidade);
      printf ("PIB per Capita: %.2f reais \n", pibcapita);


      printf ("Digite o estado: \n");
      scanf ("%s", &estado);

      printf ("Digite o codigo da carta: \n");
      scanf ("%s", &codigo);

      printf ("Digite o nome da cidade: \n");
      scanf ("%s", &cidade);

      printf ("Digite a população: \n");
      scanf ("%d", &populacao);

      printf ("Digite a área (em km²): \n");
      scanf ("%f", &area);

      printf ("Digite o PIB: \n");
      scanf ("%f", &pib);

      printf ("Digite o número de pontos turísticos: \n");
      scanf ("%d", &pontost);

      densidade = (populacao/area);
      pibcapita = (pib/populacao);

      printf ("Estado: %s \n", estado);
      printf ("Código da Carta: %s \n", codigo);
      printf ("Nome da Cidade: %s \n", cidade);
      printf ("População: %d \n", populacao);
      printf ("Área: %.2f km² \n", area);
      printf ("PIB: %.2f bilhões de reais \n", pib);
      printf ("Número de Pontos Turísticos: %d \n", pontost);
      printf ("Densidade Populacional: %.2f hab/km² \n", densidade);
      printf ("PIB per Capita: %.2f reais \n", pibcapita);

return 0;
} 
