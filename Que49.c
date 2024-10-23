#include<stdio.h>
int main()
{
    //Write a program to merge two files into the third file.
    FILE *fptr1 = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\first.txt", "r");
    FILE *fptr3 = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\third.txt", "w");
    if(fptr1 != NULL)
    {
        char first[1000];
        while(fgets(first, 1000, fptr1) != NULL)
        {
            //printf("%s", first);
            if(fptr3 != NULL)
            {
                fprintf(fptr3, "%s", first);
                //printf("%s", first);
            }
            else
            {
                printf("Something went wrong, can not write File 1 to File 3.\nTry again Later !");
            }
        }
    }
    else
    {
        printf("Something went wrong, Try again Later for File 1 !");
    }
    fclose(fptr1);

    FILE *fptr2 = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\second.txt", "r");
    if(fptr2 != NULL)
    {
        char second[1000];
        while(fgets(second, 1000, fptr2) != NULL)
        {
            //printf("%s", second);
            if(fptr3 != NULL)
            {
                fprintf(fptr3, "%s", second);
                //printf("%s", second);
            }
            else
            {
                printf("Something went wrong, can not write File 2 to File 3.\nTry again Later !");
            }
        }
    }
    else
    {
        printf("Something went wrong, Try again Later for File 2 !");
    }
    fclose(fptr2);
    fclose(fptr3);

    FILE *fptr4 = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\third.txt", "r");
    if(fptr4 != NULL)
    {
        char fourth[1000];
        printf("Reading the Content of the Merged File below ...\n");
        while(fgets(fourth, 1000, fptr4) != NULL)
        {
            printf("%s", fourth);
        }
        printf("Successfully read the Merged File Content.\n");
        printf("Closing File .....\n");
        printf("File Closed.\n");
    }
    else
    {
        printf("Something went wrong, can not read from File 3.\nTry again Later for File 3 !\n");
    }
    fclose(fptr4);

    return 0;
}
