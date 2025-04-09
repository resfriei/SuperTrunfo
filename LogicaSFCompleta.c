#include <stdio.h>

int main(){
    printf("JOGOS DE CARTA SUPER TRUNFO \n\n");

//Declarações das variáveis

//Carta número 1

    char estado1 [25];
    char codigo1 [25];
    char cidade1 [25];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidadepopulacional1;
    float PIBpercapita1;

//Carta número 2

    char estado2 [25];
    char codigo2 [25];
    char cidade2 [25];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidadepopulacional2;
    float PIBpercapita2;

//Coleta de dados da carta número 1

    printf("** Dados da carta número 1 **\n");

    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: BA): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Área (em km²): \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    printf("A primeira carta foi cadastrada com sucesso!\n\n");

//Coleta de dados da carta número 2

    printf("** Dados da carta número 2 **\n");

    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: RJ): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Área (em km²): \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);
    
    printf("A segunda carta foi cadastrada com sucesso!\n\n");

//Calculo da densidade populacional das cartas 1 e 2

    densidadepopulacional1 = (float) populacao1 / area1;

    densidadepopulacional2 = (float) populacao2 / area2;

//Calculo do PIB per capita das cartas 1 e 2

    PIBpercapita1 = (float) pib1 / populacao1;
    PIBpercapita2 = (float) pib2 / populacao2;


//Exibindo as informações das cartas 1 e 2

//Carta 01

    printf("* Carta 01 * \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("A densidade populacional é: %.2f\n", densidadepopulacional1);
    printf("O PIB per capita é: %.9f\n\n", PIBpercapita1);

//Carta 02

    printf("* Carta 02 * \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("A densidade populacional é: %.2f\n", densidadepopulacional2);
    printf("O PIB per capita é: %.9f\n\n", PIBpercapita2);

//Menu switch interativo

    int opcao1, opcao2, resultado1, resultado2, atributo;

    printf("==== SUPER TRUNFO ====\n\n");
    printf("### %s vs %s ###\n", cidade1, cidade2);
    printf("* Escolha um atributo para comparar: \n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional (vence o menor valor!)\n");
    scanf("%d", &opcao1);

    //Comparando as cartas

    switch (opcao1) {

        case 1:
            printf("\n* Comparando População *\n");
            printf("A população de %s é: %lu habitantes. A população de %s é: %lu habitantes.\n", cidade1, populacao1, cidade2, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;

        case 2:
            printf("\n* Comparando Área *\n");
            printf("A área de %s é: %f km². A área de %s é: %f km².\n", cidade1, area1, cidade2, area2);
            resultado1 = area1 > area2 ? 1 : 0;
            break;

        case 3:
            printf("\n* Comparando PIB *\n");
            printf("O PIB de %s é: %f. O PIB de %s é: %f\n", cidade1, pib1, cidade2, pib2);
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;

        case 4:
            printf("\n* Comparando Pontos Turísticos *\n");
            printf("%s tem %d pontos turísticos. %s tem %d pontos turísticos.\n", cidade1, pontos1, cidade2, pontos2);
            resultado1 = pontos1 > pontos2 ? 1 : 0;
            break;

        case 5:
            printf("\n* Comparando Densidade Populacional *\n");
            printf("A densidade populacional de %s é: %f. A densidade populacional de %s é: %f\n", cidade1, densidadepopulacional1, cidade2, densidadepopulacional2);
            resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
            break;

        default:
            printf("Atributo inválido!\n");
            break;
    }

        printf("* Escolha mais um atributo: \n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional (vence o menor valor!)\n");
        scanf("%d", &opcao2);

        if (opcao1 == opcao2) 
        {
        printf("Você escolheu o mesmo atributo!");
        } else {

        switch (opcao2) {
        
        case 1:
        printf("Você escolheu o atributo população.\n");
        printf("População de %s: %lu vs População de %s: %lu\n", cidade1, populacao1, cidade2, populacao2);
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
        printf("Você escolheu o atributo área.\n");
        printf("Área de %s: %.2f km² vs Área de %s: %.2f km²\n", cidade1, area1, cidade2, area2);
        resultado2 = area1 > area2 ? 1 : 0;
        break;

        case 3:
        printf("Você escolheu o atributo PIB.\n");
        printf("PIB de %s: R$ %.2f bilhões vs PIB de %s: R$ %.2f bilhões\n", cidade1, pib1, cidade2, pib2);
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:
        printf("Você escolheu o atributo pontos turísticos.\n");
        printf("Pontos turísticos de %s: %d vs Pontos turísticos de %s: %d\n", cidade1, pontos1, cidade2, pontos2);
        resultado2 = pontos1 > pontos2 ? 1 : 0;
        break;

        case 5:
        printf("Você escolheu o atributo densidade.\n");
        printf("Densidade populacional de %s: %.2f hab/km² vs Densidade populacional de %s: %.2f hab/km²\n", cidade1, densidadepopulacional1, cidade2, densidadepopulacional2);
        resultado2 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
        break;

        default:
        printf("Atributo inválido.\n");
        break;
    }}

    if (resultado1 && resultado2)
    {
        printf("%s Venceu!\n", cidade1);
    } else if (resultado1 != resultado2) {
        printf("A rodada empatou!\n");
    } else {
        printf("%s Venceu!\n", cidade2);
    }

    return 0;
}