#include<stdio.h>
int main()
{
    int numbers[] = {10, 20, 30, 40, 50, 45, 35, 25, 15, 5};
    int max = numbers[0];
    int min = numbers[0];
    for(int i= 0; i < 10; i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
        if(numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    printf("\nThe Maximum Number among the given Numbers is : %d", max);
    printf("\nThe Minimum Number among the given Numbers is : %d", min);
    return 0;
}
s
