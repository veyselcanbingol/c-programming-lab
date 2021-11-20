#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DETERMINING GIVEN NUMBER WHETHER DIVISIBLE BY 9 OR NOT

    int num, mod;
    int total = 0;

    printf("Enter an integer:\n");
    scanf("%d", &num);
    printf("\n");

    while (num > 0) {
        mod = num % 10;
        total += mod;
        num = num / 10;
    }

    printf("Sum of the digits: %d\n", total);

    if (total % 9 == 0) {
        printf("\nDivisible by 9: Yes\n");
    }
    else if (total % 9 != 0) {
        printf("\nDivisible by 9: No\n");
    }
}
