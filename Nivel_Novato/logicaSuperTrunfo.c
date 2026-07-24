#include <stdio.h>

int main()

{
  // Definição das variáveis para a carta 01
  char estado_01, codigo_01[5], cidade_01[50];
  int pontos_turisticos_01;
  unsigned long int populacao_01;
  float area_01, pib_01, densidade_01, pib_per_capita_01, superpoder_01;

  // Definição das variáveis para a carta 02
  char estado_02, codigo_02[5], cidade_02[50];
  int pontos_turisticos_02;
  unsigned long int populacao_02;
  float area_02, pib_02, densidade_02, pib_per_capita_02, superpoder_02;

  // Definição das variáveis de Comparação
  int resultado_pontos_turisticos, resultado_populacao, resultado_area, resultado_pib, resultado_densidade, resultado_pib_per_capita, resultado_superpoder;

  // Área para entrada de dados da carta 01
  printf("Informe os dados para o cadastro da carta 01: \n\n");

  printf("Digite uma letra de 'A' a 'H', que represente o Estado: ");
  scanf("%c", &estado_01);

  printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
  scanf("%s", codigo_01);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade_01);

  printf("Digite o número de habitantes: ");
  scanf("%lu", &populacao_01);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area_01);

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib_01);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &pontos_turisticos_01);

  // Área para entrada de dados da carta 02
  printf("\n\nInforme os dados para o cadastro da carta 02 \n\n");

  printf("Digite uma letra de 'A' a 'H', que represente o Estado: ");
  scanf(" %c", &estado_02);
  
  printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
  scanf(" %s", codigo_02);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade_02);

  printf("Digite o número de habitantes: ");
  scanf("%lu", &populacao_02);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area_02);

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib_02);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &pontos_turisticos_02);

  //Calculo de Densidade Populacional e PIB per Capita da Carta 01
  densidade_01 = (float) populacao_01 / area_01;
  pib_per_capita_01 = (pib_01 * 1000000000) / (float) populacao_01;

  //Calculo de Densidade Populacional e PIB per Capita da Carta 02
  densidade_02 = (float) populacao_02 / area_02;
  pib_per_capita_02 = (pib_02 * 1000000000) / (float) populacao_02;

  //Calculo de Super Poder da Cartas
  superpoder_01 = (float) populacao_01 + area_01 + pib_01 + (float) pontos_turisticos_01 + pib_per_capita_01 + (1 / densidade_01);
  superpoder_02 = (float) populacao_02 + area_02 + pib_02 + (float) pontos_turisticos_02 + pib_per_capita_02 + (1 / densidade_02);
  
  //Exibe os dados escolhidos para a carta 01
  printf("\n\nDados da Carta 01:\n");
  printf("Estado: %c\n", estado_01); 
  printf("Código: %s\n", codigo_01);
  printf("Nome da Cidade: %s\n", cidade_01);
  printf("População: %lu\n", populacao_01);
  printf("Área: %.2f km²\n", area_01);
  printf("PIB: %.2f Bilhões de Reais\n", pib_01);
  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos_01);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_01);
  printf("PIB per Capita: %.2f Reais\n", pib_per_capita_01);
  printf("Super Poder: %.2f\n", superpoder_01);
    
  //Exibe os dados escolhidos para a carta 02
  printf("\n\nDados da Carta 02:\n");
  printf("Estado: %c\n", estado_02); 
  printf("Código: %s\n", codigo_02);
  printf("Nome da Cidade: %s\n", cidade_02);
  printf("População: %lu\n", populacao_02);
  printf("Área: %.2f km²\n", area_02);
  printf("PIB: %.2f Bilhões de Reais\n", pib_02);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_02);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_02);
  printf("PIB per Capita: %.2f Reais\n", pib_per_capita_02);
  printf("Super Poder: %.2f\n", superpoder_02);

    // Compara o atributo Super Poder das Cartas
    printf("\nComparação de cartas (Atributo: Super Poder):\n");
    printf("\nCarta 01 - %s (%s): %.2f\n", cidade_01, codigo_01, superpoder_01);
    printf("Carta 02 - %s (%s): %.2f\n\n", cidade_02, codigo_02, superpoder_02);

    if (superpoder_01 > superpoder_02)
    {
        printf("Carta 01 - %s (%s) Venceu!!!\n", cidade_01, codigo_01);
    }
    
    else 
    {
        printf("Carta 02 - %s (%s) Venceu!!!\n", cidade_02, codigo_02);
    }

    return 0;
}
