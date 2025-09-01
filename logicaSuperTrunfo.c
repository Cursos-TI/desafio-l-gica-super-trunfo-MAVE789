#include <stdio.h>

int main(){
    char estado1, estado2;
    char cod1[4], cod2[4];
    char cidade1[20], cidade2[20];
    int  pontot1, pontot2;
    float area1, area2, pib1, pib2;
    float percapita1, percapita2;
    float densidade1, densidade2;
    float superpoderA, superpoderB;
    unsigned long int pop1, pop2;

    //CARTA 1
    printf("digite o estado da carta 1 estado: ");
    scanf("%c", &estado1);
    printf("Digite o codigo da carta 1: ");
    scanf("%3s", cod1);
    printf("digite o nome da cidade da carta 1: ");
    scanf("%s", cidade1);
    printf("digite a população da carta 1: ");
    scanf("%lu", &pop1);
    printf("Qual a Area da carta 1: ");
    scanf("%f", &area1);
    printf("Qual o pib da cidade em bilhões de R$: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontot1);
    densidade1 = (float) pop1 / area1;
    percapita1 = (float) (pib1 / pop1) * 1000000000;

    //CARTA 2
    printf("digite o estado da carta 2 estado: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta 2: ");
    scanf("%3s", cod2);
    printf("digite o nome da cidade da carta 2: ");
    scanf("%s", cidade2);
    printf("digite a população da carta 2: ");
    scanf("%lu", &pop2);
    printf("Qual a Area da carta 2: ");
    scanf("%f", &area2);
    printf("Qual o pib da cidade em bilhões de R$: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontot2);
    densidade2 = (float) pop2 / area2;
    percapita2 = (float) (pib2 / pop2) * 1000000000; 


    //APRESENTAÇÃO DA CARTA 1
    printf("\n\n\nCARTA 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %c%s\n",estado1,cod1);
    printf("Nome da cidade: %s\n",cidade1);
    printf("População: %lu\n",pop1);
    printf("Area: %.2f Km2 \n",area1);
    printf("PIB : %.2f Bilhões de Reais \n",pib1);
    printf("Pontos turisticos: %d \n",pontot1);
    printf("Densidade populacional: %.2f \n",densidade1);
    printf("PIB per capita: R$%.2f \n",percapita1);

    //APRESENTAÇÃO DA CARTA 2
    printf("\n\nCARTA 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s\n",estado2,cod2);
    printf("Nome da cidade: %s\n",cidade2);
    printf("População: %lu\n",pop2);
    printf("Area: %.2f Km2 \n",area2);
    printf("PIB : %.2f Bilhões de Reais \n",pib2);
    printf("Pontos turisticos: %d \n",pontot2);
    printf("Densidade populacional: %.2f \n",densidade2);
    printf("PIB per capita: R$%.2f \n\n\n",percapita2);

    //DUELO DAS CARTAS
    superpoderA = (float) pop1 + area1 + pib1 + pontot1 + percapita1 + ( 1 / densidade1);
    superpoderB =(float) pop2 + area2 + pib2 + pontot2 + percapita2 + ( 1 / densidade2);

    printf("SE O RESULTADO FOR '1' A CARTA 1 VENCEU SE FOR '0' A CARTA 2 VENCEU.\n\n");

    printf("População: %d\n", pop1 > pop2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontot1 > pontot2);
    printf("Densidade Populacional: %d \n", densidade1 < densidade2);
    printf("PIB per capita: %d\n", percapita1 > percapita2);
    printf("Super Poder: %d\n", superpoderA > superpoderB);

     return 0;
}