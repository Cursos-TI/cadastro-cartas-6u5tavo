#include <stdio.h>

// Desafio Super Trunfo - Países

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

      int primeiroAtributo, segundoAtributo;
      int resultado1, resultado2;
      


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

  // Área para escolha do 1º atributo

      printf("Escolha um atributo:\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Número de pontos turísticos\n");
      printf("5. Densidade demográfica\n");
      printf("6. Super Poder\n");
      scanf("%d", &primeiroAtributo);

  // Área para comparações entre as cartas

      switch (primeiroAtributo)
      {
      case 1:
            printf("# Você escolheu o atributo População #\n");
            resultado1 = populacaoA > populacaoB ? 1 : 0;    
      break;
      case 2:
            printf("# Você escolheu o atributo Área #\n");
            resultado1 = areaA > areaB ? 1 : 0;    
      break;
      case 3:
            printf("# Você escolheu o atributo PIB #\n");
            resultado1 = pibA > pibB ? 1 : 0;    
      break;
      case 4:
            printf("# Você escolheu o atributo Número de pontos turísticos #\n");
            resultado1 = pontostA > pontostB ? 1 : 0;    
      break;
      case 5:
            printf("# Você escolheu o atributo Densidade demográfica #\n");
            resultado1 = densidadeA < densidadeB ? 1 : 0;    
      break;
      case 6:
            printf("# Você escolheu o atributo Super Poder #\n");
            resultado1 = superpoderA > superpoderB ? 1 : 0;    
      break;
      default:
            printf("Opção inválida!\n");
      break;
      }

  // Área para escolha do 2º atributo

        printf("Escolha um atributo:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        printf("6. Super Poder\n");
        scanf("%d", &segundoAtributo);

      if (primeiroAtributo == segundoAtributo)
      {
        printf("Erro, você deve escolher atributos diferentes!\n");
      } else {
          switch (segundoAtributo)
      {
      case 1:
            printf("# Você escolheu o atributo População #\n");
            resultado2 = populacaoA > populacaoB ? 1 : 0;    
      break;
      case 2:
            printf("# Você escolheu o atributo Área #\n");
            resultado2 = areaA > areaB ? 1 : 0;    
      break;
      case 3:
            printf("# Você escolheu o atributo PIB #\n");
            resultado2 = pibA > pibB ? 1 : 0;    
      break;
      case 4:
            printf("# Você escolheu o atributo Número de pontos turísticos #\n");
            resultado2 = pontostA > pontostB ? 1 : 0;    
      break;
      case 5:
            printf("# Você escolheu o atributo Densidade demográfica #\n");
            resultado2 = densidadeA < densidadeB ? 1 : 0;    
      break;
      case 6:
            printf("# Você escolheu o atributo Super Poder #\n");
            resultado2 = superpoderA > superpoderB ? 1 : 0;    
      break;
      default:
            printf("Opção inválida!\n");
      break;
      }
        }
        
  //Área para o resultado das comparações entre os atributos

      printf("-----------------------------------\n");
      printf("%s x %s\n", cidadeA, cidadeB);
      switch (primeiroAtributo)
      {
      case 1:
        printf("População:\n");
        printf("Carta 1: %d | Carta 2: %d\n", populacaoA, populacaoB);
      break;
      case 2:
            printf("Área:\n");
            printf("Carta 1: %f | Carta 2: %f\n", areaA, areaB);
      break;
      case 3:
            printf("PIB:\n");
            printf("Carta 1: %f | Carta 2: %f\n", pibA, pibB);
      break;
      case 4:
            printf("Número de pontos turísticos:\n");
            printf("Carta 1: %d | Carta 2: %d\n", pontostA, pontostB);
      break;
      case 5:
            printf("Densidade demográfica:\n");
            printf("Carta 1: %f | Carta 2: %f\n", densidadeA, densidadeB);
      break;
      case 6: 
            printf("Super Poder:\n");
            printf("Carta 1: %f | Carta 2: %f\n", superpoderA, superpoderB);
      break;
      }

      switch (segundoAtributo)
      {
      case 1:
        printf("População:\n");
        printf("Carta 1: %d | Carta 2: %d\n", populacaoA, populacaoB);
      break;
      case 2:
            printf("Área:\n");
            printf("Carta 1: %f | Carta 2: %f\n", areaA, areaB);
      break;
      case 3:
            printf("PIB:\n");
            printf("Carta 1: %f | Carta 2: %f\n", pibA, pibB);
      break;
      case 4:
            printf("Número de pontos turísticos:\n");
            printf("Carta 1: %d | Carta 2: %d\n", pontostA, pontostB);
      break;
      case 5:
            printf("Densidade demográfica:\n");
            printf("Carta 1: %f | Carta 2: %f\n", densidadeA, densidadeB);
      break;
      case 6: 
            printf("Super Poder:\n");
            printf("Carta 1: %f | Carta 2: %f\n", superpoderA, superpoderB);
      break;
      }
    
      if (resultado1 && resultado2 == 1)
      {
        printf("Carta 1 venceu!\n");
        printf("-----------------------------------\n");
      } else if (resultado1 && resultado2 == 0) {
        printf("Carta 2 venceu!\n");
        printf("-----------------------------------\n");
      } else {
        printf("Empatou!\n");
        printf("-----------------------------------\n");
      }
      
return 0;
} 
