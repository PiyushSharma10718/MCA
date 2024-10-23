#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    //Write a program to convert string into upper case.
    char str[20], upper_Str[20];
    printf("Enter the String you want to Convert it to Upper case : ");
    scanf("%s", str);
    printf("The Original String is : %s", str);
    for(int i = 0; i < strlen(str); i++)
    {
        upper_Str[i] = toupper(str[i]);
    }

    upper_Str[strlen(str)] = '\0';
    printf("The Original String is : %s", upper_Str);
    return 0;
}
