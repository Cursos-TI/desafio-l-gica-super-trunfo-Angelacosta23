#include <stdio.h>

int main() {
    // Variáveis das duas cidades
    char codigoA[4], codigoB[4];
    char nomeA[50], nomeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    float densidadeA, densidadeB;
    float pibPerCapitaA, pibPerCapitaB;
    int pontosA = 0, pontosB = 0;

    // Cadastro da primeira cidade
    printf("=== Cadastro da Primeira Cidade ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigoA);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeA);
    printf("Digite a população: ");
    scanf("%d", &populacaoA);
    printf("Digite a área (em km²): ");
    scanf("%f", &areaA);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pibA);

    // Cadastro da segunda cidade
    printf("\n=== Cadastro da Segunda Cidade ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigoB);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeB);
    printf("Digite a população: ");
    scanf("%d", &populacaoB);
    printf("Digite a área (em km²): ");
    scanf("%f", &areaB);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pibB);

    // Cálculos adicionais
    densidadeA = populacaoA / areaA;
    densidadeB = populacaoB / areaB;
    pibPerCapitaA = (pibA * 1000000000) / populacaoA; // PIB em bilhões → reais por habitante
    pibPerCapitaB = (pibB * 1000000000) / populacaoB;

    // Comparação de atributos
    printf("\n=== Comparação das Cidades ===\n");

    // População
    if (populacaoA > populacaoB) {
        printf("População: %s venceu.\n", nomeA);
        pontosA++;
    } else if (populacaoB > populacaoA) {
        printf("População: %s venceu.\n", nomeB);
        pontosB++;
    } else {
        printf("População: Empate.\n");
    }

    // Área
    if (areaA > areaB) {
        printf("Área: %s venceu.\n", nomeA);
        pontosA++;
    } else if (areaB > areaA) {
        printf("Área: %s venceu.\n", nomeB);
        pontosB++;
    } else {
        printf("Área: Empate.\n");
    }

    // PIB total
    if (pibA > pibB) {
        printf("PIB: %s venceu.\n", nomeA);
        pontosA++;
    } else if (pibB > pibA) {
        printf("PIB: %s venceu.\n", nomeB);
        pontosB++;
    } else {
        printf("PIB: Empate.\n");
    }

    // PIB per capita
    if (pibPerCapitaA > pibPerCapitaB) {
        printf("PIB per capita: %s venceu.\n", nomeA);
        pontosA++;
    } else if (pibPerCapitaB > pibPerCapitaA) {
        printf("PIB per capita: %s venceu.\n", nomeB);
        pontosB++;
    } else {
        printf("PIB per capita: Empate.\n");
    }

    // Densidade demográfica (menor é melhor)
    if (densidadeA < densidadeB) {
        printf("Densidade demográfica: %s venceu (menos habitantes por km²).\n", nomeA);
        pontosA++;
    } else if (densidadeB < densidadeA) {
        printf("Densidade demográfica: %s venceu (menos habitantes por km²).\n", nomeB);
        pontosB++;
    } else {
        printf("Densidade demográfica: Empate.\n");
    }

    // Exibição detalhada dos dados
    printf("\n=== Dados das Cidades ===\n");
    printf("%s (%s):\n", nomeA, codigoA);
    printf("  População: %d\n", populacaoA);
    printf("  Área: %.2f km²\n", areaA);
    printf("  PIB: %.2f bilhões\n", pibA);
    printf("  PIB per capita: R$ %.2f\n", pibPerCapitaA);
    printf("  Densidade demográfica: %.2f hab/km²\n", densidadeA);

    printf("\n%s (%s):\n", nomeB, codigoB);
    printf("  População: %d\n", populacaoB);
    printf("  Área: %.2f km²\n", areaB);
    printf("  PIB: %.2f bilhões\n", pibB);
    printf("  PIB per capita: R$ %.2f\n", pibPerCapitaB);
    printf("  Densidade demográfica: %.2f hab/km²\n", densidadeB);

    // Resultado final
    printf("\n=== Resultado Final ===\n");
    if (pontosA > pontosB) {
        printf("🏆 A cidade vencedora é: %s (%d pontos)\n", nomeA, pontosA);
    } else if (pontosB > pontosA) {
        printf("🏆 A cidade vencedora é: %s (%d pontos)\n", nomeB, pontosB);
    } else {
        printf("🤝 Empate geral! Ambas as cidades têm %d pontos.\n", pontosA);
    }

    return 0;
}
