#include<stdio.h>
struct personal
{
    char name[20];
    int joining_day, joining_month, joining_year;
    float salary;
};
int main()
{
    //Define a structure type struct personal that would contain person name, joining date and salary using this structure to read this information of 5 people and print the same on screen.
    struct personal person[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter Name of Person %d : ", i + 1);
        scanf("%s", person[i].name);
        printf("Enter joining Day of Person %d in DD : ", i + 1);
        scanf("%d", &person[i].joining_day);
        printf("Enter joining Month of Person %d in MM : ", i + 1);
        scanf("%d", &person[i].joining_month);
        printf("Enter joining Year of Person %d in YYYY : ", i + 1);
        scanf("%d", &person[i].joining_year);
        printf("Enter Person Salary of Person %d : ", i + 1);
        scanf("%f", &person[i].salary);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("\nThe Name of Person %d is : %s.\n", i + 1, person[i].name);
        printf("The Joining Date of Person %d in DD-MM-YYYY is : %d-%d-%d.\n", i + 1, person[i].joining_day, person[i].joining_month, person[i].joining_year);
        printf("The Salary of Person %d is : %.2f.\n\n", i + 1, person[i].salary);

    }
    return 0;
}
