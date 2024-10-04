//6.WAP to convert years into days and days into years  

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the years =");
    scanf("%d", &a);
    printf("Converted days %d of %d years\n", a * 365, a);
    b = a * 365;
    printf("Converted years %d of %d days", b / 365, b);
}