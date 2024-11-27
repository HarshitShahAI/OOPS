#include<iostream>
#include<string>
using namespace std;

class PayRoll
{
    
    string name;
    string code;
    string designation;
    float AccNo;
    string DOJ;
    double Basicpay;
    double DA,HRA,CCA;
    double LIC,CPF;
    public:
    PayRoll()
    {
        cout << "Default Constructor" << endl;
        DA=0,HRA=0,CCA=0;
    }
    PayRoll(string name,string code,string designation,float AccNo,string DOJ,float BasicPay)
    {
        this->name=name;
        this->code=code;
        this->designation=designation;
        this->AccNo=AccNo;
        this->DOJ=DOJ;
        this->Basicpay=BasicPay;
    }
    void display()
    {
        cout << "PayRoll for " << code << endl;
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Designation: " << designation << endl;
        cout << "AccNo: " << AccNo << endl;
        cout << "DOJ: " << DOJ << endl;
        cout << "BasicPay: " << Basicpay << endl;
    }
    static void displayALL(PayRoll parr[],int size)
    {
        for(int i = 0; i < size; i++)
        {
            parr[i].display();
        }
    } 
    ~PayRoll()
    {
        cout << "Payroll Destructor" << endl;
    }
    friend class AccountDept;
};

class AccountDept
{
   public:
   AccountDept()
   {
     cout << "AccountDept Constructor" << endl;
;  }
   void get_bouns(PayRoll& p,float DA,float HRA,float CCA)
   {
     cout << "Bonuses: " << endl;
     p.DA=DA;
     p.HRA=HRA;
     p.CCA=CCA;
     cout << "DA: " << p.DA << endl;
     cout << "HRA: " << p.HRA << endl;
     cout << "CCA: " << p.CCA << endl;
   }

   void get_deductions(PayRoll& p,float LIC,float CPF)
   {
     cout << "Deductions: " << endl;
     p.LIC=LIC;
     p.CPF=CPF;
     cout << "LIC: " << LIC << endl;
     cout << "CPF: " << CPF << endl;
   }

   void Salary(PayRoll& p)
   {
     p.display();
     cout << "\n";
     cout << "Total Monthly Income: " << endl;
     int salary=p.Basicpay+p.DA+p.HRA+p.CCA-p.LIC-p.CPF;
     cout << p.name << " has a salary of" << salary << endl;
   }

   friend class PayRoll;

   ~AccountDept()
   {
     cout << "AccountDept Destructor" << endl;
   }

};
int main()
{
    PayRoll *p=new PayRoll("Om","AI001","SDE",1245,"20-08-2023",2500.0); 
    // p->display();
    AccountDept Acc;
    Acc.get_bouns(*p,200,300,250);
    Acc.get_deductions(*p,100,150);
    Acc.Salary(*p);
}