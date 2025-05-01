#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar uma carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para exibir o menu
void exibirMenu() {
    printf("\n==== SUPER TRUNFO ====");
    printf("\n1. Iniciar Jogo");
    printf("\n2. Regras");
    printf("\n3. Sair\n");
    printf("Escolha uma opcao: ");
}

// Função para exibir as regras
void exibirRegras() {
    printf("\n=== REGRAS ===\n");
    printf("Cada jogador recebe uma carta com atributos.\n");
    printf("O jogador escolhe um atributo para comparar.\n");
    printf("Quem tiver o maior valor vence a rodada!\n");
    printf("Para Densidade Demográfica, vence o menor valor.\n");
}

// Função para comparar duas cartas
void compararCartas(Carta c1, Carta c2, int atributo) {
    printf("\nComparando %s vs %s\n", c1.nome, c2.nome);
    
    float valor1, valor2;
    switch (atributo) {
        case 1:
            printf("Atributo: Populacao\n");
            valor1 = c1.populacao;
            valor2 = c2.populacao;
            break;
        case 2:
            printf("Atributo: Area\n");
            valor1 = c1.area;
            valor2 = c2.area;
            break;
        case 3:
            printf("Atributo: PIB\n");
            valor1 = c1.pib;
            valor2 = c2.pib;
            break;
        case 4:
            printf("Atributo: Pontos Turisticos\n");
            valor1 = c1.pontos_turisticos;
            valor2 = c2.pontos_turisticos;
            break;
        case 5:
            printf("Atributo: Densidade Demografica\n");
            valor1 = c1.densidade_demografica;
            valor2 = c2.densidade_demografica;
            
            // Inverter regra: menor valor vence
            if (valor1 < valor2) {
                printf("%s vence!\n", c1.nome);
            } else if (valor1 > valor2) {
                printf("%s vence!\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            return;
        default:
            printf("Atributo invalido!\n");
            return;
    }

    if (valor1 > valor2) {
        printf("%s vence!\n", c1.nome);
    } else if (valor1 < valor2) {
        printf("%s vence!\n", c2.nome);
    } else {
        printf("Empate!\n");
    }
}

int main() {
    int opcao;
    Carta carta1 = {"Brasil", 212000000, 8515767, 2.05, 50, 24.9};
    Carta carta2 = {"Argentina", 45000000, 2780400, 0.51, 30, 16.2};
    
    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nEscolha um atributo para comparar:\n");
                printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
                int atributo;
                scanf("%d", &atributo);
                compararCartas(carta1, carta2, atributo);
                break;
            case 2:
                exibirRegras();
                break;
            case 3:
                printf("\nSaindo do jogo...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}