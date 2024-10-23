/*#include<stdio.h>
int main()
{
    int array[] = {2, 4, 6, 8, 1, 7, 5, 9, 3};
    int length = sizeof(array) / sizeof(array[0]);
    printf("The Number of Elements in the Array is : %d\n\n", length);
    printf("The Original Array is : ");
    for(int i = 0; i < length; i++)
    {
        printf("%d", array[i]);
    }
    for(int i = 0; i < length - 1; i++)
    {
        for(int j = 0; j < length - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("\nThe Sorted Array is : ");
    for(int i = 0; i < length; i++)
    {
        printf("%d", array[i]);
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int originalArray[] = {1, 2, 3, 4, 9, 8, 7, 6, 5};
    int length = sizeof(originalArray) / sizeof(originalArray[0]);
    int sortedArray[length];
    printf("The Length of the Array is : %d", length);
    printf("\n\nThe Original Array is : ");
    for (int i = 0; i < length; i++)
    {
        printf("%d", originalArray[i]);
    }

    printf("\n\nThe copy of Original Array to the Sorted Array is : ");
    for (int i = 0; i < length; i++)
    {
        sortedArray[i] = originalArray[i];
        printf("%d", sortedArray[i]);
    }

    for(int i = 0; i < length - 1; i++)
    {
        for(int j = 0; j < length - 1 - i; j++)
        {
            if(sortedArray[j] > sortedArray[j + 1])
            {
                int temp = sortedArray[j];
                sortedArray[j] = sortedArray[j + 1];
                sortedArray[j + 1] = temp;
            }
        }
    }

    printf("\n\nThe Sorted Array is : ");
    for (int i = 0; i < length; i++)
    {
        printf("%d", sortedArray[i]);
    }
    printf("\n\n");
    return 0;
}
