#include <stdio.h>
#include <stdlib.h>

int main()
{
    // CALCULATING AREA AND CIRCUMFERENCE OF CIRCLE
    float pi = 3.14159;
    int radius;
    float area;
    float circumference;

    printf("Enter the radius of a circle:\n");
    scanf("%d", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area of the circle = %6.2f\n", area);
    printf("Circumference of the circle = %6.3f\n", circumference);
}
