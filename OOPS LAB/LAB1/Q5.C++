#include<iostream>
using namespace std;

struct Arithmetic
{
    int num1;
    int num2;

}Arithmetic;

void add(int a,int b)
{
    cout << "Addition  " << a+b << endl;
}

void sub(int a,int b)
{
    cout << "Subtraction  " << a-b << endl;
}

void mul(int a,int b)
{
    cout << "Multiplication  " << a*b << endl;
}

void divi(int a,int b)
{
    cout << "Division  " << a/b << endl;
}

int main()
{
    struct Arithmetic s1;
    s1.num1=8;
    s1.num2=2;
    add(s1.num1,s1.num2);
    sub(s1.num1,s1.num2);
    mul(s1.num1,s1.num2);
    divi(s1.num1,s1.num2);
    return 0;
}