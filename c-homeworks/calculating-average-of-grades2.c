#include <stdio.h> // a header file which has the necessary information to include the input/output related functions in our program
#include <stdlib.h> // the header of the general purpose standard library of C programming language

// function main begins program execution
int main()
{
    int count = 0; // count for grade of students
    int student_num = 1; // number of student
    int grade, total, average, letter_num, s_path; // other necessary integers (grade, total, average, letter number, second path(method))
    char letter_grade, path; // necessary characters for program (letter grade, path(method))
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
    printf("'a' - using pre-incremental\n"); // prompt for program
    printf("'b' - using post-incremental\n"); // prompt for program
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
    printf("Choose your path (a/b): "); // prompt for program
    scanf("%c", &path); // getting character to choose first path(method) from user

    switch (path) // switch statement for choose first path
    {
        case 'a': // case statement for choose 'a' path
            printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
            printf("1. while statement(s)\n"); // prompt for program
            printf("2. while statement(s) with break\n"); // prompt for program
            printf("3. do...while statement(s)\n"); // prompt for program
            printf("4. for statement(s)\n"); // prompt for program
            printf("5. for statement(s) with break\n"); // prompt for program
            printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
            printf("Choose your second path (1/2/3/4/5): "); // prompt for program
            scanf("%d", &s_path); // getting integer to choose second path(method) from user

            switch(s_path) { // switch statement for choose second path
                case 1: // case statement for choose 1. second path
                    while (count < 5) { // loop - while count less than 5
                        printf("Enter grade of student #%d: ", student_num); // prompt for user to show entered grade
                        scanf("%d", &grade); // getting grade from user
                        switch (grade > 100 || grade < 0) // switch statement if grade greater than 100 or grade less than 0
                        {
                            case 1: // case statement - if switch statement true
                                printf("Wrong format, check the grade again!\n"); // prompt to warn user for wrong format
                                break; // exit switch
                            case 0: // case statement - if switch statement false
                                letter_num = grade / 10; // grade divided by 10 to find letter of grade
                                switch (letter_num) { // switch statement to determine letter grade
                                    case 10: // case statement - when letter number is 10
                                        letter_grade = 'A'; // determine letter grade
                                        break; // exit switch
                                    case 9: // case statement - when letter number is 9
                                        letter_grade = 'A'; // determine letter grade
                                        break; // exit switch
                                    case 8: // case statement - when letter number is 8
                                        letter_grade = 'B'; // determine letter grade
                                        break; // exit switch
                                    case 7: // case statement - when letter number is 7
                                        letter_grade = 'C'; // determine letter grade
                                        break; // exit switch
                                    case 6: // case statement - when letter number is 6
                                        letter_grade = 'D'; // determine letter grade
                                        break; // exit switch
                                    case 5: // case statement - when letter number is 5
                                        letter_grade = 'E'; // determine letter grade
                                        break; // exit switch
                                    default: // when letter number is not 5,6,7,8,9
                                        letter_grade = 'F'; // determine letter grade
                                        break; // exit switch
                                }
                                printf("Student #%d's grade is %c\n", student_num, letter_grade); // prompt letter grade of student
                                ++count; // pre-increment - adding 1 to count
                                ++student_num; // pre-increment - adding 1 to student number
                                total+=grade; // calculating total of grades
                                break; // exit switch
                        }}
                        average = total / 5; // calculate average of grades
                        printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
                        printf("Class average (of 5 students) is %d\n", average); // prompt average of grades
                        system("pause"); // pausing the program
                        return 0; // finishing the program


                case 2: // case statement for choose 2. second path
                    while (1) { // infinitive loop - while true
                        printf("Enter grade of student #%d: ", student_num); // prompt for user to show entered grade
                        scanf("%d", &grade); // getting grade from user

                        if (grade <= 100 && grade >= 0) { // if grade less and equal to 100 and grade greater and equal to 0
                            letter_num = grade / 10; // grade divided by 10 to find letter of grade
                            switch (letter_num) // switch statement to determine letter grade
                            {
                                case 10: // case statement - when letter number is 10
                                    letter_grade = 'A'; // determine letter grade
                                    break; // exit switch
                                case 9: // case statement - when letter number is 9
                                    letter_grade = 'A'; // determine letter grade
                                    break; // exit switch
                                case 8: // case statement - when letter number is 8
                                    letter_grade = 'B'; // determine letter grade
                                    break; // exit switch
                                case 7: // case statement - when letter number is 7
                                    letter_grade = 'C'; // determine letter grade
                                    break; // exit switch
                                case 6: // case statement - when letter number is 6
                                    letter_grade = 'D'; // determine letter grade
                                    break; // exit switch
                                case 5: // case statement - when letter number is 5
                                    letter_grade = 'E'; // determine letter grade
                                    break; // exit switch
                                default: // when letter number is not 5,6,7,8,9
                                    letter_grade = 'F'; // determine letter grade
                                    break; // exit switch
                                    }
                            printf("Student #%d's grade is %c\n", student_num, letter_grade); // prompt letter grade of student
                            ++student_num; // pre-increment - adding 1 to student number
                            ++count; // pre-increment - adding 1 to count
                            total+=grade; // calculating total of grades
                        }
                        else { // else prompt warning
                            printf("Wrong format, check the grade again!\n"); // prompt to warn user for wrong format
                        }
                        if (count == 5) { // if count is equal to 5
                            break; // exit if statement
                        }}
                        average = total / (student_num - 1); // calculate average of grades
                        printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
                        printf("Class average (of %d students) is %d\n", student_num - 1, average); // prompt average of grades
                        system("pause"); // pausing the program
                        return 0; // finishing the program


                case 3: // case statement for choose 3. second path
                        do { // do statement
                            printf("Enter grade of student #%d: ", student_num); // prompt for user to show entered grade
                            scanf("%d", &grade); // getting grade from user
                            switch (grade > 100 || grade < 0) // switch statement if grade greater than 100 or grade less than 0
                            {
                                case 1: // case statement - if switch statement true
                                    printf("Wrong format, check the grade again!\n"); // prompt to warn user for wrong format
                                    break; // exit switch
                                case 0: // case statement - if switch statement false
                                    letter_num = grade / 10; // grade divided by 10 to find letter of grade
                                    switch (letter_num) { // switch statement to determine letter grade
                                        case 10: // case statement - when letter number is 10
                                            letter_grade = 'A'; // determine letter grade
                                            break; // exit switch
                                        case 9: // case statement - when letter number is 9
                                            letter_grade = 'A'; // determine letter grade
                                            break; // exit switch
                                        case 8: // case statement - when letter number is 8
                                            letter_grade = 'B'; // determine letter grade
                                            break; // exit switch
                                        case 7: // case statement - when letter number is 7
                                            letter_grade = 'C'; // determine letter grade
                                            break; // exit switch
                                        case 6: // case statement - when letter number is 6
                                            letter_grade = 'D'; // determine letter grade
                                            break; // exit switch
                                        case 5: // case statement - when letter number is 5
                                            letter_grade = 'E'; // determine letter grade
                                            break; // exit switch
                                        default: // when letter number is not 5,6,7,8,9
                                            letter_grade = 'F'; // determine letter grade
                                            break; // exit switch
                                    }
                                    printf("Student #%d's grade is %c\n", student_num, letter_grade); // prompt letter grade of student
                                    ++count; // pre-increment - adding 1 to count
                                    ++student_num; // pre-increment - adding 1 to student number
                                    total+=grade; // calculating total of grades
                                    break; // exit switch
                            }}
                        while (count < 5); // loop - while count less than 5
                        average = total / (student_num - 1); // calculate average of grades
                        printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
                        printf("Class average (of %d students) is %d\n", student_num - 1, average); // prompt average of grades
                        system("pause"); // pausing the program
                        return 0; // finishing the program

                case 4: // case statement for choose 4. second path
                    for (count = 0; count < 5; ++count) { // for statement - count is equal to 0. while count less than 5, add 1 one to count.
                        printf("Enter grade of student #%d: ", student_num); // prompt for user to show entered grade
                        scanf("%d", &grade); // getting grade from user
                        switch (grade > 100 || grade < 0) // switch statement if grade greater than 100 or grade less than 0
                        {
                            case 1: // case statement - if switch statement true
                                printf("Wrong format, check the grade again!\n"); // prompt to warn user for wrong format
                                --count; // extracting 1 from count
                                break; // exit switch
                            case 0: // case statement - if switch statement false
                                letter_num = grade / 10; // grade divided by 10 to find letter of grade
                                switch (letter_num) { // switch statement to determine letter grade
                                    case 10: // case statement - when letter number is 10
                                        letter_grade = 'A'; // determine letter grade
                                        break; // exit switch
                                    case 9: // case statement - when letter number is 9
                                        letter_grade = 'A'; // determine letter grade
                                        break; // exit switch
                                    case 8: // case statement - when letter number is 8
                                        letter_grade = 'B'; // determine letter grade
                                        break; // exit switch
                                    case 7: // case statement - when letter number is 7
                                        letter_grade = 'C'; // determine letter grade
                                        break; // exit switch
                                    case 6: // case statement - when letter number is 6
                                        letter_grade = 'D'; // determine letter grade
                                        break; // exit switch
                                    case 5: // case statement - when letter number is 5
                                        letter_grade = 'E'; // determine letter grade
                                        break; // exit switch
                                    default: // when letter number is not 5,6,7,8,9
                                        letter_grade = 'F'; // determine letter grade
                                        break; // exit switch
                                }
                                printf("Student #%d's grade is %c\n", student_num, letter_grade); // prompt letter grade of student
                                ++student_num; // pre-increment - adding 1 to student number
                                total+=grade; // calculating total of grades
                                break; // exit switch
                        }}
                        average = total / 5; // calculate average of grades
                        printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
                        printf("Class average (of 5 students) is %d\n", average); // prompt average of grades
                        system("pause"); // pausing the program
                        return 0; // finishing the program
                case 5: // case statement for choose 5. second path
                    for (;;){  // infinitive loop - for statement
                        printf("Enter grade of student #%d: ", student_num); // prompt for user to show entered gradev
                        scanf("%d", &grade); // getting grade from user

                        if (grade <= 100 && grade >= 0) { // if grade less and equal to 100 and grade greater and equal to 0
                            letter_num = grade / 10; // grade divided by 10 to find letter of grade
                            switch (letter_num) // switch statement to determine letter grade
                            {
                                case 10: // case statement - when letter number is 10
                                    letter_grade = 'A'; // determine letter grade
                                    break; // exit switch
                                case 9: // case statement - when letter number is 9
                                    letter_grade = 'A'; // determine letter grade
                                    break; // exit switch
                                case 8: // case statement - when letter number is 8
                                    letter_grade = 'B'; // determine letter grade
                                    break; // exit switch
                                case 7: // case statement - when letter number is 7
                                    letter_grade = 'C'; // determine letter grade
                                    break; // exit switch
                                case 6: // case statement - when letter number is 6
                                    letter_grade = 'D'; // determine letter grade
                                    break; // exit switch
                                case 5: // case statement - when letter number is 5
                                    letter_grade = 'E'; // determine letter grade
                                    break; // exit switch
                                default: // when letter number is not 5,6,7,8,9
                                    letter_grade = 'F'; // determine letter grade
                                    break; // exit switch
                                    }
                            printf("Student #%d's grade is %c\n", student_num, letter_grade); // prompt letter grade of student
                            ++student_num; // pre-increment - adding 1 to student number
                            ++count; // pre-increment - adding 1 to count;
                            total+=grade; // calculating total of grades
                        }
                        else { // else prompt warning
                            printf("Wrong format, check the grade again!\n"); // prompt to warn user for wrong format
                        }
                        if (count == 5){ // if count is equal to 5
                            break; // exit if statement
                        }}
                        average = total / (student_num - 1); // calculate average of grades
                        printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
                        printf("Class average (of %d students) is %d\n", student_num - 1, average); // prompt average of grades
                        return 0; // finishing the program
                default: // when s_path is not 1,2,3,4,5
                    printf("Wrong format, check the format again!\n"); // prompt to warn user for wrong format
                    system("pause"); // pausing the program
                    return 0; // finishing the program
            }


        case 'b': // case statement for choose 'b' path

            printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
            printf("1. while statement(s)\n"); // prompt for program
            printf("2. while statement(s) with break\n"); // prompt for program
            printf("3. do...while statement(s)\n"); // prompt for program
            printf("4. for statement(s)\n"); // prompt for program
            printf("5. for statement(s) with break\n"); // prompt for program
            printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
            printf("Choose your second path (1/2/3/4/5): "); // prompt for program
            scanf("%d", &s_path); // getting integer to choose second path(method) from user

            switch(s_path) { // switch statement for choose second path
                case 1: // case statement for choose 1. second path
                    while (count < 5) { // loop - while count less than 5
                        printf("Enter grade of student #%d: ", student_num); // prompt for user to show entered grade
                        scanf("%d", &grade); // getting grade from user
                        switch (grade > 100 || grade < 0) // switch statement if grade greater than 100 or grade less than 0
                        {
                            case 1: // case statement - if switch statement true
                                printf("Wrong format, check the grade again!\n"); // prompt to warn user for wrong format
                                break; // exit switch
                            case 0: // case statement - if switch statement false
                                letter_num = grade / 10; // grade divided by 10 to find letter of grade
                                switch (letter_num) { // switch statement to determine letter grade
                                    case 10: // case statement - when letter number is 10
                                        letter_grade = 'A'; // determine letter grade
                                        break; // exit switch
                                    case 9: // case statement - when letter number is 9
                                        letter_grade = 'A'; // determine letter grade
                                        break; // exit switch
                                    case 8: // case statement - when letter number is 8
                                        letter_grade = 'B'; // determine letter grade
                                        break; // exit switch
                                    case 7: // case statement - when letter number is 7
                                        letter_grade = 'C'; // determine letter grade
                                        break; // exit switch
                                    case 6: // case statement - when letter number is 6
                                        letter_grade = 'D'; // determine letter grade
                                        break; // exit switch
                                    case 5: // case statement - when letter number is 5
                                        letter_grade = 'E'; // determine letter grade
                                        break; // exit switch
                                    default: // when letter number is not 5,6,7,8,9
                                        letter_grade = 'F'; // determine letter grade
                                        break; // exit switch
                                }
                                printf("Student #%d's grade is %c\n", student_num, letter_grade); // prompt letter grade of student
                                count++; // post-increment - adding 1 to count
                                student_num++; // post-increment - adding 1 to student number
                                total+=grade; // calculating total of grades
                                break; // exit switch
                        }}
                    average = total / 5; // calculate average of grades
                    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
                    printf("Class average (of 5 students) is %d\n", average); // prompt average of grades
                    system("pause"); // pausing the program
                    return 0; // finishing the program

                case 2: // case statement for choose 2. second path
                    while (1) { // infinitive loop - while true
                        printf("Enter grade of student #%d: ", student_num); // prompt for user to show entered grade
                        scanf("%d", &grade); // getting grade from user

                        if (grade <= 100 && grade >= 0) { // if grade is less and equal to 100 and grade greater and equal to 0
                            letter_num = grade / 10; // grade divided by 10 to find letter of grade
                            switch (letter_num) // switch statement to determine letter grade
                            {
                                case 10: // case statement - when letter number is 10
                                    letter_grade = 'A'; // determine letter grade
                                    break; // exit switch
                                case 9: // case statement - when letter number is 9
                                    letter_grade = 'A'; // determine letter grade
                                    break; // exit switch
                                case 8: // case statement - when letter number is 8
                                    letter_grade = 'B'; // determine letter grade
                                    break; // exit switch
                                case 7: // case statement - when letter number is 7
                                    letter_grade = 'C'; // determine letter grade
                                    break; // exit switch
                                case 6: // case statement - when letter number is 6
                                    letter_grade = 'D'; // determine letter grade
                                    break; // exit switch
                                case 5: // case statement - when letter number is 5
                                    letter_grade = 'E'; // determine letter grade
                                    break; // exit switch
                                default: // when letter number is not 5,6,7,8,9
                                    letter_grade = 'F'; // determine letter grade
                                    break; // exit switch
                                    }
                            printf("Student #%d's grade is %c\n", student_num, letter_grade); // prompt letter grade of student
                            student_num++; // post-increment - adding 1 to student number
                            count++; // post-increment - adding 1 to count
                            total+=grade; // calculating total of grades
                        }
                        else { // else prompt warning
                            printf("Wrong format, check the grade again!\n"); // prompt to warn user for wrong format
                        }
                        if (count == 5) { // if count is equal to 5
                            break; // exit if statement
                        }}
                        average = total / (student_num - 1); // calculate average of grades
                        printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
                        printf("Class average (of %d students) is %d\n", student_num - 1, average); // prompt average of grades
                        system("pause"); // pausing the program
                        return 0; // finishing the program


                case 3: // case statement for choose 3. second path
                        do { // do statement
                            printf("Enter grade of student #%d: ", student_num); // prompt for user to show entered grade
                            scanf("%d", &grade); // getting grade from user
                            switch (grade > 100 || grade < 0) // switch statement if grade greater than 100 or grade less than 0
                            {
                                case 1: // case statement - if switch statement true
                                    printf("Wrong format, check the grade again!\n"); // prompt to warn user for wrong format
                                    break; // exit switch
                                case 0: // case statement - if switch statement false
                                    letter_num = grade / 10; // grade divided by 10 to find letter of grade
                                    switch (letter_num) { // switch statement to determine letter grade
                                        case 10: // case statement - when letter number is 10
                                            letter_grade = 'A'; // determine letter grade
                                            break; // exit switch
                                        case 9: // case statement - when letter number is 9
                                            letter_grade = 'A'; // determine letter grade
                                            break; // exit switch
                                        case 8: // case statement - when letter number is 8
                                            letter_grade = 'B'; // determine letter grade
                                            break; // exit switch
                                        case 7: // case statement - when letter number is 7
                                            letter_grade = 'C'; // determine letter grade
                                            break; // exit switch
                                        case 6: // case statement - when letter number is 6
                                            letter_grade = 'D'; // determine letter grade
                                            break; // exit switch
                                        case 5: // case statement - when letter number is 5
                                            letter_grade = 'E'; // determine letter grade
                                            break; // exit switch
                                        default: // when letter number is not 5,6,7,8,9
                                            letter_grade = 'F'; // determine letter grade
                                            break;; // exit switch
                                    }
                                    printf("Student #%d's grade is %c\n", student_num, letter_grade); // prompt letter grade of student
                                    count++; // post-increment - adding 1 to count
                                    student_num++; // post-increment - adding 1 to student number
                                    total+=grade; // calculating total of grades
                                    break; // exit switch
                            }}
                        while (count < 5); // loop - while count less than 5
                        average = total / (student_num - 1); // calculate average of grades
                        printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
                        printf("Class average (of %d students) is %d\n", student_num - 1, average); // prompt average of grades
                        system("pause"); // pausing the program
                        return 0; // finishing the program

                case 4: // case statement for choose 4. second path
                    for (count = 0; count < 5; count++) { // for statement - count is equal to 0. while count less than 5, add 1 one to count.
                        printf("Enter grade of student #%d: ", student_num); // prompt for user to show entered grade
                        scanf("%d", &grade); // getting grade from user
                        switch (grade > 100 || grade < 0) // switch statement if grade greater than 100 or grade less than 0
                        {
                            case 1: // case statement - if switch statement true
                                printf("Wrong format, check the grade again!\n"); // prompt to warn user for wrong format
                                count--; // extracting 1 from count
                                break; // exit switch
                            case 0: // case statement - if switch statement false
                                letter_num = grade / 10; // grade divided by 10 to find letter of grade
                                switch (letter_num) { // switch statement to determine letter grade
                                    case 10: // case statement - when letter number is 10
                                        letter_grade = 'A'; // determine letter grade
                                        break; // exit switch
                                    case 9: // case statement - when letter number is 9
                                        letter_grade = 'A'; // determine letter grade
                                        break; // exit switch
                                    case 8: // case statement - when letter number is 8
                                        letter_grade = 'B'; // determine letter grade
                                        break; // exit switch
                                    case 7: // case statement - when letter number is 7
                                        letter_grade = 'C'; // determine letter grade
                                        break; // exit switch
                                    case 6: // case statement - when letter number is 6
                                        letter_grade = 'D'; // determine letter grade
                                        break; // exit switch
                                    case 5: // case statement - when letter number is 5
                                        letter_grade = 'E'; // determine letter grade
                                        break; // exit switch
                                    default: // when letter number is not 5,6,7,8,9
                                        letter_grade = 'F'; // determine letter grade
                                        break; // exit switch
                                }
                                printf("Student #%d's grade is %c\n", student_num, letter_grade); // prompt letter grade of student
                                student_num++; // post-increment - adding 1 to student number
                                total+=grade; // calculating total of grades
                                break; // exit switch
                        }}
                        average = total / 5; // calculate average of grades
                        printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
                        printf("Class average (of 5 students) is %d\n", average); // prompt average of grades
                        system("pause"); // pausing the program
                        return 0; // finishing the program
                case 5: // case statement for choose 5. second path
                    for (;;) { // infinitive loop - for statement
                        printf("Enter grade of student #%d: ", student_num); // prompt for user to show entered grade
                        scanf("%d", &grade); // getting grade from user

                        if (grade <= 100 && grade >= 0) { // if grade less and equal to 100 and grade greater and equal to 0
                            letter_num = grade / 10; // grade divided by 10 to find letter of grade
                            switch (letter_num) // switch statement to determine letter grade
                            {
                                case 10: // case statement - when letter number is 10
                                    letter_grade = 'A'; // determine letter grade
                                    break; // exit switch
                                case 9: // case statement - when letter number is 9
                                    letter_grade = 'A'; // determine letter grade
                                    break; // exit switch
                                case 8: // case statement - when letter number is 8
                                    letter_grade = 'B'; // determine letter grade
                                    break; // exit switch
                                case 7: // case statement - when letter number is 7
                                    letter_grade = 'C'; // determine letter grade
                                    break; // exit switch
                                case 6: // case statement - when letter number is 6
                                    letter_grade = 'D'; // determine letter grade
                                    break; // exit switch
                                case 5: // case statement - when letter number is 5
                                    letter_grade = 'E'; // determine letter grade
                                    break; // exit switch
                                default: // when letter number is not 5,6,7,8,9
                                    letter_grade = 'F'; // determine letter grade
                                    break; // exit switch
                                    }
                            printf("Student #%d's grade is %c\n", student_num, letter_grade); // prompt letter grade of student
                            student_num++; // post-increment - adding 1 to student number
                            count++; // post-increment - adding 1 to count
                            total+=grade; // calculating total of grades
                        }
                        else { // else prompt warning
                            printf("Wrong format, check the grade again!\n"); // prompt to warn user for wrong format
                        }
                        if (count == 5){ // if count is equal to 5
                            break; // exit if statement
                        }}
                        average = total / (student_num - 1); // calculate average of grades
                        printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"); // prompt for program
                        printf("Class average (of %d students) is %d", student_num - 1, average); // prompt average of grades
                        system("pause"); // pausing the program
                        return 0; // finishing the program
                default: // when s_path is not 1,2,3,4,5
                    printf("Wrong format, check the format again!\n"); // prompt to warn user for wrong format
                    system("pause"); // pausing the program
                    return 0; // finishing the program


            }
            default: // when path is not 'a','b'
                printf("Wrong format, check the format again!\n"); // prompt to warn user for wrong format
                system("pause"); // pausing the program
                return 0; // finishing the program
            }
            system("pause"); // pausing the program
            return 0;} // finishing the program
