#include<stdio.h>
int main()
{
    int principalAmount;
    int rateOfInterest;
    int numberOfYears;
    float simpleInterest;
    printf("Enter the Principal Amount : ");
    scanf("%d", &principalAmount);
    printf("Enter the Rate of Interest : ");
    scanf("%d", &rateOfInterest);
    printf("Enter the Number of Years : ");
    scanf("%d", &numberOfYears);
    simpleInterest = (principalAmount * rateOfInterest * numberOfYears) / 100;
    printf("The Simple Interest is : %.2f", simpleInterest);
    return 0;
}
