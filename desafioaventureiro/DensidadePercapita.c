#include <stdio.h>

int main() {
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

    // Entrada dos dados da primeira cidade
    printf("=== Desafio Xadrez ===\n\n");
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

    // Entrada dos dados da segunda cidade
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

    // Impressão dos dados da cidade A
    printf("\n=== Dados da Carta A01 ===\n");
    printf("Estado: %s\n", estadoA);
    printf("Codigo do Estado: %d\n", codigoEstadoA);
    printf("Cidade: %s\n", cidadeA);
    printf("Populacao: %d\n", populacaoA);
    printf("Area: %d km²\n", areaA);
    printf("PIB: %d milhoes\n", PIB_A);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeA);
    printf("PIB per Capita: %.2f mil\n", PIBperCapitaA);
    printf("Pontos Turisticos: %d\n", pontosTuristicosA);

    // Impressão dos dados da cidade B
    printf("\n=== Dados da Carta B02 ===\n");
    printf("Estado: %s\n", estadoB);
    printf("Codigo do Estado: %d\n", codigoEstadoB);
    printf("Cidade: %s\n", cidadeB);
    printf("Populacao: %d\n", populacaoB);
    printf("Area: %d km²\n", areaB);
    printf("PIB: %d milhoes\n", PIB_B);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeB);
    printf("PIB per Capita: %.2f mil\n", PIBperCapitaB);
    printf("Pontos Turisticos: %d\n", pontosTuristicosB);

    return 0;
}