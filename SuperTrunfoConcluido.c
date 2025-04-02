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

//Carta número 2

    char estado2 [25];
    char codigo2 [25];
    char cidade2 [25];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidadepopulacional2;
    float PIBpercapita2;

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
    printf("O PIB per capita é: %.9f\n\n", PIBpercapita2);

// Escolha do atributo para comparação

float atributo1 = pib1;
float atributo2 = pib2;
char atributoNome[] = "PIB";
int carta1Vence = atributo1 > atributo2;

// Exibindo os resultados da comparação

    printf("** Comparação de Cartas (Atributo: %s) ** :\n\n", atributoNome);
    printf("Carta 01 - %s (%s): %.1f\n", cidade1, estado1, atributo1);
    printf("Carta 02 - %s (%s): %.1f\n\n", cidade2, estado2, atributo2);

if (carta1Vence) {
    printf("## Resultado: Carta 01 (%s) venceu! ##\n", cidade1);
} else if (atributo1 < atributo2) {
    printf("## Resultado: Carta 02 (%s) venceu! ##\n", cidade2);
} else {
    printf("## Resultado: Empate! ##\n");
}

    return 0;

}