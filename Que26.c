#include<stdio.h>

#define STUDETN_COUNT 20

int main()
{
    int rollNumber[STUDETN_COUNT];
    float marks[STUDETN_COUNT];
    for(int i = 0; i < STUDETN_COUNT; i++)
    {
        printf("Enter the Roll Number of Student %d : ", i+1);
        scanf("%d", &rollNumber[i]);
        printf("Enter the Marks of Student %d : ", i+1);
        scanf("%f", &marks[i]);

        printf("The Marks of Roll Number %d is : %.2f \n\n", rollNumber[i], marks[i]);
    }
    return 0;
}
