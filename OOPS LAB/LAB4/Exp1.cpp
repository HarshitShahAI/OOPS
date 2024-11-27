#include<iostream>
#include<string>
using namespace std;

class Employee
{
    static int objectno;
    string name;
    double salary;
    double bonus;
    public:
    Employee()
    {
        cout << "Employee Constructor" << endl;
        cout << "Objectno: " << objectno++ << endl;
    }
    void get_Data()
    {
        cout << "Enter the details: " << endl;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void compute_Bonus()
    {
        if(salary>=2000)
        {
            bonus=0.1*salary;
        }
    }
    void display()
    {
        cout << endl;
        cout << "Employee: " << name << " details" << endl;
        cout << "Name: " << name << endl;
        cout << "Bonus: " << bonus << endl;
    }
    ~Employee()
    {
        cout << "Destructor called" << endl;
    }

};
int Employee::objectno=1;

int main()
{
    Employee emp1;
    emp1.get_Data();
    emp1.compute_Bonus();
    emp1.display();
}