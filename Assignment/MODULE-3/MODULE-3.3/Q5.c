/* WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice*/

#include <stdio.h>

int sort(int a[], int b)
{
    int c;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (b == 1 && a[i] > a[j])
            {
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
            else if (b == 2 && a[i] < a[j])
            {
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
            
            
        }
        
    }    
}

void display(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    
}

int main()
{
    int a[5], b[5], c;

    printf("Enter the first array =");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the second array =");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    
    printf("Enter...\n 1 for ascending order \n 2 for descending order =");
    scanf("%d", &c);

   sort(a, c);
   sort(b, c);
   printf("First array =");
   display(a);
   printf("Second array =");
   display(b);
    
}