#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Guess Machine

    int num,guess,score;

    srand(time(0));
    num=rand()%100 + 1;

    score=1;

    do {
        printf("Enter a guess between 1 and 100:");
        scanf("%d", &guess);

        if (num == guess) {
            printf("Correct guess! Congrats! You got in %d guesses!", score);
            break;
        }
        else if (num < guess) {
            printf("Too high, try again!\n");
            score++;
        }
        else if (num > guess) {
            printf("Too low, try again!\n");
            score++
        }
    }
    while (num!=guess);
    return 0;
}
