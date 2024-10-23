#include<stdio.h>
#include<ctype.h>
#include<string.h>
void toggle()
{
    char str[20], togglestr[20];
    printf("Enter the String you want to Toggle : ");
    scanf("%s", str);
    printf("The Original String is : %s\n", str);
    for(int i = 0; i < strlen(str); i++)
    {
        if(islower(str[i]))
        {
            togglestr[i] = toupper(str[i]);
        }
/*        else if(isupper(str[i]))
        {
            togglestr[i] = tolower(str[i]);
        }
*/        else
        {
            togglestr[i] = str[i];
        }

    }
    togglestr[strlen(str)] = '\0';
    printf("The Toggled Version of Original String is : %s\n", togglestr);
}
int main()
{
    //Write a function that will scan a character string passed as an argument and convert all lowercase character into their uppercase equivalents.
    toggle();
    return 0;
}
