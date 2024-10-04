//WAP Find out length of string without using inbuilt function

#include <stdio.h>

int main()
{
    char a[20];
    int i = 0;
    printf("Enter any name =");
    scanf("%s", &a);
    while (a[i] != '\0')
    {
        i++;
    }
    printf("Length of given string = %d", i);
}