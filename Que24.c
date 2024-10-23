#include<stdio.h>
int main()
{
    printf("Printing Pattern 1.\n\n");
    for(int i = 1; i <= 5; i++)
    {
        for(int j=1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\nPrinting Pattern 2.\n\n");
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\nPrinting Pattern 3.\n\n");
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 5; j >= i; j--)
        {
            printf(" ");
        }
        for(int k = 1; k <= i; k++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\nPrinting Pattern 4.\n\n");
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 5; j >= i; j--)
        {
            printf("");
        }
        for(int k = 1; k <= i; k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
