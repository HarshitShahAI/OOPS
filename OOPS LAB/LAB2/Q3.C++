#include<iostream>
#include<new>
using namespace std;

class Employee
{
    string name;
    int code;
    string designation;
    int experience;
    int age;
    public:
    static int count;
    void getData()
    {
        cout << "Employee Details" << endl;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the code: ";
        cin >> code;
        cout << "Enter the designation: ";
        cin >> designation;
        cout << "Enter the experience: ";
        cin >> experience;
        cout << "Enter the age: ";
        cin >> age;
        cout << "\n";
    }
    Employee()
    {
        cout << "Default Constructor" << endl;
        getData();
        count++;
    }
    void display()
    {
        cout << "Display Employee Details of " << endl;
        cout << "Name: " << name  << endl;
        cout << "Code: " << code << endl;
        cout << "Designation: " << designation << endl;
        cout << "Experience: " << experience << endl;
        cout << "age: " << age << endl;
        cout << "\n";
   
    }
    static void displayAll(Employee empArr[], int size)
    {
        for(int i = 0; i < size; i++)
        {
            empArr[i].display();
        }
    }
    ~Employee()
    {
        cout << "Destructor called" << endl;
    }
    friend class EmployeeManager;
};
int Employee::count=0;

class EmployeeManager
{
    string name;
    int code;
    public:
    void getDataEM()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the code: ";
        cin >> code;
    }
    EmployeeManager()
    {
        cout << "Employee Manager Constructor";
        getDataEM();
    }
    void displayEM()
    {
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
    }
    void promote(Employee& emp,string job_profile)
    {
        emp.designation=job_profile;
    }
};

int main()
{
    int size;
    cout << "No of employees: ";
    cin >> size;
    Employee emp1[size];
    cout << "Total Employees: " << Employee::count << endl;
    Employee::displayAll(emp1,size);
    EmployeeManager eemp;
    eemp.promote(emp1[1],"Senior-SDE");
    Employee::displayAll(emp1,size);
}