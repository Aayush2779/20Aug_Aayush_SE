//WAP to show difference between Structure and Union. 

#include <stdio.h>

struct exp
{
    int id;
    char name[10];
}ep;

union expl
{
    int i;
    char nm[10];
}el;


int main()
{
    printf("Enter the id = ");
    scanf("%d", &ep.id);
    printf("Enter the name =");
    scanf("%s", &ep.name);
    printf("Employee number = %d\n", ep.id);
    printf("Employee name = %s\n", ep.name);

    printf("Enter the union id = ");
    scanf("%d", &el.i);
    printf("Enter the union name =");
    scanf("%s", &el.nm);
    printf("Employee number = %d\n", el.i);
    printf("Employee name = %s\n", el.nm);
}