//WAP to find reverse of string using recursion 

#include <stdio.h>
#include <string.h>

void rev(char a[], int b, int c)
{
    char d;
    if (c <= b / 2)
    {
        d = a[c];
        a[c] = a[b - c - 1];
        a[b - c - 1] = d;
        rev(a,b,c+1);
    }
}
int main()
{
    char a[20];
    int l, d = 0;
    printf("Enter any name =");
    scanf("%s", &a);
    l = strlen(a);
    rev(a, l, d);
    printf("Reversed name= %s\n", a);
}
