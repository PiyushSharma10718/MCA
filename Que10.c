#include<stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter any Character you want to Check : ");
    scanf("%c", &ch);
    if(isupper(ch)){
        printf("Entered Character is a Capital Letter.");
    }else if(islower(ch)){
        printf("Entered Character is a Lower Letter.");
    }else if(isdigit(ch)){
        printf("Entered Character is a Digit.");
    }else{
        printf("Entered Character is a Special Character.");
    }
    return 0;
}
