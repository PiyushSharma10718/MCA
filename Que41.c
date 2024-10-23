#include<stdio.h>
int main()
{
    //Write a C program to swap the two values using pointers.
    int a = 10;
    int b = 20;
    printf("Values Before Swapping.\n");
    printf("The Value of a is : %d\n", a);
    printf("The Value of b is : %d\n\n", b);

    int *ptr1 = &a;
    int *ptr2 = &b;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Values After Swapping.\n");
    printf("The Value of a is : %d\n", a);
    printf("The Value of b is : %d\n\n", b);
    return 0;
}
