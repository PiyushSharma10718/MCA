#include<stdio.h>
int main()
{
    int num1, num2;
    float ans;
    char operator;
    printf("Enter the Value for First Number : ");
    scanf(" %d", &num1);
    printf("Enter the Value for Second Number : ");
    scanf(" %d", &num2);
    printf("Choose an operation you want to perform (+, -, *, /, %%) : ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        ans = num1 +  num2;
        printf("The Addition of %d and %d is : %.2f", num1, num2, ans);
        break;
    case '-':
        ans = num1 - num2;
        printf("The Subtraction of %d and %d is : %.2f", num1, num2, ans);
        break;
    case '*':
        ans = num1 * num2;
        printf("The Multiplication of %d and %d is : %.2f", num1, num2, ans);
        break;
    case '/':
        if(num2 != 0)
        {
            ans = num1 / num2;
            printf("The Division of %d and %d is : %.2f", num1, num2, ans);
            break;
        }
        else
        {
            printf("Error! Division by Zero is not Possible.");
            break;
        }
    default:
        printf("Invalid operator Selected, Please Select any one from (+, -, *, /, %%) these operators");
        break;
    }
    return 0;
}
