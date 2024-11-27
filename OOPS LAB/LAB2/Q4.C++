#include <iostream>
#include <string>
using namespace std;

class Patient
{
    string name;
    char sex;
    int age;
    int wardnumber;
    int bed_number;
    string nature_illness;
    string date;
public:
    static int count;
    void getPatientData()
    {
        cout << "Patient Medical Details" << endl;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the sex: ";
        cin >> sex;
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the ward_number: ";
        cin >> wardnumber;
        cout << "Enter the bed_number: ";
        cin >> bed_number;
        cout << "Enter the nature of illness: ";
        cin >> nature_illness;
        cout << "Enter the date of admission: ";
        cin >> date;
        cout << "\n";
    }

    Patient()
    {
        cout << "Patient Default Constructor" << endl;
        getPatientData();
        count++;
    }

    void display()
    {
        cout << "Display Patient Medical Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Sex: " << sex << endl;
        cout << "Age: " << age << endl;
        cout << "Ward number: " << wardnumber << endl;
        cout << "Bed number: " << bed_number << endl;
        cout << "Nature of illness: " << nature_illness << endl;
        cout << "Date of admission: " << date << endl;
        cout << "\n";
    }

    static void displayAll(Patient parr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            parr[i].display();
        }
    }

    friend class Hospital_Management;

    ~Patient()
    {
        cout << "Patient Destructor" << endl;
    }
};

class Hospital_Management
{
public:
    void change_ward(Patient &p, int w)
    {
        p.wardnumber = w;
    }
    void change_bed(Patient &p, int b)
    {
        p.bed_number = b;
    }
};

int Patient::count = 0;

int main()
{
    int size;
    cout << "Enter number of patients: ";
    cin >> size;

    
    Patient* p = new Patient[size];

    cout << "Total patients: " << Patient::count << endl;
    Patient::displayAll(p, size);

    Hospital_Management hm;
    hm.change_ward(p[0], 2);  
    hm.change_bed(p[0], 101); 

    cout << "After changing ward and bed:" << endl;
    Patient::displayAll(p, size);

    
    delete[] p;

    return 0;
}
