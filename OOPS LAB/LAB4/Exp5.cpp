#include<iostream>
#include<string>
using namespace std;

class Publication
{
    // static int Objcount;
    string title;
    int price;
    string author_name;
    public:
    Publication()
    {
        cout << "Publication Constructor called" << endl;
    }
    void getDetails()
    {
        cout << "Enter the Details: " << endl;
        cout << "Title: ";
        cin >> title;
        cout << "price: ";
        cin >> price;
        cout  << "Author_name: ";
        cin >> author_name;
    }
    void Display()
    {
        cout << "Display the Details For Book: " << title << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Author_name: " << author_name << endl;
    }
    ~Publication()
    {
        cout << "Publication Destructor Called: " << endl;
    }
};
// int Publication::Objcount=0;

class Book:public Publication
{
    int page_count;
    public:
    Book()
    {
        Publication P1;
        cout << "Book Constructor: "<< endl;
        getData(P1);
        DisplayData(P1);
    }
    void getData(Publication& P1)
    {
        P1.getDetails();
        cout << "Enter the page count: " << endl;
        cin >> page_count;
    }
    void DisplayData(Publication& P1)
    {
        P1.Display();
        cout << "page_Count: " << page_count << endl;
    }
    ~Book()
    {
        cout << "Book Destructor" << endl;
    }
};

class EBook:public Publication
{
    int play_time;
    public:
    EBook()
    {
        Publication P1;
        cout << "EBook Constructor: "<< endl;
        getData(P1);
        DisplayData(P1);
    }
    void getData(Publication& P1)
    {
        P1.getDetails();
        cout << "Enter the play time: " << endl;
        cin >> play_time;
    }
    void DisplayData(Publication& P1)
    {
        P1.Display();
        cout << "page_Count: " << play_time << endl;
    }
    ~EBook()
    {
        cout << "EBook Destructor" << endl;
    }
};

int main()
{
    Book B1;
    EBook EB1;
}