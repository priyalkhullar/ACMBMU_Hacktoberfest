#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
list<int>  bankacc1;
list <int> amount;
int amount1;
int bankacc;
void bank_acc()
{
    
    int bankacc;    
    cout<<"Enter your bank account number";
    cin>> bankacc;
    bankacc1.push_back(bankacc);
}
void amount12()
{
    
    int amt;
    cout<<"Enter amount in bank balance";
    cin>>amt;
    amount.push_back(amt);

}
void deposit()
{
    int ba,f1,i1,d1,final_amount;
    cout<<"Enter the bank account number";
    cin>>ba;
    for(int i =0;i<10;i++)
    {
        if (bankacc1[i]==ba){
            i1=amount[i]
    cout<<"The current balance in the account \n";
    
    cout<<"Enter the amount to be deposited ";
    cin>>d1;
    i1=i1+d1;
    amount[i1];
        }

    }
    
    

}
void withdrawal()
{
    int ba,f1,i1,d1,final_amount;
    cout<<"Enter the bank account number";
    cin>>ba;
    auto f1=find(bankacc1.begin(),bankacc1.end(),ba);
    i1=amount[f1];
    cout<<"The current balance in the account \n";
    cout<<i1;
    cout<<"Enter the amount to be deposited ";
    cin>>d1;
    i1=i1-d1;
    amount[f1]=i1;

}

void display ()
{
    int ba,f1,i1,d1,final_amount;
    cout<<"Enter the bank account number";
    cin>>ba;
    f1=std::index(bankacc1.begin(),bankacc1.end(),ba);
    
    cout<<"The current balance in the account \n";
    i1=amount[f1];

}
int main()
{
    int choice;
    cout<<"Enter user choice"<<'\n'<<"1.Open account"<<'\n'<<"2.Deposit Money"<<'\n'<<"3.Withdraw Money"<<'\n'<<"4.display Balance"<<'\n';
    cin>>choice;
    
    

    switch (choice)
    {
        case 1 :
        {
            bank_acc();
            amount12();
            break;

            
        }
        case 2:
        {       
            deposit();
            break;
        }
        case 3:
        {
            withdrawal();
            break;
        }
        case 4:
        {
            display();
            break;
        }
    }

    }
