#include <iostream>
#include <vector>
using namespace std;

class Vector {
    vector<int> elements;

public:
    friend ostream& operator<<(ostream& out, const Vector& v) {
        out << "[";
        for (size_t i = 0; i < v.elements.size(); ++i) {
            out << v.elements[i];
            if (i != v.elements.size() - 1) out << ", ";
        }
        out << "]";
        return out;
    }

    friend istream& operator>>(istream& in, Vector& v) {
        char ch;
        int num;
        v.elements.clear();
        in >> ch; 
        while (ch != ']') {
            in >> num;
            v.elements.push_back(num);
            in >> ch; 
        }
        return in;
    }

    Vector operator+(const Vector& v) const {
        Vector result;
        size_t size = min(elements.size(), v.elements.size());
        for (size_t i = 0; i < size; ++i) {
            result.elements.push_back(elements[i] + v.elements[i]);
        }
        return result;
    }

    Vector operator-(const Vector& v) const {
        Vector result;
        size_t size = min(elements.size(), v.elements.size());
        for (size_t i = 0; i < size; ++i) {
            result.elements.push_back(elements[i] - v.elements[i]);
        }
        return result;
    }
};

int main() {
    Vector v1, v2, sum, diff;
    cin >> v1 >> v2;
    sum = v1 + v2;
    diff = v1 - v2;
    cout << "Vector 1: " << v1 << endl;
    cout << "Vector 2: " << v2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
}
