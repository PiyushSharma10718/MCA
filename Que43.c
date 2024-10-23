#include<stdio.h>
int main()
{
    //Write a program to access elements using pointer.
    int numbers[10] = {00, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int *ptr = numbers;
    for(int i = 0; i < 10; i ++)
    {
        printf("The Value of the Array[%d] using Pointer is : %d\n", i, *(ptr + i));
    }
    return 0;
}
