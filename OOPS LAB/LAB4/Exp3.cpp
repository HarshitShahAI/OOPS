#include<iostream>
#include<string>
#include<new>
using namespace std;

class Employee
{
    string name;
    double income;
    double tax;
    public:
    Employee()
    {
        cout << "Employee constructor" << endl;
    }
    void getData()
    {
        cout << "Employee Details: " << endl;
        cout << "Employee Name: ";
        cin >> name;
        cout << "Employee income: ";
        cin >> income;
    }
    void computeTax()
    {
      if(income <= 100000)
      {
        tax=0;
      }
      else if(income > 100000 && income <= 150000)
      {
        tax=(0.10*(income-100000));
      }
      else if(income > 150000 && income <= 200000)
      {
        tax=(0.20*(income-150000));
      }
      else
      {
        tax=(0.30*(income-200000));
      }
    }
    void payableTax()
    {
      cout << endl;
      cout << "Employee " << name  << "Invoice" << endl;
      cout << "Name: " << name << endl;
      cout << "Tax to be paid: " << tax << endl;
   }
    ~Employee()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    Employee emp1;
    emp1.getData();
    emp1.computeTax();
    emp1.payableTax();
}