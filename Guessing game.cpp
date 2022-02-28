#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Enter an integer: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Think lower!!\n");
        }
        else if (guess < answer)
        {
            printf("think Higher!\n");
        }
        else
        {
            printf("CORRECT");
        }
        guesses++;
        
        
    } while (guess != answer);

    printf("answer: %d", answer);
    printf("guesses: %d", guesses);
    

    return 0;
}