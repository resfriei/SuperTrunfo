#include <stdio.h>

    int main() {

        printf("** Programa Ler Idades ** \n");
        printf("\n");
        
        char nome1 [5], nome2 [5];
        int idade1, idade2;
        float media;
        
        printf("* Dados da primeira pessoa: *\n");
        printf("Digite o nome: \n");
        scanf("%s", &nome1);

        printf("Digite a idade: \n");
        scanf("%d", &idade1);

        printf("* Dados da segunda pessoa: *\n");
        printf("Digite o nome: \n");
        scanf("%s", &nome2);

        printf("Digite a idade: \n");
        scanf("%d", &idade2);

    //media de idades

        media = (float)(idade1 + idade2) / 2;


        printf("O nome é: %s \n", nome1);
        printf("A idade é: %d \n", idade1);

        printf("O nome é: %s \n", nome2);
        printf("A idade é: %d \n", idade2);

        printf("A media de idade deles é: %.1f", media);
        
        
        return 0;
    }