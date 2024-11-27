#include<iostream>
using namespace std;

struct Arithmetic
{
    int num1;
    int num2;

}s1;

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
   

   char op;
    cout << "Enter the expression you want to perform  : ";
    cin >> op;

    switch(op)
    {
        case '+':
        add(s1.num1,s1.num2);
        break;

        case '-':
        sub(s1.num1,s1.num2);
        break;

        case '*':
        mul(s1.num1,s1.num2);
        break;

        case '/':
        divi(s1.num1,s1.num2);
        break;

        default:
        cout << "Invalid Expression";
        break;
    }


    return 0;
}