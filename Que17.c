#include<stdio.h>
int main()
{
/*
    //17. Write a program to generate first n number of Fibonacci series
    int a = 0, b = 1, start_limit, end_limit;
    printf("Enter the Start Limit for the Fibonacci Series : ");
    scanf("%d", &start_limit);
    printf("Enter the End Limit for the Fibonacci Series : ");
    scanf("%d", &end_limit);
    while(a <= end_limit)
    {
        if(a >= start_limit)
        {
            printf("%d\n", a);
        }
        int nxt_num = a + b;
        a = b;
        b = nxt_num;
    }
    return 0;
    */
    int nextNum, num, a = 0, b = 1, count = 0;
    printf("Enter How many Numbers you want to Print in the Fibonacci Series : ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        printf("%d\n", a);
        nextNum = a + b;
        a = b;
        b = nextNum;
    }
    return 0;
}
