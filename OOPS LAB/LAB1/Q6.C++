#include<iostream>
using namespace std;

struct Complex
{
    int real;
    int img;

}C1,C2;

void add(Complex a,Complex b)
{
    cout << "Addition  " << a.real+b.real << "+"  << "i" << a.img+b.img<< endl;
}

void sub(Complex a,Complex b)
{
    cout << "Subtraction  " << a.real-b.real << "+"  << "i" << a.img-b.img<< endl;
}

void mul(Complex a,Complex b)
{
    cout << "Multiplication  " << a.real*b.real << "+"  << "i" << a.img*b.img<< endl;
}

void div(Complex a,Complex b)
{
    cout << "Division  " << a.real/b.real << "+"  << "i" << a.img/b.img<< endl;
}

void menu()
{

}

int main()
{
    Complex C1;
    C1.real=8;
    C1.img=4;
    Complex C2;
    C2.real=8;
    C2.img=4;

    add(C1,C2);
    sub(C1,C2);
    mul(C1,C2);
    div(C1,C2);
    return 0;

}
