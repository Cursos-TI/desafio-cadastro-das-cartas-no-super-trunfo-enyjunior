
#include <stdio.h>

int main() {  

    //Programa C, onde o usário insere dados de duas cartas do Super Trunfo
   
    //VARIÁVEIS_CARTA_01

    char codcart01[03], estado01[03];
    char cidade01[50];
    int pop01, pontot01;
    float area01, pib01;

    //VARIÁVEIS_CARTA_02

    char codcart02[03], estado02[03];
    char cidade02[50];
    int pop02, pontot02;
    float area02, pib02;

    //Etapa de solicitação de inserção de dados Carta_01

    printf("Insira os dados da Carta 01 \n");

    printf("Digite o Código Estado: \n");
    scanf("%s", estado01);

    printf("Digite o Código: \n");
    scanf("%s", codcart01);

    //No campo cidade, deverá utilizar "_" entre nomes compostos

    printf("Digite nome da Cidade: \n"); 
    scanf("%s", cidade01);

    printf("Insira a População: \n");
    scanf("%d", &pop01);

    printf("Insira á Àrea em KM²: \n");
    scanf("%f", &area01);

    printf("Insira o PIB: \n");
    scanf("%f", &pib01);

    printf("Insira Nº de Pontos Turisticos: \n");
    scanf("%d", &pontot01);

    printf("\n");
    printf("-------------------------------------------\n\n");

    //Etapa de solicitação de inserção de dados Carta_02

    printf("Insira os dados da Carta 02 \n");

    printf("Digite o Código Estado: \n");
    scanf("%s", estado02);

    printf("Digite o Código: \n");
    scanf("%s", codcart02);
    
    //No campo cidade, deverá utilizar "_" entre nomes compostos

    printf("Digite nome da Cidade: \n");
    scanf("%s", cidade02);

    printf("Insira a População: \n");
    scanf("%d", &pop02);

    printf("Insira á Àrea em KM²: \n");
    scanf("%f", &area02);

    printf("Insira o PIB: \n");
    scanf("%f", &pib02);

    printf("Insira Nº de Pontos Turisticos: \n");
    scanf("%d", &pontot02);

    printf("\n");
    printf("-------------------------------------------\n\n");

    //Exibição dos dados inseridos nas váriaveis - Carta_01

    printf("Carta 01 \n");
    printf("Cógido do Estado: %s\n", estado01);
    printf("Código: %s\n", codcart01);
    printf("Nome do Cidade: %s\n", cidade01);
    printf("População: %d\n", pop01);
    printf("Área - Km²: %5.2f\n", area01);
    printf("PIB - Bilhões de reais: %5.2f\n", pib01);
    printf("Nº de Pontos Turisiticos: %d\n", pontot01);

    printf("\n");
    printf("-------------------------------------------\n\n");

    //Exibição dos dados inseridos nas váriaveis - Carta_02

    printf("Carta 01 \n");
    printf("Cógido do Estado: %s\n", estado02);
    printf("Código: %s\n", codcart02);
    printf("Nome do Cidade: %s\n", cidade02);
    printf("População: %d\n", pop02);
    printf("Área - Km²: %5.2f\n", area02);
    printf("PIB - Bilhões de reais: %5.2f\n", pib02);
    printf("Nº de Pontos Turisiticos: %d\n", pontot02);

    return 0;

}
  
