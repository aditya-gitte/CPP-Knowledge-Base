#include <iostream>

using namespace std;

class MyClass {
public:
    // Default constructor
    MyClass() {
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    MyClass(int value) {
        cout << "Parameterized constructor called with value: " << value << endl;
    }

    // Copy constructor
    MyClass(const MyClass& other) {
        cout << "Copy constructor called" << endl;
    }

    // Move constructor
    MyClass(MyClass&& other) noexcept {
        cout << "Move constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};


int main() {
    // Create objects using different constructors
    MyClass obj1; // Default constructor
    MyClass obj2(10); // Parameterized constructor
    MyClass obj3 = obj1; // Copy constructor
    MyClass obj4 = std::move(obj2); // Move constructor

    return 0;
}