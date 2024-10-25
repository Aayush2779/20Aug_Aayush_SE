/*Write a program to find the max number from given two numbers using 
friend function*/

#include <iostream>
using namespace std;

class maxi
{
    private:
    int a, b;

    public:
    maxi()
    {
        cout<<"Enter the first value = ";
        cin>>a;
        cout<<"Enter the second value = ";
        cin>>b;
    }

    friend void display(maxi& c);
};

void display(maxi& c)
{
    if (c.a > c.b)
    {
        cout<<c.a<<" is greater";
    }
    else
    {
        cout<<c.b<<" is greater";
    }
}

int main()
{
    maxi d;
    display(d);
}