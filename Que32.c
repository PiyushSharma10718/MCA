#include<stdio.h>
void add()
{
    int sum = 0, num;
    printf("Enter the Number till you want to add : ");
    scanf("%d", &num);
    for(int i = 0; i <= num; i ++)
    {
        sum += i;
    }
    printf("The Sum of First %d Numbers starting from 1 is : %d\n\n", num, sum);
}
int main()
{
    //Write a program that defines a function to add first n numbers.
    add();
    return 0;
}
