/* Write a program of structure for five employee that provides the following 
information -print and display empno, empname, address and age*/

#include <stdio.h>

struct data
{
    int id, age;
    char name[10], add[20];
}dt[5];

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter employee %d id =", i + 1);
        scanf("%d", &dt[i].id);
        printf("Enter employee %d name =", i + 1);
        scanf("%s", &dt[i].name);
        printf("Enter employee %d age =", i + 1);
        scanf("%d", &dt[i].age);
        printf("Enter employee %d address =", i + 1);
        scanf("%s", &dt[i].add);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Employee %d id = %d\n", i + 1, dt[i].id);
        printf("Employee %d name = %s\n", i + 1, dt[i].name);
        printf("Employee %d age = %d\n", i + 1, dt[i].age);
        printf("Employee %d address = %s\n", i + 1, dt[i].add);
    }
}