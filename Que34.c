#include<stdio.h>
int fact(int num)
{
    if(num == 0 || num ==1)
    {
        return 1;
    }
    return num * fact(num - 1);
}
int main()
{
    //Write a program to find factorial of a number using recursion.
    int num;
    printf("Enter any Number : ");
    scanf("%d", &num);
    printf("The Factorial of %d is : %d", num, fact(num));
    return 0;
}
