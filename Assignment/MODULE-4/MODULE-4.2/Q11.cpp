/* Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading   
 Rectangle: Area * breadth   
 Triangle: ½ *Area* breadth  
 Circle: Pi * Area *Area*/

#include <iostream>
using namespace std;

class area
{
    public:

    void print(int a, int b)
    {
        cout<<"Area of rectangle = "<<a * b<<"\n\n";
    }

    void print(float a, float b, float c)
    {
        cout<<"Area of triangle = "<<a * b * c<<"\n\n";
    }

    void print(double a)
    {
        cout<<"Area of circle = "<<3.14 * a * a<<"\n\n";
    }
};

int main()
{
    area e;
    e.print(2, 2);
    e.print(5.2, 2, 0.5);   
    e.print(2);
}