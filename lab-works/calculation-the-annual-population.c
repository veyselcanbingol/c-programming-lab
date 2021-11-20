#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // CALCULATION THE ANNUAL POPULATION 

    float population, percentage, threshold, amount_of_increase;
    int threshold_value = 0;
    int year = 0;

    printf("Enter the population:\n");
    scanf("%f", &population);

    printf("Enter the percentage:\n");
    scanf("%f", &percentage);

    printf("Enter the threshold:\n");
    scanf("%f", &threshold);
    printf("\n");
    while (population <= threshold) {
        amount_of_increase = (population * percentage) / 100;
        population += amount_of_increase;
        population = round(population);
        threshold_value++;
        year++;
        printf("amount of increase: %.2f, population after %d. year: %.0f\n", amount_of_increase,year,  population);

    }

    printf("\nTotal years to surpass the threshold value: %d\n", threshold_value);
}
