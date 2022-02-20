#include<stdio.h>
int main()

    {
        char op;
        double first, second;

        printf("Enter the operation: (+, -, *, /)\n");
        scanf("%c", &op);

        printf("Enter the first integer: ");
        scanf("%lf", &first);

        printf("Enter the second integer: ");
        scanf("%lf", &second);

      //switch op

     switch (op)
     {
     case '+':
        printf(" %.1lf + %.1lf = %.1lf\n", first, second, first + second);
     break;

     case '-':
        printf(" %.1lf - %.1lf = %.1lf\n", first, second, first - second);
     break;

     case '*':
        printf(" %.1lf * %.1lf = %.1lf\n", first, second, first * second);
     break;

     case '/':
        printf(" %.1lf / %.1lf = %.1lf\n", first, second, first / second);        
     break;
        
    
     default:
        printf("Operator is invalid\n");
        break;
     } 


    
   return 0;

}