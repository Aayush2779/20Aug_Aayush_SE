//5.3-WAP to print table up to given numbers   

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number you want the multiplication table =");
    scanf("%d", &a);
    printf("Enter the number till you want to see the multiplication table =");
    scanf("%d", &b);
    printf("Multiplication table is as follow =\n");
    for (int i = 1; i <=b ; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }
    
}