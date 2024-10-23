#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    /*
    Read a text file which name is given in command line and print the total number of character in
    each line and total number of lines in a file.
    */

    if(argc == 1)
    {
        printf("The Name of the File is : %s.\n", argv[0]);
    }
    else if(argc >= 2)
    {
        printf("The Name of the File is : %s.\n", argv[0]);
        printf("Reading the Content of the File : %s.\n", argv[1]);
        FILE *fptr = fopen(argv[1], "r");
        if(fptr != NULL)
        {
            char content[1000];
            int line = 0;
            int character = 0;
            while(fgets(content, 1000, fptr))
            {
                //printf("%s", content);
                if(content[strlen(content) - 1] == '\n')
                {
                    content[strlen(content) - 1] = '\0';
                }
                character = strlen(content);
                printf("the Total Number of Character in Line %d is : %d\n", line + 1, character);
                line++;
            }
            printf("The Total Number of Line in the Above File is : %d\n", line);
            fclose(fptr);
        }
        else
        {
            printf("Something went wrong, Can not read the File : %s !!\n", argv[1]);
            printf("Try again Later ...\n");
        }
    }
    else
    {
        printf("Something went wrong, Try again Later !");
    }
    return 0;
}
