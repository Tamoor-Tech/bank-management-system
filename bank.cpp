#include<iostream>
#include<string>       // C++ Libararies.
#include<windows.h>
using namespace std;
class Bank          // Class
{
    public:
    string name;  // Class Fields
    string accountNumber;
    double balance;
    double price;
    double amount;
    Bank(string a,string b, double c)
    {
        name=a;L
        accountNumber=b;
        balance=c;
    }
void deposit()    // Class Methods
{
    string value;
    for (int i=1; i<=3; i++)
    {
    cout<<"Enter Account Number"<<endl;
    cin>>value;
    cout<<"Enter Deposit price"<<endl;
    cin>>price;
    system("cls");
    cout<<"processing";
    Sleep(300);
    cout<<".";
    Sleep(300);
    cout<<".";
    Sleep(300);
    cout<<".";
    Sleep(300);
    cout<<".";
    Sleep(300);
    system("cls");
    cout<<"\033[33m";
    if (value!=accountNumber)
    cout<<"Please enter correct account number"<<endl<<"Try again! later"<<endl;
    else 
    {
    cout<<"Your deposit is successfull! now your current balance is "<<balance+price<<endl;
    cout<<"\033[0m";
    Sleep(1000);
    break;
    }
    }
}
void wihtdrawl()
{
    string hname,number;
    cout<<"Enter Account number for withdrawl"<<endl;
    cin>>number;
    cout<<"Enter Account holder name"<<endl;
    cin>>hname;
    cout<<"Enter amount you withdrawl"<<endl;
    cin>>amount;
    system("cls");
    cout<<"processing";
    Sleep(300);
    cout<<".";
    Sleep(300);
    cout<<".";
    Sleep(300);
    cout<<".";
    Sleep(300);
    cout<<".";
    Sleep(300);
    system("cls");
    cout<<"\033[33m";
    if (amount<=balance+price)
    {
        cout<<"Your transection successfull"<<endl;
        cout<<"Receipt:\n     Withdrawl amount is "<<amount<<endl;
        cout<<"     New balance is "<<amount-balance<<"\n     Holder account number is "<<number<<"\n     Holder name is "<<hname<<endl;
        Sleep(1000);
    }
    else 
    cout<<"Your balance is insufficient please deposit cash"<<endl;
    Sleep(1000);
    cout<<"\033[0m";
}
void inquirey ()
{
    cout<<"\033[33m";
    cout<<"Your account name is "<<name<<"\nYour account number is "<<accountNumber<<endl;
    cout<<"Your current balance is "<<balance+price-amount<<endl;
    Sleep(1000);
    cout<<"\033[0m";
}
void information ()
{
    cout<<"\033[33m";
    cout<<"Customer name is "<<name<<endl;
    cout<<"Customer account number is "<<accountNumber<<endl;
    cout<<"Customer current balance is "<<balance+price-amount<<endl;
    Sleep(1000);
    cout<<"\033[0m";
}
void deleteAcc()
{
    for (int i=1; i<=3; i++)
    {
    string dname,daccount;
    cout<<"Enter account name"<<endl;
    cin>>dname;
    cout<<"Enter account number"<<endl;
    cin>>daccount;
    system("cls");
    cout<<"processing";
    Sleep(300);
    cout<<".";
    Sleep(300);
    cout<<".";
    Sleep(300);
    cout<<".";
    Sleep(300);
    cout<<".";
    Sleep(300);
    system("cls");
    cout<<"\033[33m";
    if (dname==name && daccount==accountNumber)
    {
    cout<<"Your account is delete now please use for our service create your account"<<endl;
    Sleep(1000);
    break;
    }
    else
    cout<<"Your account information was not found please try again later"<<endl;
    Sleep(1000);
    cout<<"\033[0m";
    }
}
};
int main ()     // Main Function
{
    system("cls");
    string aname,aaccount;
    double abalance;
    cout<<"Enter your account name"<<endl;
    cin>>aname;
    cout<<"Enter your account number"<<endl;
    cin>>aaccount;
    cout<<"Enter your balance"<<endl;
    cin>>abalance;
    system("cls");
    Bank tamoor(aname,aaccount,abalance);
    int option;
    do
    {
        cout<<"\033[33m";
        cout<<"Menu:"<<"\033[0m"<<"\n      1) Deposit\n      2) Withdrawl\n      3) Balance Inquirey\n      4) Customer Information\n      5) Account Delete\n      6) Exit"<<endl;
        cout<<"\033[33m";
        cout<<"Choice: ";
        cout<<"\033[0m";
        cin>>option;
        system("cls");
        cout<<"processing";
        Sleep(300);
        cout<<".";
        Sleep(300);
        cout<<".";
        Sleep(300);
        cout<<".";
        Sleep(300);
        cout<<".";
        Sleep(300);
        system("cls");
    switch (option)
    {
        case 1:
        {
            tamoor.deposit();   // Call by object
        }
        break;
        case 2:
        {
            tamoor.wihtdrawl();
        }
        break;
        case 3:
        {
            tamoor.inquirey();
        }
        break;
        case 4:
        {
            tamoor.information();
        }
        break;
        case 5:
        {
            tamoor.deleteAcc();
        }
        break;
        case 6:
        {
            cout<<"You are exit now thanks for using our services"<<endl;
        }
        break;
        default :
        {
            cout<<"Your input is wrong please enter correct input"<<endl;
        }
    }
    }
    while (option!=6 || option!=5);
    return 0;
}