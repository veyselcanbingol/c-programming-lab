#include <stdio.h> /* a header file which has the necessary information to include the input/output related functions in our program */
#include <stdlib.h> /* the header of the general purpose standard library of C programming language */

/* function main begins program execution */
int main(){

    printf("Which one method do you want to use? (Please enter a number!)\n"); /* prompt about program */
    printf("1- if OR if else statement(s) only\n"); /* prompt about program */
    printf("2- Use while statement(s) without sentinel\n"); /* prompt about program */
    printf("3- Use while statement(s) with sentinel\n"); /* prompt about program */

    int methodNumber; /* number of method */
    printf("Method Number: "); /* prompt for input */
    scanf("%d", &methodNumber); /* getting method number from user */

    if (methodNumber == 1) { /* if user chooses first method */
        int grade1, grade2, grade3; /* grades value */
        float total; /* sum of grades input by user */
        float average; /* average of grades */

        /* initialization phase */
        total = 0; /* initialize total */

        /* processing phase */
        printf("Enter Grade: "); /* prompt for input */
        scanf("%d", &grade1); /* getting first grade from user */
        /* grade controlling */
        if (grade1 < 0 || grade1 > 100) { /* if grade less than 0 or greater than 100 */
            printf("Wrong Grade Value Entered!"); /* display wrong entered to user */
            return 0; /* indicate program ended successfully */
            }
        else if (grade1 >= 0 || grade1 <= 100) { /* if grade greater than or equal to 0 OR less than or equal to 100 */
            total+=grade1; /* adding first grade to total value */
            }

        printf("Enter Grade: "); /* prompt for input */
        scanf("%d", &grade2); /* getting second grade from user */
        /* grade controlling */
        if (grade2 < 0 || grade2 >100) { /* if grade less than 0 or greater than 100 */
            printf("Wrong Grade Value Entered!"); /* display wrong entered to user */
            return 0; /* indicate program ended successfully */
            }
        else if (grade2 >= 0 || grade2 <= 100) { /* if grade greater than or equal to 0 OR less than or equal to 100 */
            total+=grade2; /* adding second grade to total value */
            }

        printf("Enter Grade: "); /* prompt for input */
        scanf("%d", &grade3); /* getting third grade from user */
        /* grade controlling */
        if (grade3 < 0 || grade3 >100) { /* if grade less than 0 or greater than 100 */
            printf("Wrong Grade Value Entered!"); /* display wrong entered to user */
            return 0; /* indicate program ended successfully */
            }
        else if (grade3 >= 0 || grade3 <= 100) { /* if grade greater than or equal to 0 OR less than or equal to 100 */
            total+=grade3; /* adding third grade to total value */
        }

        /* termination phase */
        average = total / 3; /* calculating average */
        printf("Class average is %1.2f\n", average); /* display result */
        }


    else if (methodNumber == 2) { /* if user chooses second method */
        int counter; /* number of grade to be entered next */
        int grade; /* grade value */
        float total; /* sum of grades input by user */
        float average; /* average of grades */

        /* initialization phase */
        total = 0; /* initialize total */
        counter = 0; /* initialize loop counter */

        while(counter <= 2) { /* loop 3 times */
            printf("Enter Grade: "); /* prompt for input */
            scanf("%d/n", &grade); /* getting first grade from user */

            if (grade < 0 || grade > 100) { /* if grade less than 0 or greater than 100 */
            printf("Wrong Grade Value Entered!\n"); /* display wrong entered to user */

            }
            else if (grade >= 0 || grade <= 100) { /* if grade greater than or equal to 0 OR less than or equal to 100 */
            total+=grade; /* adding first grade to total value */
            counter++; /* add 1 to counter */
            }

            }
            /* termination phase */
            average = total / 3; /* calculating average */
            printf("Class average is %1.2f\n", average); /* display result */

        }
    else if (methodNumber == 3) { /* if user choose third method */

        int counter; /* number of grade to be entered next */
        int grade; /* grade value */
        float total; /* sum of grades input by user */
        float average; /* average of grades */

        /* initialization phase */
        total = 0; /* initialize total */
        counter = 0; /* initialize loop counter */

        while(grade != -1){ /* loop while grade is not equal to -1 */
            printf("Enter Grade: "); /* prompt for input */
            scanf("%d/n", &grade); /* getting first grade from user */

            if (grade == -1) { /* if grade is equal to -1 */
            printf("Program is finishing!\n"); /* prompt "Program is finishing" to user */
            }

            else if (grade < 0 || grade > 100) { /* if grade less than 0 or greater than 100 */
            printf("Wrong Grade Value Entered!\n"); /* display wrong entered to user */
            }

            else if (grade >= 0 || grade <= 100) { /* if grade greater than or equal to 0 OR less than or equal to 100 */
            total+=grade; /* adding first grade to total value */
            counter++; /* add 1 to counter */
            }
            }
            /* termination phase */
            average = total / counter; /* calculating average */
            printf("Class average is %1.2f\n", average); /* display result */

    }
    else { /* an alternative statement that is executed if the result of a previous test condition evaluates to false */
        printf("Wrong Entered! Please start program again!\n"); /* prompt alert to user */
    }
    system("pause");
    return 0; /* indicate program ended successfully */
    }








