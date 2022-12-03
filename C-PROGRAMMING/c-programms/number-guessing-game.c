#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    // uses the current time as a seed
    srand(time(0));

    // generate a random number between MIN & Max
    answer = (rand() % MAX) + MIN;
    printf("%d", answer);

    do
    {
        printf("Enter a guess:\n");
        scanf("%d", &guess);
        if (guess > answer)
            
        {
            printf("To high-select a smaller number Please!\n");
        }
        else if (guess < answer)

        {
            printf("Too  low-choose a bigger number Please !\n");
        }
        else{
            printf("CORRECT!");
        }
        guesses++;

    } while (guess != answer);

    printf("*********************************************");

    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);

    return 0;
}