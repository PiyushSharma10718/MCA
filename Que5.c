#include<stdio.h>
int main()
{
    float distanceInKiloMeters, toMeters, toFeet, toInches, toCentimeters;
    printf("Enter the Distance in Kilometers : ");
    scanf("%f", &distanceInKiloMeters);
    toMeters = distanceInKiloMeters * 1000;
    toFeet = distanceInKiloMeters * 3280.84;
    toInches = distanceInKiloMeters * 39370.08;
    toCentimeters = distanceInKiloMeters * 100000;

    printf("\nThe Distance after converting from Kilometers to Meters is : %.3f", toMeters);
    printf("\nThe Distance after converting from Kilometers to Feet is : %.3f", toFeet);
    printf("\nThe Distance after converting from Kilometers to Inches is : %.3f", toInches);
    printf("\nThe Distance after converting from Kilometers to CEntimeters is : %.3f", toCentimeters);

    return 0;
}
