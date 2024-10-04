/*Write a program of structure employee that provides the following 
information -print and display empno, empname, address and age*/

#include <stdio.h>

struct data
{
    int id, age;
    char name[10], add[50];
}dt;

int main()
{
    printf("Enter the Employee number =");
    scanf("%d", &dt.id);
    printf("Enter the Employee name =");
    scanf("%s", &dt.name);
    printf("Enter the Employee age =");
    scanf("%d", &dt.age);
    printf("Enter the Employee address =");
    scanf("%s", &dt.add);

    printf("Employee number = %d\n", dt.id);
    printf("Employee name = %s\n", dt.name);
    printf("Employee age = %d\n", dt.age);
    printf("Employee address = %s\n", dt.add);
}