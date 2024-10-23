#include<stdio.h>
int main()
{
    int height;
    int base;
    printf("Enter the Height of the Triangle : ");
    scanf("%d", &height);
    printf("Enter the Base of the Triangle : ");
    scanf("%d", &base);
    float area = height * base * 0.5;
    printf("The Area of the Triangle is : %.2f", area);
    return 0;
}
