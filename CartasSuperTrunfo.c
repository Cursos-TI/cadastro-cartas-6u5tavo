#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

      int pontostA;
      unsigned long int populacaoA;
      char cidadeA[50], codigoA[50], estadoA[50];
      float areaA, pibA, densidadeA, pibcapitaA;

      float superpoderA, superpoderB;

      int pontostB;
      unsigned long int populacaoB;
      char cidadeB[50], codigoB[50], estadoB[50];
      float areaB, pibB, densidadeB, pibcapitaB;


  // Área para entrada de dados

      printf ("Digite o estado: \n");
      scanf ("%s", &estadoA);

      printf ("Digite o codigo da carta: \n");
      scanf ("%s", &codigoA);

      printf ("Digite o nome da cidade: \n");
      scanf ("%s", &cidadeA);

      printf ("Digite a população: \n");
      scanf ("%lu", &populacaoA);

      printf ("Digite a área (em km²): \n");
      scanf ("%f", &areaA);

      printf ("Digite o PIB: \n");
      scanf ("%f", &pibA);

      printf ("Digite o número de pontos turísticos: \n");
      scanf ("%d", &pontostA);

  // Área para calculo da densidade populacional e PIB per capita

      densidadeA = (populacaoA/areaA);
      pibcapitaA = (pibA/populacaoA);

  // Área para calculo do super poder

      superpoderA = (float)(populacaoA + areaA + pibA + pontostA + pibcapitaA + (1.0/densidadeA) );

  // Área para exibição dos dados da cidade

      printf ("Carta 1: \n");
      printf ("Estado: %s \n", estadoA);
      printf ("Código da Carta: %s \n", codigoA);
      printf ("Nome da Cidade: %s \n", cidadeA);
      printf ("População: %d \n", populacaoA);
      printf ("Área: %.2f km² \n", areaA);
      printf ("PIB: %.2f bilhões de reais \n", pibA);
      printf ("Número de Pontos Turísticos: %d \n", pontostA);
      printf ("Densidade Populacional: %.2f hab/km² \n", densidadeA);
      printf ("PIB per Capita: %.8f reais \n", pibcapitaA);
      printf ("Super Poder: %.2f\n", superpoderA);

    
      printf ("Digite o estado: \n");
      scanf ("%s", &estadoB);

      printf ("Digite o codigo da carta: \n");
      scanf ("%s", &codigoB);

      printf ("Digite o nome da cidade: \n");
      scanf ("%s", &cidadeB);

      printf ("Digite a população: \n");
      scanf ("%lu", &populacaoB);

      printf ("Digite a área (em km²): \n");
      scanf ("%f", &areaB);

      printf ("Digite o PIB: \n");
      scanf ("%f", &pibB);

      printf ("Digite o número de pontos turísticos: \n");
      scanf ("%d", &pontostB);

      densidadeB = (populacaoB/areaB);
      pibcapitaB = (pibB/populacaoB);

      superpoderB = (float)(populacaoB + areaB + pibB + pontostB + pibcapitaB + (1.0/densidadeB) ); 

      printf ("Carta 2: \n");
      printf ("Estado: %s \n", estadoB);
      printf ("Código da Carta: %s \n", codigoB);
      printf ("Nome da Cidade: %s \n", cidadeB);
      printf ("População: %d \n", populacaoB);
      printf ("Área: %.2f km² \n", areaB);
      printf ("PIB: %.2f bilhões de reais \n", pibB);
      printf ("Número de Pontos Turísticos: %d \n", pontostB);
      printf ("Densidade Populacional: %.2f hab/km² \n", densidadeB);
      printf ("PIB per Capita: %.8f reais \n", pibcapitaB);
      printf ("Super Poder: %.2f\n", superpoderB);

  // Área para comparações entre as cartas

      if (populacaoA > populacaoB){
        printf("Carta 1 - %s: %d\n", cidadeA, populacaoA);
        printf("Carta 2 - %s: %d\n", cidadeB, populacaoB);
        printf("Resultado: Carta 1 (%s) venceu", cidadeA);
      } else {
        printf("Carta 1 - %s: %d\n", cidadeA, populacaoA);
        printf("Carta 2 - %s: %d\n", cidadeB, populacaoB);
        printf("Resultado: Carta 2 (%s) venceu", cidadeB);
      }

return 0;
} 
