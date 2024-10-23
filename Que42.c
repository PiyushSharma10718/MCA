#include<stdio.h>
int main()
{
    //Write a C program to print the address of character and the character of string using pointer.
    char ch = 'P';
    char str[10] = "Piyush";

    printf("The Value of a Single Character is : %c.\n", ch);
    printf("The Value of a String Characters is : %s.\n", str);

    char *ch_ptr = &ch;
    char *str_ptr = str;

    printf("The Address of a Single Character using pointer is : %p.\n", (void*)ch_ptr);
    printf("The Value of a Single Character using pointer is : %c.\n", *ch_ptr);
    printf("The Address of a String Characters using pointer is : %p.\n", (void*)str_ptr);
    printf("The Value of a String Characters using pointer is : %s.\n", str_ptr);

    return 0;
}
