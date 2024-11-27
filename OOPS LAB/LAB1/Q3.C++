#include <iostream>
#include <string>
using namespace std;

struct Publication {
    string title;
    float price;
    string author;

    void getData() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter author's name: ";
        cin.ignore();
        getline(cin, author);
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Author: " << author << endl;
    }
};

struct Book : public Publication {
    int pageCount;

    void getData() {
        Publication::getData();
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void display() {
        Publication::display();
        cout << "Page Count: " << pageCount << endl;
    }
};

struct Ebook : public Publication {
    int playTime;

    void getData() {
        Publication::getData();
        cout << "Enter playing time (in minutes): ";
        cin >> playTime;
    }

    void display() {
        Publication::display();
        cout << "Playing Time: " << playTime << " minutes" << endl;
    }
};

int main() {
    Book b;
    Ebook e;

    cout << "Enter details for Book:" << endl;
    b.getData();
    cout << "\nBook Details:" << endl;
    b.display();

    cout << "\nEnter details for Ebook:" << endl;
    e.getData();
    cout << "\nEbook Details:" << endl;
    e.display();

    return 0;
}
