#include<stdio.h>
int main()
{
//Write a program to reverse a number.
    int num, reverse = 0, digit;
    printf("Enter the Number you want to Reverse : ");
    scanf("%d", &num);
    while(num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    printf("The Reverse Number of %d is : %d", num, reverse);
    return 0;
}
