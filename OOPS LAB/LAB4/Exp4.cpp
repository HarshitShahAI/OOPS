#include<iostream>
#include<string>
using namespace std;

class BankAcc
{
    string name;
    string AccNo;
    string type;
    double balance;
    public:
    BankAcc()
    {
        cout << "BankAcc Constructor" << endl;
        balance=0;
    }
    void getData()
    {
        cout << "BankAcc holder details: " << endl;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter the Acc No: ";
        cin >> AccNo;
        cout << "Enter type of Acc: ";
        cin >> type;
    }
    void getDeposit()
    {
        int deposit;
        cout << "How much you want to deposit: ";
        cin >> deposit;
        balance+=deposit;
        cout << "Your new balance is: " << balance << endl;
    }
    void withDraw()
    {
        int withd;
        cout << "Balance: " << balance << endl;
        cout << "How much you want to withdraw: ";
        cin >> withd;
        balance-=withd;
        cout << "Current Balance: " << balance << endl;
    }
    void display()
    {
        cout << "Bank Acc: " << AccNo << endl;
        cout << "Name: " << name << endl;
        cout << "AccNo: " << AccNo << endl;
        cout << "Type: " << type << endl;
        cout << "Balance: " << balance << endl;
    }
    ~BankAcc()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
   BankAcc acc1;
   acc1.getData();
   acc1.getDeposit();
   acc1.withDraw();
   acc1.display();
}
