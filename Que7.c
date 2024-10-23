#include<stdio.h>
int main()
{
    int number;
    printf("Enter any Number : ");
    scanf("%d", &number);
    if(number < 0){
        printf("The Number Entered is Less than Zero and Hence it is a Negative Number.");
    }else if(number == 0){
        printf("The Number Entered is Zero.");
    }else{
        printf("The Number Entered is Greater than Zero and Hence it is a Positive Number.");
    }
    return 0;
}
