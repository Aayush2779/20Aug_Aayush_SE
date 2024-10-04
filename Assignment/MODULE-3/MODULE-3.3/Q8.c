//WAP to reverse a string and check that the string is palindrome or not

#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    int l, b = 0;
    printf("Enter any string to reverse it and check whether it is palindrome or not =");
    scanf("%s", &a);
    printf("Reversed string =%s\n", strrev(a));
    l = strlen(a);
    for (int i = 0; i < l/2 ; i++)
    {
        if (a[i] == a[l - i - 1])
        {
            b = 1;
            break;
        }
    }
    if (b == 1)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("It is not palindrome");
    }
}