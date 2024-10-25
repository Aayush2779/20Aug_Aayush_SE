//Write a program to concatenate the two strings using Operator Overloading  

#include <iostream>
using namespace std;

class concate
{
    public:
    
     void getdata(string n1, string n2)
    {
        cout<<"First string = "<<n1<<endl;
        cout<<"Second string = "<<n2<<endl;
        cout<<"Concatenation of two string = "<<n1 + n2;
    }
};

int main()
{
    concate a;
    a.getdata("Aayush", "Timbadiya");
}