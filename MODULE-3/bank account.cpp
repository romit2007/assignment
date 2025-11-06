#include<iostream>
using namespace std;
class Bankamount
{
    private:
    float balance;

    public:
    Bankamount(float currentbalance)
    {
        if(currentbalance>0)
        {
            balance=currentbalance;
        }
        else
        {
            balance=0;

        }
    }

    void deposit(float ammount)
    {
        if(ammount>0)
        {
            balance+=ammount;
            cout<<"Deposited: "<<ammount<<endl;
        }
        else
        {
            cout<<"Invalid depoite";
        }
    }

    void withdraw(float ammount)
    {
        if(ammount>=0 && ammount<=balance)
        {
            balance-=ammount;
            cout<<"Withdrew: "<<ammount<<endl;
        }
        else
        {
            cout<<"Invalid withdrew";
        }
    }

    double getBalance()
    {
        return balance;
    }
};
int main()
{
    float currentBalance, depositAmount, withdrawAmount;

    cout << "Enter initial balance: ";
    cin >> currentBalance;

    Bankamount account(currentBalance); 

    cout << "Enter amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);  

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    cout << "Current Balance: " << account.getBalance() << endl;

    return 0;
}
