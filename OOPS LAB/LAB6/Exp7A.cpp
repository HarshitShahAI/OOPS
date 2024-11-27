#include<iostream>
#include<string>
using namespace std;

class Employee
{
    static int objcount;
    int emp_id;
    string emp_name;
    public:
    Employee()
    {
        cout << "Constructor called" << endl;
        objcount++;
    }
    void getData()
    {
        cout << "Employee" << "Details" << endl;
        cout << "Enter employee id: ";
        cin >> emp_id;
        cout << "Enter employee name: ";
        cin >> emp_name;
    }
    void display()
    {
        cout <<  "Employee" << emp_id << "Details";
        cout << "Employee id: " << emp_id << endl;
        cout << "Employee name: " << emp_name << endl;
    }
    static void Display(Employee arr[],int random,int n)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i].emp_id==random)
            {
                cout << "Employee Found: " << endl;
                arr[i].display();
            }
        }
    }
    ~Employee()
    {
        cout << "Destructor called" << endl;
    }
};
int Employee::objcount=0;

int main()
{
    int n;
    cout << "Enter the no. of employees: ";
    cin >> n;
    Employee* arr=new Employee[n];
    for(int i=0;i<n;i++)
    {
       arr[i].getData();
    }
    for(int i=0;i<n;i++)
    {
        arr[i].display();
    }
    Employee::Display(arr,1,n);
    return 0;
}