#include<stdio.h>
#include<string.h>

int main()

{  
    
    int i, j, ovr, und, nor;
    
    {
    printf("Enter the total number of credits: ");
    scanf("%d", &i);         //i = total credits you enter
    
    if (i >= 65)
    {
        printf("Semester is Overloaded");
    }
    else if (i <= 35)
    {
        printf("Semester is underloaded");
    }
    else
    {
        printf("Semester is normal");
    }
    




    return 0;
}