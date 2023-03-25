#include<stdio.h>
#include<ctype.h>

int main()
{
    char questions[][100] = {"1. What comes after 1?: \n",
                             "2. What comes after 2?: \n",
                             "3. What is it called when a star dies?: \n" };

    char options[][100] = {"A. 3", "B. 2", "C. 4",
                           "A. 1", "B. 5", "C. 3",
                           "A. Radial implosion", "B. Super Nova", "C. Necula"};                       

    char answers[] = {'B', 'C', 'B'};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("Quiz Game!!\n");

    for(int i = 0; i < numberOfQuestions; i++)
    {
        printf("%s", questions[i]);
    
        for(int j = (i*3); j<(i*3) + 3; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("guess: ");
        scanf("%c", &guess);
        getchar();
        
        

        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("Correct!!\n");
            score++;
        }
        else
        {
            printf("Wrong\n");
        }

    }
    printf("Final Score: %d/%d\n", score, numberOfQuestions);

    return 0;
}
