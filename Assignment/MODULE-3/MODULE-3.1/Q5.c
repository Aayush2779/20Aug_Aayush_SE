//5. WAP to check if the given year is a leap year or not.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the year you want to check whether it is leap year or not =");
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        printf("It is leap year");
    }
    else
    {
        printf("It is not a leap year");
    }
    
}