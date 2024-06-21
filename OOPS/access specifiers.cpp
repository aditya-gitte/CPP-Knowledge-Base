#include <iostream>

class Base {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;
};

class Derived : public Base {
public:
    void accessBaseMembers() {
        publicVar = 10;         // Accessible
        protectedVar = 20;      // Accessible
        // privateVar = 30;     // Not accessible (private member of Base)
    }
};

int main() {
    Base baseObj;
    baseObj.publicVar = 10;         // Accessible
    // baseObj.protectedVar = 20;   // Not accessible (protected member of Base)
    // baseObj.privateVar = 30;     // Not accessible (private member of Base)

    Derived derivedObj;
    derivedObj.publicVar = 10;      // Accessible
    // derivedObj.protectedVar = 20; // Not accessible (protected member of Base)
    // derivedObj.privateVar = 30;   // Not accessible (private member of Base)

    return 0;
}