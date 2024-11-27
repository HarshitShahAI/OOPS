#include <iostream>
#include <string>
using namespace std;

class Personnel {
private:
    string name;
    string dob;
    string bloodGroup;
    float height;
    float weight;
    string insurancePolicyNumber;
    string contactAddress;
    string telephoneNumber;
    string drivingLicenceNumber;

public:
    
    Personnel() {
        name = "";
        dob = "";
        bloodGroup = "";
        height = 0.0;
        weight = 0.0;
        insurancePolicyNumber = "";
        contactAddress = "";
        telephoneNumber = "";
        drivingLicenceNumber = "";
    }

    
    Personnel(string n, string d, string b, float h, float w, string ip, string c, string t, string dl) {
        name = n;
        dob = d;
        bloodGroup = b;
        height = h;
        weight = w;
        insurancePolicyNumber = ip;
        contactAddress = c;
        telephoneNumber = t;
        drivingLicenceNumber = dl;
    }

    
    Personnel(const Personnel &p) {
        name = p.name;
        dob = p.dob;
        bloodGroup = p.bloodGroup;
        height = p.height;
        weight = p.weight;
        insurancePolicyNumber = p.insurancePolicyNumber;
        contactAddress = p.contactAddress;
        telephoneNumber = p.telephoneNumber;
        drivingLicenceNumber = p.drivingLicenceNumber;
    }

    
    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Blood Group: " << bloodGroup << endl;
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Insurance Policy Number: " << insurancePolicyNumber << endl;
        cout << "Contact Address: " << contactAddress << endl;
        cout << "Telephone Number: " << telephoneNumber << endl;
        cout << "Driving Licence Number: " << drivingLicenceNumber << endl;
    }

   
    ~Personnel() {
        cout << "Personnel object is destroyed." << endl;
    }
};

int main() {
    
    Personnel* p1 = new Personnel("John Doe", "1990-01-01", "O+", 175.5, 70.5, "INS12345", "123 Main St", "123-456-7890", "DL123456");
    
    cout << "Personnel details:" << endl;
    p1->displayDetails();
    
    
    delete p1;

    return 0;
}
