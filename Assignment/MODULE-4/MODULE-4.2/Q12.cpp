/*Write a program to swap the two numbers using friend function without 
using third variable*/

#include <iostream>
using namespace std;

class swaps
{
    private:
    int a, b;

    public:
    swaps()
    {
        cout<<"Enter the value of a = ";
        cin>>a;
        cout<<"Enter the value of b = ";
        cin>>b;
    }

    friend void display(swaps& c);
};

void display(swaps& c)
{
    c.a = c.a + c.b;
    c.b = c.a - c.b;
    c.a = c.a - c.b;
    cout<<"Value of a after swap = "<<c.a<<endl;
    cout<<"Value of b after swap = "<<c.b<<endl;
}

int main()
{
    swaps d;
    display(d);
}