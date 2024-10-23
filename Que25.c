#include<stdio.h>
int main()
{
    printf("Printing Pattern 1.\n\n");
    for(int i = 0; i < 5; i++)
    {
        for(int k = 5; k > i; k--)
        {
            printf("%c", 'A' + i);
        }
        printf("\n");
    }

    printf("\nPrinting Pattern 2.\n\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5 - i; j++)
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
