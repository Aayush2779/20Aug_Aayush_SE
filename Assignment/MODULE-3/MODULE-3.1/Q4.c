//4.WAP to find simple interest 

#include <stdio.h>

int main()
{
    float p, t, r;
    printf("Enter the principal amount =");
    scanf("%f", &p);
    printf("Enter the rate of interest =");
    scanf("%f", &r);
    printf("Enter the time period =");
    scanf("%f", &t);
    printf("Simple Interest = %0.4f", p * r * t / 100);
}