#include <stdio.h>

int main() {
    // =========================
    // CARTA 1 - DADOS PRÉ-DEFINIDOS
    // =========================
    char pais1[] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.00;
    float pib1 = 2170000000.00;
    int pontosTuristicos1 = 35;
    float densidade1;

    // =========================
    // CARTA 2 - DADOS PRÉ-DEFINIDOS
    // =========================
    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.00;
    float pib2 = 640000000.00;
    int pontosTuristicos2 = 28;
    float densidade2;

    // Variável para armazenar a escolha do usuário no menu
    int opcao;

    // =========================
    // CÁLCULO DA DENSIDADE DEMOGRÁFICA
    // Fórmula: população / área
    // =========================
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // =========================
    // MENU INTERATIVO
    // =========================
    printf("=====================================\n");
    printf("       SUPER TRUNFO - PAISES\n");
    printf("=====================================\n");

    printf("\nCartas disponíveis:\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n", pais2);

    printf("\nEscolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    printf("\n=====================================\n");
    printf("        RESULTADO DA COMPARACAO\n");
    printf("=====================================\n");

    // =========================
    // SWITCH PARA ESCOLHER O ATRIBUTO
    // =========================
    switch (opcao) {
        case 1:
            printf("Atributo escolhido: Populacao\n\n");

            printf("Carta 1 - %s: %d habitantes\n", pais1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", pais1);
            } else {
                if (populacao2 > populacao1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", pais2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        case 2:
            printf("Atributo escolhido: Area\n\n");

            printf("Carta 1 - %s: %.2f km2\n", pais1, area1);
            printf("Carta 2 - %s: %.2f km2\n", pais2, area2);

            if (area1 > area2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", pais1);
            } else {
                if (area2 > area1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", pais2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n\n");

            printf("Carta 1 - %s: %.2f\n", pais1, pib1);
            printf("Carta 2 - %s: %.2f\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", pais1);
            } else {
                if (pib2 > pib1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", pais2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        case 4:
            printf("Atributo escolhido: Numero de pontos turisticos\n\n");

            printf("Carta 1 - %s: %d pontos turisticos\n", pais1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pontos turisticos\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", pais1);
            } else {
                if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", pais2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade demografica\n\n");

            printf("Carta 1 - %s: %.2f hab/km2\n", pais1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km2\n", pais2, densidade2);

            // Regra especial:
            // Na densidade demográfica, vence quem tiver o MENOR valor.
            if (densidade1 < densidade2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", pais1);
            } else {
                if (densidade2 < densidade1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", pais2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        default:
            printf("Opcao invalida! Escolha uma opcao entre 1 e 5.\n");
            break;
    }

    return 0;
}
