#include<stdio.h>
int main(int argc, char *argv[])
{
    /*
    printf("You have Entered %d Arguments !", argc);
    for(int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    */

    printf("The File name is : %s\n", argv[0]);
    if(argc == 1)
    {
        printf("File has %d argument.\n", argc);
    }
    else
    {
        printf("File has %d arguments.\n", argc);
        for(int i = 0; i < argc; i++)
        {
            printf("The Value at argv[%d] is : %s\n\n", i, argv[i]);
        }
    }

    return 0;
}

/*

int main(int argc, char *argv[])
{
    block of code ...
}

    argc (ARGument Count) is an integer variable that stores the number of command-line arguments passed by the user including the name of the program.
    So if we pass a value to a program, the value of argc would be 2 (one for argument and one for program name)

    The value of argc should be non-negative.

    argv (ARGument Vector) is an array of character pointers listing all the arguments.

    If argc is greater than zero, the array elements from argv[0] to argv[argc-1] will contain pointers to strings.

    argv[0] is the name of the program , After that till argv[argc-1] every element is command -line arguments.

    -------------------------------------------------------------------------------------------------------------------------------------------------

    Properties of Command Line Arguments in C

    They are passed to the main() function.
    They are parameters/arguments supplied to the program when it is invoked.
    They are used to control programs from outside instead of hard coding those values inside the code.
    argv[argc] is a NULL pointer.
    argv[0] holds the name of the program.
    argv[1] points to the first command line argument and argv[argc-1] points to the last argument.

    -------------------------------------------------------------------------------------------------------------------------------------------------

    1. Compilation Command:

    gcc -o arguments CommmanLineArguments.c

    Explanation:
    gcc: This is the GNU Compiler Collection, used to compile C (and other language) source code into an executable.

    -o arguments: The -o option specifies the name of the output file (the compiled executable).

    In this case, the output file is named arguments.
    Without -o, GCC would create a default output file called a.out on Linux/macOS or a.exe on Windows.

    CommmanLineArguments.c: This is the name of your C source code file that contains the program you wrote.
    The gcc compiler reads this file, compiles it, and creates an executable.

    In summary: This command compiles the CommmanLineArguments.c file and produces an executable named arguments.

    2. Execution Command:

    arguments one two three

    Explanation:

    arguments: This is the name of the executable file created from the previous compilation step.
    By typing this, you're telling your system to run the arguments program.

    one two three: These are command-line arguments.

    When you run the program, these arguments are passed to your program,
    and they can be accessed inside your C code via the argv array (which stores arguments as strings).

    In this case, the first argument (argv[0]) is always the name of the program (arguments),
    and the other arguments (argv[1], argv[2], and argv[3]) are "one", "two", and "three" respectively.

*/
