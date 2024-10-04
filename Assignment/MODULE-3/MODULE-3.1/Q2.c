/*2. Write a program to make Simple calculator (to make addition, 
subtraction,multiplication, division and modulo)*/

#include <stdio.h>
int main()
{
   float a, b;
   int c;
   printf("Enter the first number =");
   scanf("%f", &a);
   printf("Enter the second number =");
   scanf("%f", &b);
   printf("Press 1 for addition\n 2 for substraction\n 3 for mulitplication\n 4 for division\n 5 for modulo");
   scanf("%d", &c);
   if (c == 1)
   {
      printf("Your ans for addition is = %.4f", a + b);
   }
   else if (c == 2)
   {
      printf("Your ans for substracion is =%.4f", a - b);
   }
   else if (c == 3)
   {
      printf("Your ans for multiplication is =%.4f", a * b);
   }
   else if (c == 4)
   {
      printf("Your ans for division is =%.4f", a / b);
   }
   else if (c == 5)
   {
      int d, e;
      printf("Enter 1st intger number for modulo =");
      scanf("%d", &d);
      printf("Enter 2nd intger number for modulo =");
      scanf("%d", &e);
      printf("Your ans for modulo is =%0.4f", d % e);
   }
   else
   {
      printf("Enter a valid input");
   }
   return 0;
}
