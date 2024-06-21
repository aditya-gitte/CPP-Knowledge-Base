#include <iostream>
using namespace std;

class Base1 {
public:
    void display() {
        cout << "Base1 display" << endl;
    }
};

class Base2 {
public:
    void display() {
        cout << "Base2 display" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display() {
        Base1::display(); // Call display() from Base1
        Base2::display(); // Call display() from Base2
    }
};

int main() {
    Derived obj;
    obj.display(); // Call display() from Derived class
    return 0;
}