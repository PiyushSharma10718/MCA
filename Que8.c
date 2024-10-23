#include<stdio.h>
int main()
{
    int overallMarks;
    printf("Enter the Overall Marks of the Student out of 700 : ");
    scanf("%d", &overallMarks);
    float percentage = (float)(overallMarks * 100) / 700;
    if (overallMarks > 700)
    {
        printf("Please Enter your Correct Marks out of 700 only");
        return 1;
    }
    if(percentage >= 70 && percentage <=100 )
    {
        printf("The Student has got %.2f percentage and has passed with the Distinction Class.", percentage);
    }
    else if (percentage >= 60 && percentage <70)
    {
        printf("The Student has got %.2f percentage and has passed with the First Class.", percentage);
    }
    else if (percentage >= 50 && percentage <60)
    {
        printf("The Student has got %.2f percentage and has passed with the Second Class.", percentage);
    }
    else if (percentage >= 33 && percentage <50)
    {
        printf("The Student has got %.2f percentage and has passed with the Third Class.", percentage);
    }
    else
    {
        printf("The Student has got %.2f percentage and has Failed in the Class.", percentage);
    }
    return 0;
}
