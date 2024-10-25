/* Define a class to represent a bank account. Include the following members:   
1. Data Member:   
-Name of the depositor   
-Account Number  
-Type of Account   
-Balance amount in the account    

2. Member Functions  
 -To assign values  
 -To deposited an amount   
 -To withdraw an amount after checking balance   
 -To display name and balance*/
 
#include <iostream>
using namespace std;

class bank
{
    public:
    string name, type;
    int an, d, w;

    void assign()
    {
        cout<<"Enter your name = ";
        cin>>name;
        cout<<"Enter your account number = ";
        cin>>an;
        cout<<"Enter your account type = ";
        cin>>type;
    }

    void deposit()
    {
        cout<<"Enter amount you want to deposit = ";
        cin>>d;
    }

    void withdraw()
    {
        cout<<"Enter the amount you want to withdraw = ";
        cin>>w;
        if (w < d)
        {
            cout<<"Withdraw successfull."<<endl;
        }
        else
        {
            cout<<"Error...withdrawal amount should be less then main balance."<<endl;
            withdraw();
        }
    }

    void display()
    {
        cout<<"Your name = "<<name<<endl;
        cout<<"Main balance = "<<d - w;
    }
};

int main()
{
    bank a;
    a.assign();
    a.deposit();
    a.withdraw();
    a.display();
}