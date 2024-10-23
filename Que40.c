#include<stdio.h>
int main()
{
    //Write a program to print address of variable using pointer.
    int num = 10;
    int *ptr = &num;
    printf("The Value of the Number is : %d.\n", num);
    printf("The Address of the Variable is : %p.\n", ptr);
    return 0;
}
/*

    WHENEVER YOU CREATE A POINTER VARIABLE YOU WILL HAVE TO ADD A "&"(AMPERSAND) OPERATOR IN THE VARIABLE ASSIGNING, HERE &num

    In Line 8 of your code, where you want to print the address of the variable
    num using the pointer ptr, the correct choice is:

    ptr
    Here's a breakdown of each option and why ptr is the correct one:

    1)ptr:
    This is the pointer itself, which holds the address of the variable num.
    Therefore, printing ptr will correctly display the address where num is stored.

    2) &ptr:
    This would print the address of the pointer ptr itself, not the address of num.
    It shows where the pointer variable is stored in memory, which is not what you want.

    3) *ptr:
    This dereferences the pointer, giving you the value of num, which is 10.
    It will print the value of the variable, not its address.

    4)(void*)ptr:
    This casts the pointer to a void*, which is generally acceptable for printing addresses as well.
    However, it is unnecessary in this context and does not provide any additional clarity or functionality.

*/

/*

    If you don't cast your pointer to void* when using %p, you may still get the correct output in many cases, especially with modern compilers.
    However, you might receive a compiler warning indicating that there’s a type mismatch.

    For instance:
    printf("The Address is: %p\n", ptr); // Without (void*) cast

    -------->This might compile but could generate a warning, especially with more strict compiler settings.

    Example With (void*)
    Using the cast makes your intention clear:
    printf("The Address is: %p\n", (void*)ptr); // With (void*) cast
    This eliminates any ambiguity, and the code adheres to the standard.

*/
