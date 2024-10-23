#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the Value for First Number : ");
    scanf("%d", &num1);
    printf("Enter the Value for Second Number : ");
    scanf("%d", &num2);
    printf("Enter the Value for Third Number : ");
    scanf("%d", &num3);
    if(num1 == num2 && num2 == num3)
    {
        printf("All the Three Numbers are Equal and hence are the Greatest Number !");
        return 1;
    }
    else
    {
        if(num1 > num2)
        {
            if(num1 > num3)
            {
                printf("%d is the Greatest Number from the above three Numbers.", num1);
            }
            else
            {
                printf("%d is the Greatest Number from the above three Numbers.", num3);
            }
        }
        else
        {
            if(num2 > num3)
            {
                printf("%d is the Greatest Number from the above three Numbers.", num2);
            }
            else
            {
                printf("%d is the Greatest Number from the above three Numbers.", num3);
            }
        }
    }
    return 0;
}
