#include<iostream>
#include<new>
using namespace std;

class Object
{
    static int Objcount;
    int value;
    public:
    Object()
    {
        Objcount++;
        cout << "Constructor called : " << Objcount<< endl;
    }
    void getDetails()
    {
        cout << "Enter the value: ";
        cin >> value;
    }
    void Display()
    {
        cout << "Value: " << value << endl;
    }
};
int Object::Objcount=0;

int main()
{
     int n;
     cout << "Enter the number of object in array of object: ";
     cin >> n;
     Object* arr=new Object[n];
     for(int i=0;i<n;i++)
     {
        arr[i].getDetails();
     }
     for(int i=0;i<n;i++)
     {
        arr[i].Display();
     }
     delete arr;
}