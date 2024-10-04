//3.WAP to find area of circle, rectangle and triangle   

#include <stdio.h>

int main()
{
    float r, l, b, h, a;
    printf("Enter the radius of circle =");
    scanf("%f", &r);
    printf("Area of circle is = %0.4f\n", 3.14 * r * r);

    printf("Enter the length of rectangle =");
    scanf("%f", &l);
    printf("Enter the breadth of rectangle =");
    scanf("%f", &b);
    printf("Area of rectangle is = %0.4f\n", l * b);

    printf("Enter the height of triangle =");
    scanf("%f", &h);
    printf("Enter the base of triangle =");
    scanf("%f", &a);
    printf("Area of rectangle is = %0.4f\n", 0.5 * h * a);


}