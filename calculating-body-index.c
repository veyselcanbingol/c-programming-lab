#include <stdio.h>
#include <stdlib.h>

int main()
{
    // CALCULATING BODY INDEX

    float weight;
    float height;
    float BMI;


    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    BMI = weight / (height * height);

    if (BMI < 18.5) {
        printf("Your body mass index is %.2f and you are underweight.", BMI);
    }
    else if (BMI >= 18.5 && BMI < 25) {
        printf("Your body mass index is %.2f and you are normal.", BMI);
    }
    else if (BMI >= 25 && BMI < 30) {
        printf("Your body mass index is %.2f and you are overweight.", BMI);
    }
    else if (BMI >= 30) {
        printf("Your body mass index is %.2f and you are obese.", BMI);
    }
}
