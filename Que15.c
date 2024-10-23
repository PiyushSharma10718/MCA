#include<stdio.h>
int main()
{
    int num, factorial = 1;
    printf("Enter the Number to Find the Factorial of it : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial of Negative Does not Exists !\nPlease Enter a Positive Number.");
        return 1;
    }
    else
    {
        for (int i = 1; i <= num; i ++)
        {
            factorial = factorial * i;
        }
        printf("The Factorial of %d is %d", num, factorial);
    }
    return 0;
}
