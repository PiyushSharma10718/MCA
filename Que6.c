#include<stdio.h>
int main()
{
    float centigrade, fahrenheit;
    printf("Enter the Temperature in Centigrade : ");
    scanf("%f", &centigrade);
    fahrenheit = (1.8 * centigrade) + 32;
    printf("The Temperature after converting from Centigrade to Fahrenheit is : %.2f", fahrenheit);
    return 0;
}
