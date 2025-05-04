#include <stdio.h>

int main(){

    // Declaração das variáveis
    int populacao, populacao2, pontosturisticos,pontosturisticos2;
    float pib, pib2, area, area2,densidade1, densidade2,pibpercapita, pibpercapita2;
    char estado[2], estado2[2], cidade[15], cidade2[15], codigocarta[4], codigocarta2[4];

    // Imprime mensagem de boas vindas e informação do cadastro da primeira carta
    printf("BEM VINDO\nVAMOS CADASTRAR A PRIMEIRA CARTA!\n"); 

    printf("\nDigite a sigla que representara o estado: ");
    scanf("%s", &estado);

    printf("Digite a letra do seu estado e um codigo entre 01 e 04, (ex: A01, B03): ");
    scanf("%s", &codigocarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Quantos habitantes tem essa cidade: ");
    scanf("%d", &populacao);

    printf("Qual é a área dessa cidade: ");
    scanf("%f", &area);

    printf("Qual é o valor do PIB desta cidade: ");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos possui esta cidade: ");
    scanf("%d", &pontosturisticos);

    // Imprime mensagem informando incicio do cadastro da segunda carta
    printf("\nAGORA VAMOS CADASTRAR A SEGUNDA CARTA!\n");

    printf("Digite a sigla que representara o estado: "); 
    scanf("%s", &estado2);

    printf("Digite a letra do seu estado e um codigo entre 01 e 04, (ex: A01, B03): ");
    scanf("%s", &codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Quantos habitantes tem essa cidade: ");
    scanf("%d", &populacao2);

    printf("Qual é a área dessa cidade: ");
    scanf("%f", &area2);

    printf("Qual é o valor do PIB desta cidade: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos possui esta cidade: ");
    scanf("%d", &pontosturisticos2);
 
    
    densidade1 = populacao / area; //Calcular e armazenar os dados Densidade Populacional da Carta 1.
    densidade2 = populacao2 / area2; //Calcular e armazenar os dados Densidade Populacional da Carta 2.
    pibpercapita = pib / populacao; //Calcular e armazenar os dados do PIB per capita da Carta 1.
    pibpercapita2 = pib2 / populacao2; //Calcular e armazenar os dados do PIB per capita da Carta 2.

    // Imprime os dados de densidade populacional e PIB per capita da Carta 1 e 2.
    printf("\n A Densidade Populacional da Carta 1 é %.2f habitantes por KM²", densidade1);
    printf("\n O PIB per capita da Carta 1 é R$ %.2f\n", pibpercapita);
    printf("\n Densidade Populacional da Carta 2 é %.2f habitantes por KM²", densidade2);
    printf("\n O PIB per capita da Carta 2 é R$ %.2f\n", pibpercapita2);

    printf("\nComaparação de Cartas - Atributo - POPULAÇÃO\n");

    // Imprime os dados de Cidade, Estado e do atributo População das cartas 1 e 2.
    printf("Carta 1 - %s (%s): %d Habitantes\n", cidade, estado, populacao);
    printf("Carta 2 - %s (%s): %d Habitantes\n", cidade2, estado2, populacao2);

    // Comparando as carta e informando o  ganhador.
    if (populacao>populacao2){
        printf("\nRESULTADO:\nCarta 1 - %s  - VENCEU", cidade);
    }else{
        printf("\nRESULTADO:\nCarta 2 - %s  - VENCEU", cidade2);
    }

    return 0;
}