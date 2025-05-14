#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNum, guess, attempts = 0;
    const int MIN = 1, MAX = 100;

    srand(time(0));

    secretNum = (rand() % MAX) + MIN;

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNum)
        {
            printf("Go lower!\n");
        }
        else if(guess < secretNum)
        {
            printf("Go higher!\n");
        }else{
            printf("You guessed the number %d at %d attempts!", secretNum, attempts);
        }
        
    } while (guess != secretNum);
    

    return 0;
}