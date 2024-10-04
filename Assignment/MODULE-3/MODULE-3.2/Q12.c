//12.Patterns: 

/*1                   
2 3                 
4 5 6                   
7 8 9 10            
11 12 13 14 15
*/

#include <stdio.h>

int main()
{
    int a = 1, b = 65;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", a);
            a++;
        }
        printf("\n");   
    } 

    printf("\n\n");


/*
A
B C
D E F
G H I J
K L M N O
*/

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c\t", b);
            b++;
        }
        printf("\n");   
    } 


    printf("\n\n");

/* 
A
A B
A B C
A B C D
A B C D E
*/
    b = 65;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c\t", b);
            b++;
        }
        b = 65;
        printf("\n");   
    } 

    printf("\n\n");


/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

    a = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",a % 2);
            printf("\t");
            // if (a % 2 == 0)
            // {
            //     printf("0");
            //     printf("\t");
            // }
            // else
            // {
            //     printf("1");
            //     printf("\t");
            // }
            a++;
        } 
        a = 1;
        printf("\n");
    }

    printf("\n\n");


/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *         

*/

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 2 * (5 - i) -1; j++)
    {
        printf(" ");
    }
    for (int k = 0; k < 2 * i + 1; k++)
    {
        printf("* ");
    }
    printf("\n");
}


printf("\n\n");


/*
*
* *
* * * 
* * * * 
* * * * * 
* * * * * *
* * * * *
* * * * 
* * *
* *
*
*/


for (int i = 1; i <= 6; i++)
{
    for (int j = 0; j < i; j++)
    {
        printf("* ");
    }
    printf("\n");
}
for (int i = 5; i >= 1; i--)
{
    for (int j = i; j >= 1; j--)
    {
        printf("* ");
    }
    printf("\n");
}
}
