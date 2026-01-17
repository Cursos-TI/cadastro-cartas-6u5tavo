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

      int escolhaAtributo;
      


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

  // Área para escolha de atributo

      printf("Escolha um atributo:\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Número de pontos turísticos\n");
      printf("5. Densidade demográfica\n");
      scanf("%d", &escolhaAtributo);

  // Área para comparações entre as cartas

      printf("%s x %s\n", cidadeA, cidadeB);

      switch (escolhaAtributo)
      {
      case 1:
            printf("Carta 1: %d | Carta 2: %d\n", populacaoA, populacaoB);
            if (populacaoA == populacaoB)
      {
        printf("Empate!\n");
      } else if (populacaoA > populacaoB) {
        printf("Carta 1 venceu!\n");
      } else {
        printf("Carta 2 venceu!\n");
      }
            
      break;
      case 2:
            printf("Carta 1: %f | Carta 2: %f\n", areaA, areaB);
            if (areaA == areaB)
      {
        printf("Empate!\n");
      } else if (areaA > areaB) {
        printf("Carta 1 venceu!\n");
      } else {
        printf("Carta 2 venceu!\n");
      }

      break;
      case 3:
            printf("Carta 1: %f | Carta 2: %f\n", pibA, pibB);
            if (pibA == pibB)
      {
        printf("Empate!\n");
      } else if (pibA > pibB) {
        printf("Carta 1 venceu!\n");
      } else {
        printf("Carta 2 venceu!\n");
      }

      break;
      case 4:
            printf("Carta 1: %d | Carta 2: %d\n", pontostA, pontostB);
            if (pontostA == pontostB)
      {
        printf("Empate!\n");
      } else if (pontostA > pontostB) {
        printf("Carta 1 venceu!\n");
      } else {
        printf("Carta 2 venceu!\n");
      }

      break;
      case 5:
            printf("Carta 1: %f | Carta 2: %f\n", densidadeA, densidadeB);
            if (densidadeA == densidadeB)
      {
        printf("Empate!\n");
      } else if (densidadeA < densidadeB) {
        printf("Carta 1 venceu!\n");
      } else {
        printf("Carta 2 venceu!\n");
      }

      break;
      default:
            printf("Opção inválida!\n");
      break;
      }
      

return 0;
} 
