#include<iostream>
using namespace std;

class ComplexNo
{
    static int Objcount;
    int real;
    int img;
    public:
    ComplexNo(int real,int img)
    {
        Objcount++;
        cout << "Parameterized Constructor Called for objcount : " << Objcount << endl;
        this->real=real;
        this->img=img;
    }
    void Display()
    {
        cout << "Complex No : " << Objcount << endl;
        cout << real << "+" << img << "i" << endl;
    }
    inline ComplexNo Multiply(ComplexNo& cnum)
    {
        return ComplexNo(this->real*cnum.real-this->img*cnum.img,this->real * cnum.img + this->img * cnum.real);
    }
    ~ComplexNo()
    {
        cout << "Destructor Called"<< endl;
    }
};
int ComplexNo::Objcount=0;

int main()
{
    ComplexNo num1(2,3);
    num1.Display();
    ComplexNo num2(1,1);
    num2.Display();
    ComplexNo result=num1.Multiply(num2);
    result.Display();
}