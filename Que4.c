#include<stdio.h>
int main()
{
    int num1;
    int num2;
    printf("Enter the Value of the First Number : ");
    scanf("%d", &num1);
    printf("Enter the Value of the Second Number : ");
    scanf("%d", &num2);
    printf("Values before interchanging the Numbers are : %d and %d", num1, num2);
    printf("\n");
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Values after interchanging the Numbers are : %d and %d", num1, num2);
    return 0;
}
