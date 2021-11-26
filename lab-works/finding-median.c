#include <stdio.h>
#include <stdlib.h>

// FINDING MEDIAN

int median(int number1, int number2, int number3);

int main()
{
    int count = 0;

    int number1, number2, number3;
    printf("Enter three numbers:\n");
    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);

    median(number1,number2,number3);

}

int median(int number1, int number2, int number3) {
    if (number1 > number2 && number1 < number3) {
        printf("The median of %d, %d and %d is %d", number1,number2,number3,number1);
    }
    else if (number1 > number3 && number1 < number2) {
        printf("The median of %d, %d and %d is %d", number1,number2,number3,number1);
    }
    else if (number2 > number1 && number2 < number3) {
        printf("The median of %d, %d and %d is %d", number1,number2,number3,number2);
    }
    else if (number2 > number3 && number2 < number1) {
        printf("The median of %d, %d and %d is %d", number1,number2,number3,number2);
    }
    else if (number3 > number1 && number3 < number2) {
        printf("The median of %d, %d and %d is %d", number1,number2,number3,number3);
    }
    else if (number3 > number2 && number3 < number1) {
        printf("The median of %d, %d and %d is %d", number1,number2,number3,number3);
    }
}
