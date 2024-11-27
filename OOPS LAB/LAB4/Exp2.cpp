#include<iostream>
#include<string>
using namespace std;

class Bill
{
   static int Custno;
   string name;
   int no_call;
   float bill_amt;
   public:
   Bill()
   {
     cout << "Bill Constructor called" << endl;
     cout << "CustomerID: " << Custno << endl;
   }
   void get_Data()
   {
      cout << "Enter the customer details" << endl;
      cout << "Enter the name: ";
      cin >> name;
      cout << "Enter the no of calls: ";
      cin >> no_call;
   }
   void compute_Bill()
   {
      float default_amt=200;
      if(no_call <= 100)
      {
        bill_amt=default_amt;
      }
      else if(no_call > 100 && no_call <= 150)
      {
        bill_amt=default_amt+(0.60*(no_call-100));
      }
      else if(no_call > 150 && no_call <= 200)
      {
        bill_amt=default_amt+(0.50*(no_call-100));
      }
      else
      {
        bill_amt=default_amt+(0.40*(no_call-100));
      }
   }
   void showBill()
   {
    cout << endl;
    cout << "Customer Bill: " << name << endl;
    cout << "Name: " << name << endl;
    cout << "Amount to be paid: " << bill_amt << endl;
   }
   ~Bill()
   {
     cout << "Destructor called" << endl;
   }
};
int Bill::Custno=1;

int main()
{
    Bill b1;
    b1.get_Data();
    b1.compute_Bill();
    b1.showBill();

}