#include<stdio.h>
#include<math.h>
int main()
{
    //Write a program to evaluate the series 1^2+2^2+3^2+��+n^2
    float num, evaluate = 1, square = 2;
    printf("Enter the Number till you want to Evaluate : ");
    scanf("%f", &num);
    for(float i = 1; i <= num; i ++)
    {
        evaluate += pow(i, square);
    }
    printf("%.2f", evaluate);
    return 0;
}
