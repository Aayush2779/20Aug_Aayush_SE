/*4.WAP to show  
1. Monday to Sunday using switch case  
2. Vowel or Consonant using switch case*/


#include <stdio.h>

int main()
{
    int a;
    char b;
    printf("Enter any character to see whether it is vowel or consonant =");
    scanf("%c", &b);
    printf("Enter number from 1 - 7 to see the respective day =");
    scanf("%d", &a);
        switch (a)
        {
            case 1:
            printf("Monday\n");
            break;
            case 2:
            printf("Tuesday\n");
            break;
            case 3:
            printf("Wednesday\n");
            break;
            case 4:
            printf("Thursday\n");
            break;
            case 5:
            printf("Friday\n");
            break;
            case 6:
            printf("Saturday\n");
            break;
            case 7:
            printf("Sunday\n");
            break;
            default:
            printf("Enter a valid input for days\n");
            break;
        }
        switch (b)
        {
            case 'a':
            printf("%c is a vowel", b);
            break;
            case 'e':
            printf("%c is a vowel", b);
            break;
            case 'i':
            printf("%c is a vowel", b);
            break;
            case 'o':
            printf("%c is a vowel", b);
            break;
            case 'u':
            printf("%c is a vowel", b);
            break;
            default:
            printf("Entered character %c is a consonant", b);
            break;
        }
}