#include<stdio.h>
int main()
{
    //Write a program to find maximum element from 1-Dimensional array.
    int array[] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};
    int maximum = array[0];
    int minimum = array[0];
    int length = sizeof(array) / sizeof(array[0]);
    printf("The Number of Elements in the array are : %d\n\n", length);
    for(int i = 0; i < length; i++)
    {
        if (maximum < array[i])
        {
            maximum = array[i];
        }
        else
        {
            minimum = array[i];
        }
    }
    printf("The Maximum Number is : %d\n\n", maximum);
    printf("The Minimum Number is : %d\n\n", minimum);
    return 0;
}
