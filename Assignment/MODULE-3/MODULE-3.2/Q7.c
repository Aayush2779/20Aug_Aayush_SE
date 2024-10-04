//7.WAP to print Fibonacci series up to given numbers 

#include <stdio.h>

int fib_rec(int a)
{
    if (a <= 1)
    {
        return a;
    }
    else
    {
        return (fib_rec(a-1) + fib_rec(a-2));
    }
}
int main()
{
    int i;
    printf("Enter the number you want the fib series=\n");
    scanf("%d", &i);
    printf("The fib series is=%d\n", i);
    for (int z = 0; z <= i; z++)
    {
        printf("%d\n", fib_rec(z));
    }
}