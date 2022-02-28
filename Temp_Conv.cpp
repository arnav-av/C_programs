#include<stdio.h>
#include<ctype.h>

int main()
{
    int i;
    char unit;
    float temp;
  {  

    printf("Is the temperature in (F) or (C)?: \n");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("Enter the temperature in C: ");
        scanf("%f", &temp);
        temp = (temp *9 / 5) + 32;
        printf("The temp in F is: %.1f", temp);

    }
    else if (unit == 'F')
    {
        printf("Enter the temperture in F: ");
        scanf("%f", &temp);
        temp = (temp -32) * 5/9;
        printf("The temp in C is: %.1f", temp);
    }

    else
    {
        printf("Enter a valid input");
    }
    
  }
  
    
    
    

    return 0;
    
}