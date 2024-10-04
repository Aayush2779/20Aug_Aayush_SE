//WAP to find factorial using recursion  

#include <stdio.h>

int fact(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}

int main()
{
    int i;
    printf("Enter the value for factorial =");
    scanf("%d", &i);
    printf("Factorial for %d is = %d", i, fact(i));
}