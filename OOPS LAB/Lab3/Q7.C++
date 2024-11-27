#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int accessionNumber;
    string author;
    string title;
    int yearOfPublication;
    string publisher;
    double cost;

public:
    
    Book() {
        accessionNumber = 0;
        author = "";
        title = "";
        yearOfPublication = 0;
        publisher = "";
        cost = 0.0;
    }

    
    Book(int accNo, string auth, string tit, int year, string pub, double c) {
        accessionNumber = accNo;
        author = auth;
        title = tit;
        yearOfPublication = year;
        publisher = pub;
        cost = c;
    }

    
    void inputDetails() {
        cout << "Enter Accession Number: ";
        cin >> accessionNumber;
        cin.ignore();
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Title of the Book: ";
        getline(cin, title);
        cout << "Enter Year of Publication: ";
        cin >> yearOfPublication;
        cin.ignore();
        cout << "Enter Publisher's Name: ";
        getline(cin, publisher);
        cout << "Enter Cost of the Book: ";
        cin >> cost;
    }

    
    void displayDetails() const {
        cout << "Accession Number: " << accessionNumber << endl;
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
        cout << "Year of Publication: " << yearOfPublication << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Cost: " << cost << endl;
    }

    
    ~Book() {
        cout << "Book object is destroyed." << endl;
    }
};

int main() {
    Book book1;

    cout << "Enter book details:" << endl;
    book1.inputDetails();
    
    cout << "\nBook details:" << endl;
    book1.displayDetails();

    return 0;
}
