
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
    
    int escolha;
    

 
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


    printf("Escolha um dos números abaixo para iniciar a comparação: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Número de Pontos Turísticos \n");
    printf("5 - Densidade demográfica \n");

    scanf("%d", &escolha);   
                                                                
    switch (escolha) {                                                     //Implementando menu usando Switch-case
        case 1:
            printf("Duelo: %s  X  %s \n", nomeCidade1, nomeCidade2);
            printf("Atributo escolhido: População \n");
            printf("%s: %lu \n", nomeCidade1, populacao1);
            printf("%s: %lu \n", nomeCidade2, populacao2);

            if(populacao1 > populacao2)
                printf("Carta 1 venceu! \n");
            else
                if(populacao1 < populacao2)
                    printf("Carta 2 venceu! \n");
                else
                    printf("Empate! \n");
            break;
            
        
        case 2:
            printf("Duelo: %s  X  %s \n", nomeCidade1, nomeCidade2);
            printf("Atributo escolhido: Área \n");
            printf("%s: %.2f \n", nomeCidade1, area1);
            printf("%s: %.2f \n", nomeCidade2, area2);

            if(area1 > area2)
                printf("Carta 1 venceu! \n");
            else
                if(area1 < area2)
                    printf("Carta 2 venceu! \n");
                else
                    printf("Empate! \n");
            break;
                
        case 3:
            printf("Duelo: %s  X  %s \n", nomeCidade1, nomeCidade2);
            printf("Atributo escolhido: PIB \n");
            printf("%s: %.2f \n", nomeCidade1, pib1);
            printf("%s: %.2f \n", nomeCidade2, pib2);

            if(pib1 > pib2)
                printf("Carta 1 venceu! \n");
            else
                if(pib1 < pib2)
                    printf("Carta 2 venceu! \n");
                else
                    printf("Empate! \n");
            break;
            
        case 4:
            printf("Duelo: %s  X  %s \n", nomeCidade1, nomeCidade2);
            printf("Atributo escolhido: Pontos Turísticos \n");
            printf("%s: %d \n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d \n", nomeCidade2, pontosTuristicos2);

            if(pontosTuristicos1 > pontosTuristicos2)
                printf("Carta 1 venceu! \n");
            else
                if(pontosTuristicos1 < pontosTuristicos2)
                    printf("Carta 2 venceu! \n");
                else
                    printf("Empate! \n");
            break;

            
        case 5:
            printf("Duelo: %s  X  %s \n", nomeCidade1, nomeCidade2);
            printf("Atributo escolhido: Densidade Demográfica \n");
            printf("%s: %.2f \n", nomeCidade1, densPopulacional1);
            printf("%s: %.2f \n", nomeCidade2, densPopulacional2);

            if(densPopulacional1 < densPopulacional2)       //Neste caso, o menor vence
                printf("Carta 1 venceu! \n");
            else
                if(densPopulacional1 > densPopulacional2)
                    printf("Carta 2 venceu! \n");
                else
                    printf("Empate! \n");
            break;

        default:
            printf("Opção Inválida! \n");
            break;
        }

    
    
    return 0;

}
