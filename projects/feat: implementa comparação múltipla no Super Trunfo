#include <stdio.h>

int main() {
    // =========================
    // CARTA 1 - DADOS PRÉ-CADASTRADOS
    // =========================
    char pais1[] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.00;
    float pib1 = 2170000000.00;
    int pontosTuristicos1 = 35;
    float densidade1;

    // =========================
    // CARTA 2 - DADOS PRÉ-CADASTRADOS
    // =========================
    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.00;
    float pib2 = 640000000.00;
    int pontosTuristicos2 = 28;
    float densidade2;

    // Opções escolhidas pelo usuário
    int opcao1;
    int opcao2;

    // Controle de validação
    int opcaoValida1 = 0;
    int opcaoValida2 = 0;

    // Nomes dos atributos escolhidos
    const char *nomeAtributo1;
    const char *nomeAtributo2;

    // Valores dos atributos escolhidos para cada carta
    float valorCarta1Atributo1;
    float valorCarta2Atributo1;
    float valorCarta1Atributo2;
    float valorCarta2Atributo2;

    // Soma final dos atributos
    float somaCarta1;
    float somaCarta2;

    // Vencedores individuais
    int vencedorAtributo1;
    int vencedorAtributo2;

    // =========================
    // CÁLCULO DA DENSIDADE DEMOGRÁFICA
    // Fórmula: população / área
    // =========================
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // =========================
    // APRESENTAÇÃO INICIAL
    // =========================
    printf("=====================================\n");
    printf("       SUPER TRUNFO - PAISES\n");
    printf("=====================================\n");

    printf("\nCartas em disputa:\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n", pais2);

    // =========================
    // PRIMEIRO MENU
    // =========================
    do {
        printf("\nEscolha o PRIMEIRO atributo para comparacao:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Numero de pontos turisticos\n");
        printf("5 - Densidade demografica\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao1);

        switch (opcao1) {
            case 1:
                nomeAtributo1 = "Populacao";
                valorCarta1Atributo1 = populacao1;
                valorCarta2Atributo1 = populacao2;
                opcaoValida1 = 1;
                break;

            case 2:
                nomeAtributo1 = "Area";
                valorCarta1Atributo1 = area1;
                valorCarta2Atributo1 = area2;
                opcaoValida1 = 1;
                break;

            case 3:
                nomeAtributo1 = "PIB";
                valorCarta1Atributo1 = pib1;
                valorCarta2Atributo1 = pib2;
                opcaoValida1 = 1;
                break;

            case 4:
                nomeAtributo1 = "Numero de pontos turisticos";
                valorCarta1Atributo1 = pontosTuristicos1;
                valorCarta2Atributo1 = pontosTuristicos2;
                opcaoValida1 = 1;
                break;

            case 5:
                nomeAtributo1 = "Densidade demografica";
                valorCarta1Atributo1 = densidade1;
                valorCarta2Atributo1 = densidade2;
                opcaoValida1 = 1;
                break;

            default:
                printf("\nOpcao invalida! Escolha uma opcao entre 1 e 5.\n");
                opcaoValida1 = 0;
                break;
        }

    } while (opcaoValida1 == 0);

    // =========================
    // SEGUNDO MENU DINÂMICO
    // O atributo escolhido no primeiro menu não aparece novamente
    // =========================
    do {
        printf("\nEscolha o SEGUNDO atributo para comparacao:\n");

        if (opcao1 != 1) {
            printf("1 - Populacao\n");
        }

        if (opcao1 != 2) {
            printf("2 - Area\n");
        }

        if (opcao1 != 3) {
            printf("3 - PIB\n");
        }

        if (opcao1 != 4) {
            printf("4 - Numero de pontos turisticos\n");
        }

        if (opcao1 != 5) {
            printf("5 - Densidade demografica\n");
        }

        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao2);

        if (opcao2 == opcao1) {
            printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes.\n");
            opcaoValida2 = 0;
        } else {
            switch (opcao2) {
                case 1:
                    nomeAtributo2 = "Populacao";
                    valorCarta1Atributo2 = populacao1;
                    valorCarta2Atributo2 = populacao2;
                    opcaoValida2 = 1;
                    break;

                case 2:
                    nomeAtributo2 = "Area";
                    valorCarta1Atributo2 = area1;
                    valorCarta2Atributo2 = area2;
                    opcaoValida2 = 1;
                    break;

                case 3:
                    nomeAtributo2 = "PIB";
                    valorCarta1Atributo2 = pib1;
                    valorCarta2Atributo2 = pib2;
                    opcaoValida2 = 1;
                    break;

                case 4:
                    nomeAtributo2 = "Numero de pontos turisticos";
                    valorCarta1Atributo2 = pontosTuristicos1;
                    valorCarta2Atributo2 = pontosTuristicos2;
                    opcaoValida2 = 1;
                    break;

                case 5:
                    nomeAtributo2 = "Densidade demografica";
                    valorCarta1Atributo2 = densidade1;
                    valorCarta2Atributo2 = densidade2;
                    opcaoValida2 = 1;
                    break;

                default:
                    printf("\nOpcao invalida! Escolha uma opcao disponivel no menu.\n");
                    opcaoValida2 = 0;
                    break;
            }
        }

    } while (opcaoValida2 == 0);

    // =========================
    // COMPARAÇÃO INDIVIDUAL DO PRIMEIRO ATRIBUTO
    // Se for densidade, vence o menor valor
    // Nos demais atributos, vence o maior valor
    // =========================
    if (opcao1 == 5) {
        if (valorCarta1Atributo1 < valorCarta2Atributo1) {
            vencedorAtributo1 = 1;
        } else {
            if (valorCarta2Atributo1 < valorCarta1Atributo1) {
                vencedorAtributo1 = 2;
            } else {
                vencedorAtributo1 = 0;
            }
        }
    } else {
        if (valorCarta1Atributo1 > valorCarta2Atributo1) {
            vencedorAtributo1 = 1;
        } else {
            if (valorCarta2Atributo1 > valorCarta1Atributo1) {
                vencedorAtributo1 = 2;
            } else {
                vencedorAtributo1 = 0;
            }
        }
    }

    // =========================
    // COMPARAÇÃO INDIVIDUAL DO SEGUNDO ATRIBUTO
    // =========================
    if (opcao2 == 5) {
        if (valorCarta1Atributo2 < valorCarta2Atributo2) {
            vencedorAtributo2 = 1;
        } else {
            if (valorCarta2Atributo2 < valorCarta1Atributo2) {
                vencedorAtributo2 = 2;
            } else {
                vencedorAtributo2 = 0;
            }
        }
    } else {
        if (valorCarta1Atributo2 > valorCarta2Atributo2) {
            vencedorAtributo2 = 1;
        } else {
            if (valorCarta2Atributo2 > valorCarta1Atributo2) {
                vencedorAtributo2 = 2;
            } else {
                vencedorAtributo2 = 0;
            }
        }
    }

    // =========================
    // SOMA DOS DOIS ATRIBUTOS
    // Conforme o enunciado, somamos os valores escolhidos
    // =========================
    somaCarta1 = valorCarta1Atributo1 + valorCarta1Atributo2;
    somaCarta2 = valorCarta2Atributo1 + valorCarta2Atributo2;

    // =========================
    // EXIBIÇÃO DO RESULTADO
    // =========================
    printf("\n=====================================\n");
    printf("        RESULTADO DA COMPARACAO\n");
    printf("=====================================\n");

    printf("\nPaises comparados:\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n", pais2);

    printf("\nAtributos escolhidos:\n");
    printf("1 - %s\n", nomeAtributo1);
    printf("2 - %s\n", nomeAtributo2);

    printf("\nValores do primeiro atributo: %s\n", nomeAtributo1);
    printf("Carta 1 - %s: %.2f\n", pais1, valorCarta1Atributo1);
    printf("Carta 2 - %s: %.2f\n", pais2, valorCarta2Atributo1);

    printf("Vencedor no atributo %s: %s\n",
           nomeAtributo1,
           vencedorAtributo1 == 1 ? pais1 :
           vencedorAtributo1 == 2 ? pais2 : "Empate");

    printf("\nValores do segundo atributo: %s\n", nomeAtributo2);
    printf("Carta 1 - %s: %.2f\n", pais1, valorCarta1Atributo2);
    printf("Carta 2 - %s: %.2f\n", pais2, valorCarta2Atributo2);

    printf("Vencedor no atributo %s: %s\n",
           nomeAtributo2,
           vencedorAtributo2 == 1 ? pais1 :
           vencedorAtributo2 == 2 ? pais2 : "Empate");

    printf("\nSoma dos atributos:\n");
    printf("Carta 1 - %s: %.2f\n", pais1, somaCarta1);
    printf("Carta 2 - %s: %.2f\n", pais2, somaCarta2);

    printf("\nResultado final: %s\n",
           somaCarta1 > somaCarta2 ? "Carta 1 venceu!" :
           somaCarta2 > somaCarta1 ? "Carta 2 venceu!" : "Empate!");

    return 0;
}
