#include<stdio.h>
#include<math.h>
int isPrime()
{
    int num;
    printf("Enter any Number : ");
    scanf("%d", &num);
    if(num < 2)
    {
        return 0;
    }
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    //Write a function in the program to return 1 if number is prime otherwise return 0
    if(isPrime())
    {
        printf("The Number is a Prime Number.\n\n");
    }
    else
    {
        printf("The Number is not a Prime Number.\n\n");
    }
    return 0;
}
