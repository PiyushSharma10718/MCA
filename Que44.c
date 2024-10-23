#include<stdio.h>

void matrix1()
{
    int row, column, matrix1[row][column];
    printf("Enter the No. of Rows you want in Matrix 1 : ");
    scanf("%d", &row);
    printf("Enter the No. of Columns you want in Matrix 1 : ");
    scanf("%d", &column);
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            matrix1[row][column];
        }
    }
}

int main()
{
    //Write a program to read, print and addition of two Matrices using pointer and user define functions.
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int matrixSum[3][3];
    printf("The Matrix 1 is printed below !\n\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("The Matrix 2 is Printed below !\n\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The Sum of Both The Matrix is Below !\n\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", matrixSum[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}
