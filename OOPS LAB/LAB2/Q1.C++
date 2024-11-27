#include <iostream>
#include <string>
using namespace std;

class LineArray {
private:
    string* lines;
    int size;

public:
    LineArray() {
        size = 0;
        lines = nullptr;
    }

    LineArray(int n) {
        size = n;
        lines = new string[size];
        cout << "Enter " << size << " lines:" << endl;
        for (int i = 0; i < size; ++i) {
            getline(cin, lines[i]);
        }
    }

    LineArray(const LineArray &obj) {
        size = obj.size;
        lines = new string[size];
        for (int i = 0; i < size; ++i) {
            lines[i] = obj.lines[i];
        }
    }

    void checkAndPrint(string S) {
        int count = 0;
        for (int i = 0; i < size; ++i) {
            if (lines[i] == S) {
                cout << "Line found: " << lines[i] << endl;
                count++;
            }
        }
        if (count > 0) {
            cout << "The string was repeated " << count << " times." << endl;
        } else {
            cout << "The string was not found." << endl;
        }
    }

    ~LineArray() {
        delete[] lines;
        cout << "Memory is freed." << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    cin.ignore(); 

    LineArray obj(n);

    string searchString;
    cout << "Enter a string to search for: ";
    getline(cin, searchString);

    obj.checkAndPrint(searchString);

    return 0;
}
