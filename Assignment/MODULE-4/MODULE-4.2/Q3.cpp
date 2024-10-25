/*Write a program to find the multiplication values and the cubic values using 
inline function*/

#include <iostream>
using namespace std;

class values
{
    public:
    int mul(int x, int y)
    {
        return x * y;
    }

    int cubic(int x)
    {
        return x * x * x;
    }
};

int main()
{
    int b, c;
    cout<<"Enter the 1st value = ";
    cin>>b;
    cout<<"Enter the 2nd value = ";
    cin>>c;
    values a;
    cout<<"Multiplication = "<<a.mul(b, c)<<endl;
    cout<<"cubic value = "<<a.cubic(b);
}