#include<stdio.h>
int main()
{
    //Write a program for sorting using pointer.
    int originalArray[5] = {20, 10, 50, 30, 40};
    int sortedArray[5];
    int *ptroa = originalArray;
    int *ptr = sortedArray;
    printf("The Original Array is : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptroa + i));
    }
    printf("\n");

    printf("The Copy of Original Array is : ");
    for(int i = 0; i < 5; i++)
    {
        *(ptr + i) = *(ptroa + i);
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5 -1; j++)
        {
            if(*(ptr + j) > *(ptr + j + 1))
            {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    printf("The Sorted Array is : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
