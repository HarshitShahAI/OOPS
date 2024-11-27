#include <iostream>
using namespace std;

class A; 

class B {
private:
    int val1;

public:
    B(int val) : val1(val) {}

    friend void exchange(B& obj1, A& obj2);
    
    void display() {
        cout << "Value in class_1: " << val1 << endl;
    }
};

class  A{
private:
    int val2;

public:
    A(int val) : val2(val) {}

    friend void exchange(B& obj1, A& obj2);
    
    void display() {
        cout << "Value in class_2: " << val2 << endl;
    }
};

void exchange(B& obj1, A& obj2) {
    int temp = obj1.val1;
    obj1.val1 = obj2.val2;
    obj2.val2 = temp;
}

int main() {
    B obj1(10);
    A obj2(20);

    cout << "Before exchange:" << endl;
    obj1.display();
    obj2.display();

    exchange(obj1, obj2);

    cout << "After exchange:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}
