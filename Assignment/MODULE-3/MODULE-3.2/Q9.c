/*9.Write a program to find out the max from given number (E.g., No: -1562 
Max number is 6)*/

#include <stdio.h>

int main()
{
    int a, c, i = 0;
    printf("Enter the value maximum 9 digits=");
    scanf("%d", &a);

    while (a != 0)
    {
        c = a % 10;
        if (c > i)
        {
            i = c;
        }
        a /= 10;
    }
 printf("Maximum number is =%d", i);    
}