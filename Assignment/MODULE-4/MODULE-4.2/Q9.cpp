//Write a Program of Two 1D Matrix Addition using Operator Overloading 

#include <iostream>
using namespace std;

class add
{
    public:

    void display(int* a, int* b)
    {
        cout<<"First array = "<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout<<a[i]<<endl;
        }
        cout<<"Second array = "<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout<<b[i]<<endl;
        }
        cout<<"Addition of array = "<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout<<a[i] + b[i]<<endl;
        }
    }
};

int main()
{
    add c;
    int x[5] = {10, 20, 30, 40, 50}, y[5] = {45, 98, 78, 35, 54};
    c.display(x, y);
}