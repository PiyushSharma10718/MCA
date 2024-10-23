#include<stdio.h>
struct student_record
{
    char name[20], branch[20];
    float total_marks;
};
int main()
{
    //Design a structure student_record to contain name, branch and total marks obtained. Develop a program to read data for 10 students in a class and print them.
    struct student_record students[10];
    for(int i = 0; i < 10; i++)
    {
        printf("Enter Name of Student %d : ", i+1);
        scanf("%s", students[i].name);
        printf("Enter Branch of Student %d : ", i+1);
        scanf("%s", students[i].branch);
        printf("Enter Total Marks of Student %d : ", i+1);
        scanf("%f", &students[i].total_marks);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("\nName of Student %d is : %s.\n", i+1, students[i].name);
        printf("Branch of Student %d is : %s.\n", i+1, students[i].branch);
        printf("Total Marks of Student %d is : %.2f.\n", i+1, students[i].total_marks);
    }
    return 0;
}
