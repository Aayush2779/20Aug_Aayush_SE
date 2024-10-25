/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)*/
#include <iostream>
using namespace std;

class person
{
    public:
    int age;
    string name;
    void assign()
    {
        cout<<"Enter the name of person = ";
        cin>>name;
        cout<<"Enter the age of person = ";
        cin>>age;
    }
};

class student
{
    public:
    float per;
    void assign2()
    {
        cout<<"Enter the percentage of student =";
        cin>>per;
    }
};

class teacher
{
    public:
    int salary;
    void assign3()
    {
        cout<<"Enter the salary of teacher = ";
        cin>>salary;
    }
};

class display: public person, public student, public teacher
{
    public:
    void print()
    {
        cout<<"\n\n";
        cout<<"Person name = "<<name<<endl;
        cout<<"Person age = "<<age<<endl;
        cout<<"Student's percentage = "<<per<<endl;
        cout<<"Salary of teacher = "<<salary;
    }
};

int main()
{
    display a;
    a.assign();
    a.assign2();
    a.assign3();
    a.print();
}