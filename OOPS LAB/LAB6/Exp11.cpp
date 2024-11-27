#include<iostream>
#include<new>
using namespace std;

class Integer
{
   int i,j;
   public:
   Integer()
   {
     i=0;
     j=0;
   }
   friend istream& operator>>(istream &mycin,Integer &i1);
   friend ostream& operator<<(ostream &mycout,Integer &i1);

   void get_Data(Integer &i1)
   {
      cout << "Enter the values for i and j: ";
      cin >> i1;
   }
   void display(Integer &i1)
   {
     cout << "The values of i and j: ";
     cout << i1.i  << " " << i1.j;
   }
};
istream& operator>>(istream &mycin,Integer &i1)
{
   mycin >> i1.i >> i1.j;
   return mycin;

}
ostream& operator<<(ostream &mycout,Integer &i1)
{
   mycout << i1.i << i1.j;
   return mycout;
}

int main()
{
   Integer i1;
   i1.get_Data(i1);
   i1.display(i1);
}