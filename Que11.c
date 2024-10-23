#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Overall Marks Obtained from 700 : ");
    scanf("%d", &marks);
    float percentage = (marks * 100) / 700.00;
    if(marks > 700){
        printf("Please enter the marks obtained from Overall 700 Marks.");
        return 1;
    }
    if (percentage >= 80 && percentage <= 100)
    {
        printf("You have got %.2f percentage and have passed with the Grade - Distinction Class.", percentage);
    }
    else if (percentage >= 60 && percentage <= 79)
    {
        printf("You have got %.2f percentage and have passed with the Grade - First Class.", percentage);
    }
    else if (percentage >= 40 && percentage <= 59)
    {
        printf("You have got %.2f percentage and have passed with the Grade - Second Class.", percentage);
    }
    else{
        printf("You have got %.2f percentage and You have Failed.", percentage);
    }
    return 0;
}
