#include<stdio.h>

void printFileContents(const char *fileName)
{
    FILE *fptr = fopen(fileName, "r");
    if(fptr != NULL)
    {
        int num;
        printf("Content of %s: ", fileName);
        while(fscanf(fptr, "%d", &num) != EOF)
        {
            printf("%d ", num);
        }
        printf("\n");
        fclose(fptr);
    }
    else
    {
        printf("Something went Wrong, can not Read from a File !");
    }
}

int main()
{
    /*
    Write a program to read n integer number from keyboard and store them into a file All.txt.
    Read All.txt file, separate even and odd numbers and store them into files Even.txt and Odd.txt
    respectively and display contents of all the three files.
    */
    int n;
    printf("How many Integers you want to add ?\n");
    scanf("%d", &n);

    // Storing numbers to the Array !!
    int numbers[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // writing to all.txt file !
    FILE *fptr;
    fptr = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\all.txt", "w");
    if(fptr != NULL)
    {
        for(int i = 0; i < n; i++)
        {
            fprintf(fptr, "%d ", numbers[i]);
        }
        printf("\nContent has Written Successfully to the File all.txt\n\n");
    }
    else
    {
        printf("\nSomething went Wrong, can not write to a File !\n");
    }
    fclose(fptr);

    // reading from all.txt file!
    FILE *fptr2;
    fptr2 = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\all.txt", "r");

    FILE *evenptr;
    evenptr = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\even.txt", "w");

    FILE *oddptr;
    oddptr = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\odd.txt", "w");

    if(fptr2 != NULL && evenptr != NULL && oddptr != NULL)
    {
        for(int i = 0; i < n; i++)
        {
            fscanf(fptr2, "%d", &numbers[i]);
//            printf("%d", numbers[i]);
            if(numbers[i] % 2 == 0)
            {
                fprintf(evenptr, "%d ", numbers[i]);
                //printf("%d is Even.\n", numbers[i]);
            }
            else
            {
                fprintf(oddptr, "%d ", numbers[i]);
                //printf("%d is Odd.\n", numbers[i]);
            }
        }
        printf("Successful, The Even Numbers are Stored to even.txt and the Odd Numbers are Stored to odd.txt !\n\n");
    }
    else
    {
        printf("Something went Wrong, can not Read from a File !");
    }

    fclose(fptr2);
    fclose(evenptr);
    fclose(oddptr);

    printFileContents("D:\\Piyush\\MCA\\Programs\\PWC\\all.txt");
    printFileContents("D:\\Piyush\\MCA\\Programs\\PWC\\even.txt");
    printFileContents("D:\\Piyush\\MCA\\Programs\\PWC\\odd.txt");

    return 0;
}
