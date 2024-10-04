//3.WAP to find number is even or odd using ternary operator 

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number to check weather it is even or odd =");
    scanf("%d", &a);
    (a % 2 == 0) ? printf("Number is even") : printf("Number is odd");
}