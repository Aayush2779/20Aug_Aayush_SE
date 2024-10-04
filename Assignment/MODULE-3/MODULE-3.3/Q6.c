/*WAP to make addition, Subtraction and multiplication of two matrix using 
2-D Array*/

#include <stdio.h>

int main()
{
    int a, b, c[10][10], d[10][10], e[10][10];
    printf("Enter the rows of matrix =");
    scanf("%d", &a);
    printf("Enter the column of matrix =");
    scanf("%d", &b);

    //Enter first matrix value

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter value for a%d%d =", i, j);
            scanf("%d", &c[i][j]);
        }
    }

    //Enter second matrix value

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter value for b%d%d =", i, j);
            scanf("%d", &d[i][j]);
        }
    }

    //Add two matrix

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
           e[i][j] = c[i][j] + d[i][j];
        }
    }

    //Display the addition of two matrix

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", e[i][j]);
        }
        printf("\n");
    }
    

}