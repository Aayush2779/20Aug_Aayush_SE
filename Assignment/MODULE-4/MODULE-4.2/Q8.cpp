/*Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/

#include <iostream>
using namespace std;

class calc
{
    public:
    void calculate(int a, int b)
    {
        cout<<"Addition = "<<a + b<<endl;
        cout<<"Subtraction = "<<a - b<<endl;
        cout<<"Multiplication = "<<a * b<<endl;
    }

    void calculate(double a, double b)
    {
        cout<<"Division = "<<a / b<<endl;
    }
};

int main()
{
    calc i;
    i.calculate(10, 30);
    i.calculate(20.5, 50.5);
}