
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //Declaração das variáveis 

    //Carta1
    char estado1;
    char codigo1[5];
    char nomeCidade1[25];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densPopulacional1;
    float pibPerCapita1;
    float superPoder1;

    //Carta2
    char estado2;
    char codigo2[5];
    char nomeCidade2[25];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densPopulacional2;
    float pibPerCapita2;
    float superPoder2;



    //Lendo dados - Carta 1
    printf("Cadastrando Carta 1: \n");
    printf("Código o estado: ");
    scanf("%c", &estado1);
    printf("Código da carta: ");
    scanf("%s", &codigo1);
    printf("Nome da cidade: ");
    scanf("%s", &nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    densPopulacional1 = populacao1 / area1;      //Cálculo densidade populacional 1
    pibPerCapita1 = pib1/populacao1;             //Cálculo PIB per Capita 1

    
    //Mostrando dados - Carta 1
    printf("\nDados cadastrados da Carta 1: \n");
    printf("Código o estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Area: %.2f m²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densPopulacional1);
    printf("PIB per Capita: %.2f \n\n", pibPerCapita1);

    //Lendo dados - Carta 2
    printf("Cadastrando Carta 2: \n");
    printf("Código o estado: ");
    scanf(" %c", &estado2);
    printf("Código da carta: ");
    scanf("%s", &codigo2);
    printf("Nome da cidade: ");
    scanf("%s", &nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    densPopulacional2 = populacao2 / area2;    //Cálculo densidade populacional 2
    pibPerCapita2 = pib2/populacao2;          //Cálculo  PIB per Capita 2

    //Mostrando dados - Carta 2
    printf("\nDados cadastrados da Carta 2: \n");
    printf("Código o estado: %c\n", estado2); 
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f m²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densPopulacional2);
    printf("PIB per Capita: %.2f \n\n", pibPerCapita2);

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1/densPopulacional1);     //Cálculo do Super Poder - carta 1
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1/densPopulacional2);     //Cálculo do Super Poder - carta 2

    
    printf("Comparação de Cartas: \n");                  //Iniciando comparação dos atributos das cartas
    
    if(populacao1 > populacao2)
        printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    else  
         printf("População: Carta 2 venceu (%d)\n", populacao1 > populacao2);
    

    if(area1 > area2)
        printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    else
        printf("Área: Carta 2 venceu (%d)\n", area1 > area2);
    

    if(pib1 > pib2)
        printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    else
        printf("PIB: Carta 2 venceu (%d)\n", pib1 > pib2);


    if(pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    else
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    

    if(densPopulacional1 < densPopulacional2)                                                          //Comparação invertida dedivo à propriedade inversa do valor
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", densPopulacional1 < densPopulacional2);
    else
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", densPopulacional1 < densPopulacional2);
    
    
    if(pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    else
        printf("PIB per Capita: Carta 2 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);

    
    if(superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
    else
    printf("Super Poder: Carta 2 venceu (%d)\n", superPoder1 > superPoder2);
        
    
    
    return 0;
}
