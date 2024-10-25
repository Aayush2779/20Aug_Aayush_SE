/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)*/

#include <iostream>
using namespace std;

class students
{
    public:
    int rn[5], n;
    void rollnumber()
    {
        cout<<"Enter the number of students = ";
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter student "<<i + 1<<" roll number = ";
            cin>>rn[i];
        }
    }
};

class test: public students
{
    public:
    int sub1[5], sub2[5];
    void marks()
    {
        cout<<"Enter the marks of students."<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter roll number "<<rn[i]<<" 1st subject marks = ";
            cin>>sub1[i];
            cout<<"Enter roll number "<<rn[i]<<" 2nd subject marks = ";
            cin>>sub2[i];
            cout<<"\n";
        }
    }
};

class result: public test
{
    public:
    void display()
    {
        cout<<"----Rseult-----"<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<"Roll number = "<<rn[i]<<endl;
            cout<<"Subject 1 marks = "<<sub1[i]<<endl;
            cout<<"Subject 2 marks = "<<sub2[i]<<endl;
            cout<<"total marks obtained = "<<sub1[i] + sub2[i]<<endl;
            cout<<"\n";
        }        
    }
};

int main()
{
    result a;
    a.rollnumber();
    a.marks();
    a.display();
}