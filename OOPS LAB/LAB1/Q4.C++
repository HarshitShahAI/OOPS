#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int numCalls;
    float billAmount;

    void inputData() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter number of calls: ";
        cin >> numCalls;
    }

    void computeBill() {
        if (numCalls <= 100) {
            billAmount = 200;
        } else if (numCalls <= 150) {
            billAmount = 200 + (numCalls - 100) * 0.60;
        } else if (numCalls <= 200) {
            billAmount = 200 + (50 * 0.60) + (numCalls - 150) * 0.50;
        } else {
            billAmount = 200 + (50 * 0.60) + (50 * 0.50) + (numCalls - 200) * 0.40;
        }
    }

    void outputData() {
        cout << "\nCustomer Name: " << name << endl;
        cout << "Number of calls: " << numCalls << endl;
        cout << "Total bill amount: Rs. " << billAmount << endl;
    }
};

int main() {
    Employee e;
    e.inputData();
    e.computeBill();
    e.outputData();

    return 0;
}
