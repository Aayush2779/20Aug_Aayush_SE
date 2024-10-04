/*11.Write a program you have to make a summation of first and last Digit. (E.g., 
1234 Ans: -5)*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value =");
    scanf("%d", &a);
    c = a % 10;
    while (a > 10)
    {
        a = a / 10;
    }
    b = a + c;
    
 printf("Addition of first digit and last dgit is =%d", b);
}