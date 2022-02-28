#include<stdio.h>
int main()

{
    int number;
    int sum = 0;

    do
    {
      printf("Enter numbers above 0: ");
      scanf("%d", &number);

      if (number > 0)
      {
        sum += number;
      }
      
    } 
    while (number > 0);

    printf("Sum: %d", sum);
    


  return 0;
}