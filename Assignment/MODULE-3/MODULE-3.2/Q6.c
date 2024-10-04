//6.WAP to print factorial of given number 

#include <stdio.h>

int main()
{
    int a, b = 1;
    printf("Enter the value you want the factorial =");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        b = i * b;
    }
    printf("Factorial of %d is %d", a, b);
}