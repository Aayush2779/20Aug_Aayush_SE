/*Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.*/

#include <iostream>
using namespace std;

class add
{
    public:
    add(int x, int y);
};

add::add(int x, int y)
{
    cout<<"Addition = "<<x + y<<"\n\n";
}

class sub
{
    public:
    sub(int x, int y);
};

sub::sub(int x, int y)
{
    cout<<"Subtraction = "<<x - y<<"\n\n";
}

class mul
{
    public:
    mul(int x, int y);
};

mul::mul(int x, int y)
{
     cout<<"Multiplication = "<<x * y<<"\n\n";
}

class divi
{
    public:
    divi(int x, int y);
};

divi::divi(int x, int y)
{
     cout<<"Division = "<<x / y<<"\n\n";
}

int main()
{
    int e, f;
    cout<<"Enter the first number = ";
    cin>>e;
    cout<<"Enter the second number = ";
    cin>>f;
    add a(e, f);
    sub b(e, f);
    mul c(e, f);
    divi d(e, f);
}