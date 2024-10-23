#include<stdio.h>
int main()
{
    int students = 5, subjects = 3;
    float marks, total, average;
    for(int i = 0; i < students; i++)
    {
        total = 0;
        printf("Enter Marks for Student %d.\n", i + 1);
        for (int j = 0; j < subjects; j++)
        {
            do
            {
                printf("Enter Marks of Subject %d out of 100 : ", j + 1);
                scanf("%f", &marks);
                if(marks > 100 || marks < 0)
                {
                    printf("Please, Enter The Marks out of 100 Only.\n\n");
                    //return 1;
                    //break;
                }
            }
            while(marks > 100 || marks < 0);
            total = total + marks;
        }
        average = total / subjects;
        printf("The Total Marks of the Student is : %.2f\n", total);
        printf("The Average Marks of the Student is : %.2f\n\n", average);
    }
    return 0;
}
