/*Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/

#include <iostream>
using namespace std;

class cricketer
{
    public:
    int match, perf[10], a, b = 0;

    void getdata()
    {
        cout<<"Enter the matches played by the cricketer = ";
        cin>>match;
        cout<<"Enter the scores made during each match "<<endl;
        for (int i = 0; i < match; i++)
        {
            cin>>perf[i];
            b += perf[i];
        }
        a = perf[0];
    }

    int total()
    {
        return b;
    }

    int calculate()
    {
        for (int i = 0; i < match; i++)
        {
            if (a < perf[i])
            {
                a = perf[i];
            }
        }
        return a;
    }

    void display1()
    {
        cout<<"-----Details-----"<<"\n\n";
        cout<<"Total matches played = "<<match<<endl;
        cout<<"Runs scored during these matches = "<<endl;
        for (int i = 0; i < match; i++)
        {
            cout<<perf[i]<<endl;
        }
    }
};

class batsman:public cricketer
{
    public:
    int tr, ar, bp;

    void data()
    {
        tr = total();
        cout<<"\n\n";
        bp = calculate();
    }

    void calculatear()
    {
        ar = tr / match;
    }

    void display()
    {
        display1();
        cout<<"Total runs scored = "<<tr<<endl;
        cout<<"Average runs = "<<ar<<endl;
        cout<<"Best performace = "<<bp;
    }
};

int main()
{
    batsman a;
    a.getdata();
    a.calculate();
    a.data();
    a.calculatear();
    a.display();
}