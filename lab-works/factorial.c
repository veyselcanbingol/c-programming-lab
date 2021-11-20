#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Factorial

    int number, result, i;

    result = 1;

    printf("Enter A Number:");
    scanf("%d", &number);

    if (number == 0) {
        printf("%d! = %d", number, result);
        return 0;
    }
    for (i=1; i<=number; i++) {
        result=result*i;
    }
    printf("%d! = %d", number,result);    
}
