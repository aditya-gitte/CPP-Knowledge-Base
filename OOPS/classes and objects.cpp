#include <iostream>

using namespace std;

class MyClass {
    private:
        int x; // private member variable
    public:

        int y; // public member variable
        void display() {
            cout << "Hello, I am a MyClass object!" << endl;
        }

        void setX(int value) {
            x = value;
        }

        int getX() {
            return x;
        }

int main() {
    // Creating an object of MyClass
    MyClass obj;
    obj.display();

    // Creating a pointer to MyClass and assigning heap memory
    MyClass* ptr = new MyClass();
    ptr->display();

    // Accessing private member variables using public member functions
    obj.setX(10);

    //Since the varaible is private, it cannot be accessed from outside of the class
    obj.x = 20; // This will give an error
    obj.y = 20; // This will work fine

    // Accessing public member variable using pointer
    ptr->y = 30;
    cout << "Value of y: " << ptr->y << endl;

    // Don't forget to deallocate the memory
    delete ptr;

    return 0;
}