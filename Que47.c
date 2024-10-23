#include<stdio.h>
int main()
{
    /*
    Write a program to accept the contents from the user and store it in the file one line at a time
    and print the contents of the file.
    */

    int n;
    printf("How many lines you want to insert in the File : ");
    scanf("%d", &n);
    char content[n][1000];
    for(int i = 0; i < n; i++)
    {
        printf("Enter Line %d : ", i + 1);
        scanf(" %[^\n]", content[i]);
    }
    FILE *fptr = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\content.txt", "w");
    if(fptr != NULL)
    {
        for(int i = 0; i < n; i++)
        {
            fprintf(fptr, "%s\n", content[i]);
        }
        fclose(fptr);
    }
    else
    {
        printf("Something went Wrong, can not Read from a File !");
    }

    FILE *reafptr = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\content.txt", "r");
    if(reafptr != NULL)
    {
        printf("\nContent of the File is Shown Below !!\n");
        char line[1000];
        while(fgets(line, sizeof(line), reafptr) != NULL)
        {
            printf("%s\n", line);
        }
        fclose(reafptr);
    }
    else
    {
        printf("Something went Wrong, can not Read from a File !");
    }
    return 0;
}
