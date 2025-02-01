#include <stdio.h>

int main()
{
    // city 1
    char city_1_code[5];
    char city_1_name[50];
    long unsigned int city_1_population;
    float city_1_area;
    float city_1_GDP_total;
    int city_1_tourist_attractions;

    float city_1_population_density;
    float city_1_GDP_per_capita;
    float city_1_superpower;

    // city 2
    char city_2_code[5];
    char city_2_name[50];
    int city_2_population;
    float city_2_area;
    float city_2_GDP_total;
    int city_2_tourist_attractions;

    float city_2_population_density;
    float city_2_GDP_per_capita;
    float city_2_superpower;

    // city 1
    printf("Digite o código da cidade 1: ");
    scanf("%s", city_1_code);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", city_1_name);

    printf("Digite a população da cidade 1: ");
    scanf("%d", &city_1_population);

    printf("Digite a área da cidade 1: ");
    scanf("%f", &city_1_area);

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &city_1_GDP_total);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &city_1_tourist_attractions);

    printf("\n**********\n\n");

    // city 2
    printf("Digite o código da cidade 2: ");
    scanf("%s", city_2_code);

    printf("Digite o nome da cidade 2: ");
    scanf("%s", city_2_name);

    printf("Digite a população da cidade 2: ");
    scanf("%d", &city_2_population);

    printf("Digite a área da cidade 2: ");
    scanf("%f", &city_2_area);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &city_2_GDP_total);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &city_2_tourist_attractions);

    // city 1
    city_1_population_density = city_1_population / city_1_area;
    city_1_GDP_per_capita = city_1_GDP_total / city_1_population;
    city_1_superpower = city_1_population + city_1_area + city_1_GDP_total + city_1_tourist_attractions;

    // city 2
    city_2_population_density = city_2_population / city_2_area;
    city_2_GDP_per_capita = city_2_GDP_total / city_2_population;
    city_2_superpower = city_2_population + city_2_area + city_2_GDP_total + city_2_tourist_attractions;

    // city 1
    printf(
        "\nCidade: %s - [%s]\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade de População: %.2f\nPIB por Capita: %.2f\nSuper poder: %.2f\n",
        city_1_name,
        city_1_code,
        city_1_population,
        city_1_area,
        city_1_GDP_total,
        city_1_tourist_attractions,
        city_1_population_density,
        city_1_GDP_per_capita,
        city_1_superpower);

    // city 2
    printf(
        "\nCidade: %s - [%s]\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade de População: %.2f\nPIB por Capita: %.2f\nSuper poder: %.2f\n",
        city_2_name,
        city_2_code,
        city_2_population,
        city_2_area,
        city_2_GDP_total,
        city_2_tourist_attractions,
        city_2_population_density,
        city_2_GDP_per_capita,
        city_2_superpower);

    // winner
    if (city_1_population > city_2_population)
    {
        printf(
            "\n%s é a vencedora!\n", city_1_name);
    }
    else
    {
        printf(
            "\n%s é a vencedora!\n", city_2_name);
    }

    return 0;
}
