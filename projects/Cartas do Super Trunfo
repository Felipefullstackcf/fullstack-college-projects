#include <stdio.h>

int main() {
    // =========================
    // DECLARAÇÃO DAS VARIÁVEIS
    // =========================

    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Propriedades calculadas da Carta 1
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Propriedades calculadas da Carta 2
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Resultados das comparações
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDensidade;
    int resultadoPibPerCapita;
    int resultadoSuperPoder;

    // =========================
    // CADASTRO DA CARTA 1
    // =========================

    printf("Cadastro da Carta 1\n");

    printf("Estado de A a H: ");
    scanf(" %c", &estado1);

    printf("Codigo da carta, exemplo A01: ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area em km2: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // =========================
    // CADASTRO DA CARTA 2
    // =========================

    printf("\nCadastro da Carta 2\n");

    printf("Estado de A a H: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta, exemplo B02: ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area em km2: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =========================
    // VALIDAÇÃO BÁSICA
    // =========================

    if (area1 <= 0 || area2 <= 0 || populacao1 == 0 || populacao2 == 0) {
        printf("\nErro: area e populacao devem ser maiores que zero.\n");
        return 1;
    }

    // =========================
    // CÁLCULOS DA CARTA 1
    // =========================

    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;

    superPoder1 = (float) populacao1
                + area1
                + pib1
                + (float) pontosTuristicos1
                + pibPerCapita1
                + (1.0f / densidadePopulacional1);

    // =========================
    // CÁLCULOS DA CARTA 2
    // =========================

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;

    superPoder2 = (float) populacao2
                + area2
                + pib2
                + (float) pontosTuristicos2
                + pibPerCapita2
                + (1.0f / densidadePopulacional2);

    // =========================
    // EXIBIÇÃO DOS DADOS
    // =========================

    printf("\n==============================\n");
    printf("Dados da Carta 1\n");
    printf("==============================\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n==============================\n");
    printf("Dados da Carta 2\n");
    printf("==============================\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // =========================
    // COMPARAÇÃO DAS CARTAS
    // =========================

    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;

    // Na densidade populacional, vence a menor
    resultadoDensidade = densidadePopulacional1 < densidadePopulacional2;

    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    // =========================
    // EXIBIÇÃO DAS COMPARAÇÕES
    // =========================

    printf("\n==============================\n");
    printf("Comparacao de Cartas\n");
    printf("==============================\n");

    printf("Populacao: %s venceu (%d)\n",
           resultadoPopulacao ? "Carta 1" : "Carta 2",
           resultadoPopulacao);

    printf("Area: %s venceu (%d)\n",
           resultadoArea ? "Carta 1" : "Carta 2",
           resultadoArea);

    printf("PIB: %s venceu (%d)\n",
           resultadoPib ? "Carta 1" : "Carta 2",
           resultadoPib);

    printf("Pontos Turisticos: %s venceu (%d)\n",
           resultadoPontosTuristicos ? "Carta 1" : "Carta 2",
           resultadoPontosTuristicos);

    printf("Densidade Populacional: %s venceu (%d)\n",
           resultadoDensidade ? "Carta 1" : "Carta 2",
           resultadoDensidade);

    printf("PIB per Capita: %s venceu (%d)\n",
           resultadoPibPerCapita ? "Carta 1" : "Carta 2",
           resultadoPibPerCapita);

    printf("Super Poder: %s venceu (%d)\n",
           resultadoSuperPoder ? "Carta 1" : "Carta 2",
           resultadoSuperPoder);

    return 0;
}
