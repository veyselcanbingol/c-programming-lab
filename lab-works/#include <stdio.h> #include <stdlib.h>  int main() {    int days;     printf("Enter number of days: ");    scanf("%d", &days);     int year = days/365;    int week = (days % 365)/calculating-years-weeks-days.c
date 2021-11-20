#include <stdio.h>
#include <stdlib.h>

int main()
{
   // CALCULATING YEARS, WEEKS, DAYS
   int days;

   printf("Enter number of days: ");
   scanf("%d", &days);

   int year = days / 365;
   int week = (days % 365) / 7;
   int day = (days % 365) % 7;


   printf("%d days = %d year, %d week, %d day", days, year, week, day);
   return 0;
}
