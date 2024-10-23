#include<stdio.h>
#include<string.h>
int main()
{
    //Program for deleting the spaces from the contents of file.
    FILE *fptr1 = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\space.txt", "r");
    FILE *fptr2 = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\withoutSpace.txt", "w");
    if(fptr1 != NULL)
    {
        char content[1000];
        while(fgets(content, 1000, fptr1) != NULL)
        {
            char modifiedCharacter[1000];
            int j = 0;
            //printf("%s", content);
            for(int i = 0; i < strlen(content); i++)
            {
                if(content[i] != ' ')
                {
                    modifiedCharacter[j++] = content[i];
                }
            }
            modifiedCharacter[j] = '\0';
            fprintf(fptr2, "%s", modifiedCharacter);
        }
    }
    else
    {
        printf("Can not Read from a File space.txt.\nTry again Later !\n\n");
    }
    fclose(fptr1);
    fclose(fptr2);
    FILE *fptr3 = fopen("D:\\Piyush\\MCA\\Programs\\PWC\\withoutSpace.txt", "r");
    if(fptr3 != NULL)
    {
        char ch[1000];
        while(fgets(ch, 1000, fptr3))
        {
            printf("%s", ch);
        }
    }
    else
    {
        printf("Can not Read from a File withoutSpace.txt.\nTry again Later !\n\n");
    }
    fclose(fptr3);

    return 0;
}
