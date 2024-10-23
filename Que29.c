#include<stdio.h>
int main()
{
// Write a program to replace a character in given string.
    char character = 'P', replace;
    printf("The Character Before Replacing is : %c", character);
    printf("\n\nEnter the Character you want to replace : ");
    scanf("%c", &replace);
    character = replace;
    printf("\nCharacter after Replacement is : %c\n", character);
    return 0;
}
