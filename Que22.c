#include<stdio.h>
int main()
{
    //Write a C program to find 1+1/2! +1/3! +1/4! +...... +1/n!
    float num, fact = 1.00, result = 1.00;
    printf("Enter any Number : ");
    scanf("%f", &num);
    /*
    for (int i = 2; i <= num; i++)
    {
        fact = 1.00;
        for(int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        result += 1.00 / fact;
    }
    printf("%.5f", result);
    */
    for(int i = 2; i <= num; i++)
    {
        fact *= i;
        result += 1.00 / fact;
    }
    printf("%.5f", result);
    return 0;
}
