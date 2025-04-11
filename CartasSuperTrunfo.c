#include <stdio.h>

int main() {
    char estado [10], codigo [15], cidade [50];
    int populacao, numeros;
    float area, pib;

    printf ("Carta 1: \n");

    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Codigo da carta: \n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area em km²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &numeros);

    printf("Carta 1: \n");
    printf("Estado: %s \n" , estado);
    printf("Código da Carta: %s \n" , codigo);
    printf("Nome da cidade: %s \n" , cidade);
    printf("População: %d \n" , populacao);
    printf("Área em km²: %f \n" , area);
    printf("PIB: %f \n" , pib);
    printf("Números de pontos turisticos: %d \n" , numeros);

    printf ("Carta 2: \n");

    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Codigo da carta: \n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area em km²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &numeros);

    return 0;
}
