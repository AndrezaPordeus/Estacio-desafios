#include <stdio.h>

int main() {
    
    // Declaração de Variáveis para a Carta 1
    char estado1[3];                // Armazena a letra que representa o estado 
    char codigo1[4];                // Armazena o código da carta 
    char cidade1[50];               // Armazena o nome da cidade
    unsigned long int populacao1;   // Armazena o número de habitantes
    float area1;                    // Armazena a área em km²
    float pib1;                     // Armazena o Produto Interno Bruto
    int pontosTuristicos1;          // Armazena a quantidade de pontos turísticos
    float densidadePopulacional1;   // Armazena o valor da densidade populacional
    float pibPerCapita1;            // Armazena o valor do PIB Per Capita
    float densidadeInversa1;
    float superPoder1; 
  
    // Declaração de Variáveis para a Carta 2
    char estado2[3];                // Armazena a letra que representa o estado
    char codigo2[4];                // Armazena o código da carta
    char cidade2[50];               // Armazena o nome da cidade
    unsigned long int populacao2;   // Armazena o número de habitantes
    float area2;                    // Armazena a área em km²
    float pib2;                     // Armazena o Produto Interno Bruto
    int pontosTuristicos2;          // Armazena a quantidade de pontos turísticos
    float densidadePopulacional2;   // Armazena o valor da densidade populacional
    float pibPerCapita2;            // Armazena o valor do PIB Per Capita
    float densidadeInversa2;
    float superPoder2;

    // Coleta de Dados para a Carta 1 
    printf("--- Carta 1 ---:\n");

    // Pede e lê a letra do estado.
    printf("Digite o Estado: \n");
    scanf("%s", estado1);  

    // Pede e lê o código da carta.
    printf("Código da Carta: \n");
    scanf("%s", codigo1);

    // Pede e lê o nome da cidade.
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    // Pede e lê a área. 
    printf("Qual a área em km²? \n");
    scanf("%f", &area1);

    // Pede e lê a população.
    printf("Qual a população? \n");
    scanf("%lu", &populacao1);

    // Pede e lê o PIB.
    printf("Qual o PIB? \n");
    scanf("%f", &pib1);

    // Pede e lê a quantidade de pontos turísticos.
    printf("Qual o número de pontos turísticos? \n");
    scanf("%d", &pontosTuristicos1);

    // Calcula a densidade populacional. 
    densidadePopulacional1 = populacao1 / area1;

    // Calcula o PIB per capita. 
    pibPerCapita1 = pib1 / populacao1;
    
    // Calcula a densidade inversa.
    densidadeInversa1 = area1 / (float)populacao1;

    // Calcula o Super poder.
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + densidadeInversa1;

    // --- Coleta de Dados para a Carta 2 ---
    printf("--- Carta 2 ---:\n");

    // Pede e lê a letra do estado.
    printf("Digite o Estado: \n");
    scanf("%s", estado2); 

    // Pede e lê o código da carta.
    printf("Código da Carta: \n");
    scanf("%s", codigo2);

    // Pede e lê o nome da cidade.
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    // Pede e lê a área.
    printf("Qual a área em km²? \n");
    scanf("%f", &area2);

    // Pede e lê a população.
    printf("Qual a população? \n");
    scanf("%lu", &populacao2);

    // Pede e lê o PIB.
    printf("Qual o PIB? \n");
    scanf("%f", &pib2);

    // Pede e lê a quantidade de pontos turísticos.
    printf("Qual o número de pontos turísticos? \n");
    scanf("%d", &pontosTuristicos2);

    // Calcula a densidade populacional.
    densidadePopulacional2 = populacao2 / area2;

    // Calcula o PIB per capita. 
    pibPerCapita2 = pib2 / populacao2;
    
    // Calcula a densidade inversa.
    densidadeInversa2 = area2 / (float)populacao2;

    // Calcula o Super poder.
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + densidadeInversa2;

    // Imprime um resumo formatado com todas as informações da Carta 1.
    printf(" Carta 1:\n Estado: %s\n Código da Carta: %s\n Nome da Cidade: %s\n Área: %.2f km2\n População: %lu\n PIB: %2f milhões de reais\n Número de pontos turísticos: %d\n Densidade populacional: %.2f hab/km²\n", estado1, codigo1, cidade1, area1, populacao1, pib1, pontosTuristicos1);

    // Imprime um resumo formatado com todas as informações da Carta 2.
    printf("Carta 2:\n Estado: %s\n Código da Carta: %s\n Nome da Cidade: %s\n Área: %.2f km2\n População: %lu\n PIB: %.2f milhões de reais\n Número de pontos turísticos: %d\n Densidade populacional: %.2fhab/km²\n",  estado2, codigo2, cidade2, area2, populacao2, pib2, pontosTuristicos2);

    //Compara os atributos 
    printf("\n--- Comparações ---\n"); 
    
    printf("População: %s\n", (populacao1 > populacao2) ? "Carta 1 vence" : (populacao1 < populacao2) ? "Carta 2 vence" : "Empate");

    printf("Área: %s\n", (area1 > area2) ? "Carta 1 vence" : (area1 < area2) ? "Carta 2 vence" : "Empate");

    printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 vence" : (pib1 < pib2) ? "Carta 2 vence" : "Empate");

    printf("PIB per capita: %s\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1 vence" : (pibPerCapita1 < pibPerCapita2) ? "Carta 2 vence" : "Empate");

    printf("Pontos turísticos: %s\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1 vence" : (pontosTuristicos1 < pontosTuristicos2) ? "Carta 2 vence" : "Empate");

    printf("Densidade populacional: %s\n", (densidadePopulacional1 < densidadePopulacional2) ? "Carta 1 vence" : (densidadePopulacional1 > densidadePopulacional2) ? "Carta 2 vence" : "Empate");

    printf("Super poder: %s\n", (superPoder1 < superPoder2) ? "Carta 1 vence" : (superPoder1 > superPoder2) ? "Carta 2 vence" : "Empate");

    return 0;
}

