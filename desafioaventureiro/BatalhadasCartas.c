#include <stdio.h>
#include <string.h>

// Função para repetir o jogo
int desejaContinuar() {
    char resposta;
    printf("\nDeseja jogar novamente? (s/n): ");
    scanf(" %c", &resposta);
    return (resposta == 's' || resposta == 'S');
}

int main() {
    do {
        // Variáveis da cidade A (carta A01)
        char estadoA[50];
        int codigoEstadoA;
        char cidadeA[50];
        int populacaoA;
        int areaA;
        int PIB_A;
        float densidadeA;
        float PIBperCapitaA;
        int pontosTuristicosA;

        // Variáveis da cidade B (carta B02)
        char estadoB[50];
        int codigoEstadoB;
        char cidadeB[50];
        int populacaoB;
        int areaB;
        int PIB_B;
        float densidadeB;
        float PIBperCapitaB;
        int pontosTuristicosB;

        // Entrada dos dados da carta A
        printf("\n=== Batalha de Cartas ===\n\n");
        printf("Carta A01:\n");
        printf("Digite o estado: ");
        scanf("%s", estadoA);

        printf("Codigo do estado: ");
        scanf("%d", &codigoEstadoA);

        printf("Digite a cidade: ");
        scanf(" %s", cidadeA);

        printf("Digite a populacao: ");
        scanf("%d", &populacaoA);

        printf("Digite a area (km²): ");
        scanf("%d", &areaA);

        printf("Digite o PIB (milhoes): ");
        scanf("%d", &PIB_A);

        printf("Digite a densidade populacional (hab/km²): ");
        scanf("%f", &densidadeA);

        printf("Digite o PIB per capita (mil): ");
        scanf("%f", &PIBperCapitaA);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicosA);

        // Entrada dos dados da carta B
        printf("\nCarta B02:\n");
        printf("Digite o estado: ");
        scanf("%s", estadoB);

        printf("Codigo do estado: ");
        scanf("%d", &codigoEstadoB);

        printf("Digite a cidade: ");
        scanf(" %s", cidadeB);

        printf("Digite a populacao: ");
        scanf("%d", &populacaoB);

        printf("Digite a area (km²): ");
        scanf("%d", &areaB);

        printf("Digite o PIB (milhoes): ");
        scanf("%d", &PIB_B);

        printf("Digite a densidade populacional (hab/km²): ");
        scanf("%f", &densidadeB);

        printf("Digite o PIB per capita (mil): ");
        scanf("%f", &PIBperCapitaB);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicosB);

        // Impressão dos dados (resumo)
        printf("\n=== Dados das Cartas ===\n");
        printf("Carta A01 - Cidade: %s | Estado: %s\n", cidadeA, estadoA);
        printf("Carta B02 - Cidade: %s | Estado: %s\n", cidadeB, estadoB);

        // Escolha do atributo para batalha
        int escolha;
        printf("\nEscolha o atributo para a batalha:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB per Capita\n");
        printf("6 - Pontos Turisticos\n");
        printf("Opcao: ");
        scanf("%d", &escolha);

        // Comparação dos atributos
        printf("\nResultado da batalha:\n");

        switch (escolha) {
            case 1:
                printf("Populacao A01: %d | B02: %d\n", populacaoA, populacaoB);
                printf("Carta com maior populacao: %s\n", (populacaoA > populacaoB) ? "A01" : "B02");
                break;
            case 2:
                printf("Area A01: %d | B02: %d\n", areaA, areaB);
                printf("Carta com maior area: %s\n", (areaA > areaB) ? "A01" : "B02");
                break;
            case 3:
                printf("PIB A01: %d | B02: %d\n", PIB_A, PIB_B);
                printf("Carta com maior PIB: %s\n", (PIB_A > PIB_B) ? "A01" : "B02");
                break;
            case 4:
                printf("Densidade A01: %.2f | B02: %.2f\n", densidadeA, densidadeB);
                printf("Carta com maior densidade: %s\n", (densidadeA > densidadeB) ? "A01" : "B02");
                break;
            case 5:
                printf("PIB per Capita A01: %.2f | B02: %.2f\n", PIBperCapitaA, PIBperCapitaB);
                printf("Carta com maior PIB per capita: %s\n", (PIBperCapitaA > PIBperCapitaB) ? "A01" : "B02");
                break;
            case 6:
                printf("Pontos Turisticos A01: %d | B02: %d\n", pontosTuristicosA, pontosTuristicosB);
                printf("Carta com mais pontos turisticos: %s\n", (pontosTuristicosA > pontosTuristicosB) ? "A01" : "B02");
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }

    } while (desejaContinuar());

    return 0;
}
