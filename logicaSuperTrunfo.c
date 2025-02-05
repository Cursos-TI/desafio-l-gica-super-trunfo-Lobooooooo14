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
    long unsigned int city_2_population;
    float city_2_area;
    float city_2_GDP_total;
    int city_2_tourist_attractions;

    float city_2_population_density;
    float city_2_GDP_per_capita;
    float city_2_superpower;

    // city 1 input
    printf("Digite o código da cidade 1: ");
    scanf("%s", city_1_code);
    printf("Digite o nome da cidade 1: ");
    scanf("%s", city_1_name);
    printf("Digite a população da cidade 1: ");
    scanf("%lu", &city_1_population);
    printf("Digite a área da cidade 1: ");
    scanf("%f", &city_1_area);
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &city_1_GDP_total);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &city_1_tourist_attractions);

    printf("\n**********\n\n");

    // city 2 input
    printf("Digite o código da cidade 2: ");
    scanf("%s", city_2_code);
    printf("Digite o nome da cidade 2: ");
    scanf("%s", city_2_name);
    printf("Digite a população da cidade 2: ");
    scanf("%lu", &city_2_population);
    printf("Digite a área da cidade 2: ");
    scanf("%f", &city_2_area);
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &city_2_GDP_total);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &city_2_tourist_attractions);

    city_1_population_density = city_1_population / city_1_area;
    city_1_GDP_per_capita = city_1_GDP_total / city_1_population;
    city_1_superpower = city_1_population + city_1_area + city_1_GDP_total + city_1_tourist_attractions;

    city_2_population_density = city_2_population / city_2_area;
    city_2_GDP_per_capita = city_2_GDP_total / city_2_population;
    city_2_superpower = city_2_population + city_2_area + city_2_GDP_total + city_2_tourist_attractions;

    // menu
    int escolha;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super poder\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        if (city_1_population > city_2_population)
            printf("%s vence em população!\n", city_1_name);
        else
            printf("%s vence em população!\n", city_2_name);
        break;
    case 2:
        if (city_1_area > city_2_area)
            printf("%s tem maior área!\n", city_1_name);
        else
            printf("%s tem maior área!\n", city_2_name);
        break;
    case 3:
        if (city_1_GDP_total > city_2_GDP_total)
            printf("%s tem maior PIB!\n", city_1_name);
        else
            printf("%s tem maior PIB!\n", city_2_name);
        break;
    case 4:
        if (city_1_tourist_attractions > city_2_tourist_attractions)
            printf("%s tem mais pontos turísticos!\n", city_1_name);
        else
            printf("%s tem mais pontos turísticos!\n", city_2_name);
        break;
    case 5:
        if (city_1_population_density < city_2_population_density)
            printf("%s tem menor densidade populacional!\n", city_1_name);
        else
            printf("%s tem menor densidade populacional!\n", city_2_name);
        break;
    case 6:
        if (city_1_GDP_per_capita > city_2_GDP_per_capita)
            printf("%s tem maior PIB per capita!\n", city_1_name);
        else
            printf("%s tem maior PIB per capita!\n", city_2_name);
        break;
    case 7:
        if (city_1_superpower > city_2_superpower)
            printf("%s é a cidade mais poderosa!\n", city_1_name);
        else
            printf("%s é a cidade mais poderosa!\n", city_2_name);
        break;
    default:
        printf("Opção inválida!\n");
    }

    return 0;
}
