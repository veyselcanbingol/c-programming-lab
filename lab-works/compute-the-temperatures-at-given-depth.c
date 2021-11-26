#include <stdio.h>
#include <stdlib.h>

// COMPUTE THE TEMPERATURE AT GIVEN DEPTH IN DEGREES CELCIUS AND DEGREES FAHRENHEIT

float celcius_at_depth(int depth);
float fahrenheit(float celcius);

int main()
{
    int depth;

    printf("Enter the depth: ");
    scanf("%d", &depth);

    float celcius = celcius_at_depth(depth);
    float fahrenheit_v = fahrenheit(celcius);

    printf("\nCelcius degree %.2f\n", celcius);
    printf("Fahrenheit degree %.2f\n", fahrenheit_v);
}

float celcius_at_depth(int depth) {
        return(10 * depth + 20);
    }

float fahrenheit(float celcius) {
        return(1.8 * celcius + 32);
    }
