#include <stdio.h>

int main() {
    
    int carta1;
    char cidade1[50];
    char estado1;
    int populacao1;
    float area1;
    float pib1;
 
printf("Bem-vindo ao jogo Super Trunfo!\n");
printf("O objetivo sera comparar duas cidades em cartas, 'Carta 1 e Carta 2' com base em seus atributos.\n");
printf("\nVamos iniciar!\n");

    printf("\nEsta e a Carta 1\n");
    printf("Digite o CEP da cidade: \n");
    scanf("%d", &carta1);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1 );

    printf("Digite o estado em que ela se localiza: \n");
    scanf("%s", &estado1);

    printf("Digite a sua populacao: \n");
    scanf("%d", &populacao1 );

    printf("Digite o tamanho de sua area em km2: \n");
    scanf("%f", &area1 );

    printf("Digite o seu pib: \n");
    scanf("%f", &pib1 );




    int carta2;
    char cidade2[50];
    char estado2;
    int populacao2;
    float area2;
    float pib2;

    printf("\nEsta e a Carta 2\n");
    printf("Digite o CEP da cidade: \n");
    scanf("%d", &carta2);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2 );

    printf("Digite o estado em que ela se localiza: \n");
    scanf("%s", &estado2);

    printf("Digite a sua populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho de sua area em km2: \n");
    scanf("%f", &area2 );

    printf("Digite o seu pib: \n");
    scanf("%f", &pib2 );

    
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    printf("\nDensidade demografica da carta 1: %.2f\n", densidade1);
    printf("Densidade demografica da carta 2: %.2f\n", densidade2);


    float pib_per_capita1 = (float)pib1 / populacao1;
    float pib_per_capita2 = (float)pib2 / populacao2;

    printf("\nPib per capita da carta 1: %.2f\n", pib_per_capita1);
    printf("Pib per capita da carta 2: %.2f\n", pib_per_capita2);

    
return 0;
    } 
