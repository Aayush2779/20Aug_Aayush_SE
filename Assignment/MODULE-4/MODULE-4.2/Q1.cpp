//WAP to create simple calculator using class  

#include <iostream>
using namespace std;

class calculator
{
    public:
    int a, b;
    void getdata()
    {
        cout<<"Enter the value of a = ";
        cin>>a;
        cout<<"Enter the value of b = ";
        cin>>b;
    }
    void add()
    {
        cout<<"Addition = "<<a + b<<endl;
    }
    void sub()
    {
        cout<<"Subtraction = "<<a - b<<endl;
    }
    void mul()
    {
        cout<<"Multiplication = "<<a * b<<endl;
    }
    void div()
    {
        cout<<"Division = "<<a / b<<endl;
    }
};

int main()
{
    calculator a;
    a.getdata();
    a.add();
    a.sub();
    a.mul();
    a.div();
}