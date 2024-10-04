//2.WAP to swap two numbers without using third variable  

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a =");
    scanf("%d", &a);
    printf("Enter the value of b =");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap value of a = %d\n", a);
    printf("After swap value of a = %d", b);
}


