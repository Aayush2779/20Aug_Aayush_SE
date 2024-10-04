/*5.2-. WAP to take 10 no. Input from user and find out …   
 How many Even numbers are there  
 How many odd numbers are there  
 Sum of even numbers   
 Sum of odd numbers*/

#include <stdio.h>

int main()
{
    int a = 0, b[10], c = 0, e = 0, o = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value =");
        scanf("%d", &b[i]);
        if (b[i] % 2 == 0)
        {
            e++;
            a += b[i];
        }
        else
        {
            o++;
            c += b[i];
        }
    } 
    printf("Total even number = %d\n", e);
    printf("Total odd number = %d\n", o);
    printf("Sum even number = %d\n", a);
    printf("Sum odd number = %d\n", c);
}