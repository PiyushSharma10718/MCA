#include<stdio.h>
int main()
{
    int people = 5, count = 0;
    float height, weight;
    for (int i = 0; i < people; i++)
    {
        printf("\nEnter The Height of people %d in Centimeter : ", i + 1);
        scanf("%f", &height);
        printf("Enter The Weight of people %d in Kilograms : ", i + 1);
        scanf("%f", &weight);
        if(height > 170 && weight < 50)
        {
            count ++;
        }
    }
    printf("\nThere are %d people out of %d that has Height above 170 and Weight less than 50.\n", count, people);
    return 0;
}
