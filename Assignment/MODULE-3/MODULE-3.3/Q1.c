//Write a program to find out the max number from given array using function 

#include <stdio.h>

int max(int x[10], int b)
{
    int z = x[0];
    for (int i = 0; i < b; i++)
    {
        if (x[i] > z)
        {
            z = x[i];
        }
    }
    return z;
}

int main()
{
    int a[10], n;
    printf("Enter the size = ");
    scanf("%d", &n);
    printf("Enter any number to find maximum =");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Maximum number is = %d", max(a, n));
}