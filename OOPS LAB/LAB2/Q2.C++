#include <iostream>
#include <string>
using namespace std;

class StringArray
{
    string *arr;
    int size;

public:
    
    StringArray()
    {
        size = 0;
        arr = nullptr;
    }

    
    StringArray(int n)
    {
        size = n;
        arr = new string[size];
    }

    
    StringArray(const StringArray &obj)
    {
        size = obj.size;
        arr = new string[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = obj.arr[i];
        }
    }

    
    ~StringArray()
    {
        delete[] arr;
    }

    
    void readArray()
    {
        cout << "Enter " << size << " strings: " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    
    void replaceString(const string &S1, const string &S2)
    {
        for (int i = 0; i < size; i++)
        {
            size_t pos = arr[i].find(S1);
            if (pos != string::npos)
            {
                arr[i].replace(pos, S1.length(), S2);
            }
        }
    }

    
    void displayArray()
    {
        cout << "Updated array: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    StringArray A(n);
    A.readArray();

    string S1, S2;
    cout << "Enter the string to be replaced (S1): ";
    cin >> S1;
    cout << "Enter the string to replace with (S2): ";
    cin >> S2;

    A.replaceString(S1, S2);
    A.displayArray();

    return 0;
}
