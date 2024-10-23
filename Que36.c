#include<stdio.h>
struct bikes
{
    char brand[50];
    char model[50];
    int price, year;
};
int main()
{
    //Write a program to read structure elements from keyboard.
    /*
    struct bikes b1 = {"Hero", "B1", 10000, 1999};
    printf("The Bike Brand is : %s\n", b1.brand);
    printf("The Bike Model is : %s\n", b1.model);
    printf("The Bike Price is : %d\n", b1.price);
    printf("The Bike Year is : %d\n", b1.year);
    */
    struct bikes b1;
    printf("Enter the Bike Brand name : ");
    scanf("%s", b1.brand);
    printf("Enter the Bike Model name : ");
    scanf("%s", b1.model);
    printf("Enter the Bike Price : ");
    scanf("%d", &b1.price);
    printf("Enter the Bike Year : ");
    scanf("%d", &b1.year);
    printf("\nThe name of the Bike is %s and Model is %s.\nThe Price of the Bike is %d and in the Year %d.\n\n", b1.brand, b1.model, b1.price, b1.year);
    return 0;
}
