#include<iostream>
#include<new>
using namespace std;

class Marksheet
{
    string name;
    int rollno;
    int subcode;
    string subname;
    int internalmarks;
    int externalmarks;
    public:
    Marksheet()
    {
        cout << "Marksheet Constructor" << endl;
    }
    Marksheet(string name,int rollno,int subcode,string subname)
    {
        this->name=name;
        this->rollno=rollno;
        this->subcode=subcode;
        this->subname=subname;
    }
    void display()
    {
        cout << "Marksheet" << endl;
        cout << "Name: " << name << endl;
        cout << "Rollno: " << rollno << endl;
        cout << "subcode: " << subcode << endl;
        cout << "subname: " << subname << endl;
    }
    friend class Student;
    ~Marksheet()
    {
        cout << " marksheet Destructor" << endl;
    }


};

class Student
{
    public:
    Student()
    {
        cout << "Dept Constructor" << endl;
    }
    void internalMarks(Marksheet& m,int intermarks)
    {
        m.internalmarks=intermarks;
    }
    void externalMarks(Marksheet& m,int extermarks)
    {
        m.externalmarks=extermarks;
    }
    void Total(Marksheet& m)
    {
       m.display();
       internalMarks(m,15);
       externalMarks(m,75);
       cout << "Total: " << m.internalmarks+m.externalmarks << endl;
    }
    ~Student()
    {
        cout << "Dept Destructor" << endl;
    }

};

int main()
{
    Marksheet *m=new Marksheet("Om",45,231,"OOPS");
    Student s;
    s.Total(*m);
    return 0;
}
