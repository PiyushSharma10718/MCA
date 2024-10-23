#include<stdio.h>
#include<string.h>
int main()
{
    // Write a program to reverse string.
    char str1[20] = "Piyush";
    printf("The Original String is : %s", str1);
    int length = strlen(str1);
    printf("\n\nThe Length of the Original String is : %d", length);
    char reverse[20];
    for(int i = 0; i < length; i++)
    {
        reverse[i] = str1[length - 1 - i];
    }
    reverse[length] = '\0';
    printf("\n\nThe Reversed String is : %s\n", reverse);
    return 0;
}
