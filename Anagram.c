#include <stdio.h>
#include <conio.h>
#include <string.h>
int isAnagram(char *firstString, char *secondString);
int main(){
    char fS[100], sS[100];
    printf("Enter first String \n");
    gets(fS);
    printf("Enter second String \n");
    gets(sS);
    if(isAnagram(fS, sS) == 1){
       printf("%s and %s are Anagram\n",fS,sS);
    } else {
       printf("%s and %s are not Anagram\n",fS,sS);
    }
    getch();
    return 0;
}
/*
 * Function to check whether two passed strings are anagram or not
 * returns 1 if anagram otherwise 0
 */
int isAnagram(char *firstString, char *secondString)
{
    int firstCharCounter[256] = {0}, secondCharCounter[256] = {0};
    int counter;
    /* Two Strings cannot be anagram if their length is
       not equal */
    if(strlen(firstString) != strlen(secondString)){
        return 0;
    }
    /* count frequency of characters of firstString */
    for(counter = 0; firstString[counter] != '\0'; counter++)
   {
        firstCharCounter[firstString[counter]]++;
    }
    /* count frequency of characters of secondString */
    for(counter = 0; secondString[counter] != '\0'; counter++)
   {
        secondCharCounter[secondString[counter]]++;
    }
    /* compare character counts of both strings, 
       If not equal return 0, otherwise 1 */
    for(counter = 0; counter < 256; counter++){
        if(firstCharCounter[counter] != 
              secondCharCounter[counter])
            return 0;
    }
    return 1;
}
