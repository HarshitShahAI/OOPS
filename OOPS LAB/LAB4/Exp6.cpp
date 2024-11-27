#include<iostream>
#include<new>
using namespace std;

class A
{
    public:
    int num1;
    void get_Num1()
    {
        cout << "Enter the num1: ";
        cin >> num1;
    }
    A()
    {
       cout << "A Constructor: " << endl;
    }
    void display()
    {
        cout << "Num1: " << num1 << endl;
    }
    ~A()
    {
        cout << "A Destructor" << endl; 
    }
    friend void findMean(class A &a,class B &Bb);
};
class B
{
    public:
    int num2;
    void get_Num2()
    {
        cout << "Enter the num2: ";
        cin >> num2;
    }
    B()
    {
       cout << "B Constructor: " << endl;
    }
    void display()
    {
        cout << "Num2: " << num2 << endl;
    }
    ~B()
    {
        cout << "B Destructor" << endl; 
    }
    friend void findMean(class A &a,class B &b);
};
void findMean(class A &a,class B &b)
{
    cout << "Mean: " << (a.num1+b.num2)/2 << endl;
}

int main()
{
    A a;
    a.get_Num1();
    a.display();
    B b;
    b.get_Num2();
    b.display();
    findMean(a,b);
}