#include <stdio.h>

int main() {

	//Variáveis Carta_01
    char estado1;
    char codigo1[5];
    char cidade1[50];
    long int populacao1;
    float area1;
    float pib1;
    int ponto_turistico1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

	//Variáveis carta_02
    char estado2;
    char codigo2[5];
    char cidade2[50];
    long int populacao2;
    float area2;
    float pib2;
    int ponto_turistico2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

	//Variáveis_Comparação
    int resultado_populacao;
    int resultado_area;
    int resultado_pib;
    int resultado_ponto_turistico;
    int resultado_densidade_populacional;
    int resultado_pib_per_capita;
    int resultado_super_poder;


    printf("---Digite os Dados da Carta 01---\n");

    printf("Estado de A até H: \n");
    scanf(" %c", &estado1);

    printf("Código Carta 01: \n");
    scanf("%s", &codigo1);

    printf("Cidade Carta 01: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%li", &populacao1);

    printf("Área Total: \n");
    scanf("%f", &area1);
   
    printf("PiB Total: \n");
    scanf("%f", &pib1);

    printf("Número Pontos Turistico: \n");
    scanf("%d", &ponto_turistico1);

    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) pib1 / populacao1;
    super_poder1 = (float) populacao1 + area1 + ponto_turistico1 + densidade_populacional1 + pib_per_capita1;

    printf("\n");

//Ler dados da carta 2
    printf("-----Digite os dados da carta 2-----\n");

    printf("Estado de A até H: \n");
    scanf(" %c", &estado2);

    printf("Código Carta 02): \n");
    scanf("%s", &codigo2);

    printf("Cidade Carta 2: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%li", &populacao2);

    printf("Área Total: \n");
    scanf("%f", &area2);
   
    printf("PiB Total: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &ponto_turistico2);

    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;
    super_poder2 = (float) populacao2 + area2 + ponto_turistico2 + densidade_populacional2 + pib_per_capita2;

    printf("\n");

	//Dados da carta 1
printf("-------Dados carta 1-------\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %li\n", populacao1);
    printf("Área em km²: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de ponto turístico: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita : R$ %.2f\n", pib_per_capita1);
    printf("Super poder: %f\n", super_poder1);

    printf("\n");

	//Dados carta 2
    printf("-------Dados carta 2-------\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %li\n", populacao2);
    printf("Área em km²: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de ponto turístico: %d\n", ponto_turistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Super poder: %f\n", super_poder2);

    printf("\n");

	//Dados das cartas
    resultado_populacao = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_ponto_turistico = ponto_turistico1 > ponto_turistico2;
    resultado_densidade_populacional = densidade_populacional1 < densidade_populacional2;
    resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    resultado_super_poder = super_poder1 > super_poder2;



   printf("---Comparação entre Cartas, se resultado for 1, carta 1 venceu, se for 0, carta 2 venceu----\n");

   printf("População: %d\n", resultado_populacao);
   printf("Àrea: %d\n", resultado_area);
   printf("Pib: %d\n", resultado_pib);
   printf("Pontos túristicos: %d\n", resultado_ponto_turistico);
   printf("Densidade populacional: %d\n", resultado_densidade_populacional);
   printf("PIB per Capita: %d\n", resultado_pib_per_capita);
   printf("Super poder: %d\n", resultado_super_poder);



    return 0;
}
