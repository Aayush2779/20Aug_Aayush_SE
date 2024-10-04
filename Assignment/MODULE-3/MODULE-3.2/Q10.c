//10Write a program make a summation of given number (E.g., 1523 Ans: -11)  


#include <stdio.h>

int main()
{
    int a, c, i = 0;
    printf("Enter the value =");
    scanf("%d", &a);

    while (a != 0)
    {
        c = a % 10;
        i = i + c;
        a /= 10;
    }
 printf("Addition of given numbers is =%d", i);  
}