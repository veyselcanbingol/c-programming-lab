#include <stdio.h>
#include <stdlib.h>

int main()
{


    // ODD-EVEN NUMBERS
    int count, even, odd, number;
    count = 1;
    odd = 0;
    even = 0;

    while(count <= 10) {
        printf("Enter the %d. number : ", count);
        count++;
        scanf("%d", &number);

        if (number % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    printf("# of even numbers: %d\n", even);
    printf("# of odd numbers: %d", odd);
}
