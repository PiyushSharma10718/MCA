#include<stdio.h>
int main()
{
//    Write a program to check whether the given number is prime or not.
    int num = 7;
    int isPrime = 1;
    if (num < 2)
    {
        isPrime = 0;
    }
    else
    {
//        for(int i = 2; i < num; i++)
        for(int i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

    }
    if(isPrime)
    {
        printf("The %d is a Prime Number.", num);
    }
    else
    {
        printf("The %d is not a Prime Number.", num);
    }
    return 0;
}
