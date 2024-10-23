#include<stdio.h>
struct time_struct
{
    int hour, minute, second;
};
int main()
{
    /*505
    Define structure data type called time_struct containing three member’s integer hour, integer
    minute and integer second. Develop a program that would assign values to the individual
    number and display the time in the following format: 16: 40:51
    */
    struct time_struct ts1;
    printf("Enter the Hour in HH format : ");
    scanf("%d", &ts1.hour);
    printf("Enter the Minute in MM format : ");
    scanf("%d", &ts1.minute);
    printf("Enter the Second in SS format : ");
    scanf("%d", &ts1.second);
    printf("\nThe Time is : %02d:%02d:%02d.\n", ts1.hour, ts1.minute, ts1.second);
    return 0;
}
