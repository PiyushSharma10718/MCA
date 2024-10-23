#include<stdio.h>
int main()
{
    printf("Printing Pattern 1.\n\n");
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nPrinting Pattern 2.\n\n");
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nPrinting Pattern 3.\n\n");
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
