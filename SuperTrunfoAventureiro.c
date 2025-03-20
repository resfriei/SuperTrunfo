#include <stdio.h>

int main(){
    printf("JOGOS DE CARTA SUPER TRUNFO \n\n");

//Declarações das variáveis

//Carta número 1

    char estado1 [25];
    char codigo1 [25];
    char cidade1 [25];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidadepopulacional1;
    float PIBpercapita1;
    float Super_Poder1;

//Carta número 2

    char estado2 [25];
    char codigo2 [25];
    char cidade2 [25];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidadepopulacional2;
    float PIBpercapita2;
    float Super_Poder2;


//Coleta de dados da carta número 1

    printf("** Dados da carta número 1 **\n");

    printf("Digite o estado (Letra de A a H): \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Aréa (em km²): \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    printf("A primeira carta foi cadastrada com sucesso!\n\n");

//Coleta de dados da carta número 2

    printf("** Dados da carta número 2 **\n");

    printf("Digite o estado (Letra de A a H): \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Aréa (em km²): \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);
    
    printf("A segunda carta foi cadastrada com sucesso!\n\n");

//Calculo da densidade populacional das cartas 1 e 2

    densidadepopulacional1 = (float) (populacao1 / area1);

    densidadepopulacional2 = (float) (populacao2 / area2);

//Calculo do PIB per capita das cartas 1 e 2

    PIBpercapita1 = (float) (pib1 / populacao1);
    PIBpercapita2 = (float) (pib2 / populacao2);

//Calculo de Super Poder das cartas 1 e 2

    Super_Poder1 = (float) populacao1 + area1 + pib1 + pontos1 + PIBpercapita1 + (1/densidadepopulacional1);
    Super_Poder2 = (float) populacao2 + area2 + pib2 + pontos2 + PIBpercapita2 + (1/densidadepopulacional2);


//Exibindo as informações das cartas 1 e 2

//Carta 01

    printf("* Carta 01 * \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.9f km²\n", area1);
    printf("PIB: %.9f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("A densidade populacional é: %.9f\n", densidadepopulacional1);
    printf("O PIB per capita é: %.9f\n", PIBpercapita1);
    printf("O super poder da carta 1 é de: %.1f\n", Super_Poder1);
    printf("\n");

//Carta 02

    printf("* Carta 02 * \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.9f km²\n", area2);
    printf("PIB: %.9f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("A densidade populacional é: %.9f\n", densidadepopulacional2);
    printf("O PIB per capita é: %.9f\n", PIBpercapita2);
    printf("O super poder da carta 2 é de: %.1f\n\n", Super_Poder2);

//RESULTADO DO DUELO DAS CARTAS

    printf("*DUELANDO, A MELHOR CARTA VENCE: *\n\n");
    printf ("População...............:  Carta 1 venceu?  ( %d )\n", populacao1 > populacao2);
    printf ("Area....................:  Carta 1 venceu?  ( %d )\n", area1 > area2);
    printf ("PIB.....................:  Carta 1 venceu?  ( %d )\n", pib1 > pib2);
    printf ("Pontos Turisticos.......:  Carta 1 venceu?  ( %d )\n", pontos1 > pontos2);
    printf ("Densidade Populacional..:  Carta 1 venceu?  ( %d )\n", densidadepopulacional1 < densidadepopulacional2);
    printf ("PIB per Capita..........:  Carta 1 venceu?  ( %d )\n", PIBpercapita1 > PIBpercapita2);
    printf ("Super Poder.............:  Carta 1 venceu?  ( %d )\n", Super_Poder1 > Super_Poder2);
   
   
    return 0;
}