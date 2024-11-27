#include<iostream>
#include<new>
using namespace std;

class Integer
{
    static int objcount;
    int val;
    public:
    Integer(int val)
    {
        cout << "Integer Constructor: " << endl;
        this->val=val;
        cout << "Object No.: " << objcount++ << endl;

    }
    void display()
    {
        cout << "Value: " << val << endl;
    }
    friend Integer operator+(Integer &int1,Integer &int2);
};
int Integer::objcount=1;
Integer operator+(Integer &i1,Integer &i2)
{
    return Integer(i1.val+i2.val);
}

int main()
{
    Integer i1(10);
    i1.display();
    Integer i2(20);
    i2.display();
    Integer i3=i1+i2;
    i3.display();
}