#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int publicVar;
    void publicFunc() {
        cout << "This is a public function in the Base class." << endl;
    }

private:
    int privateVar;
    void privateFunc() {
        cout << "This is a private function in the Base class." << endl;
    }

protected:
    int protectedVar;
    void protectedFunc() {
        cout << "This is a protected function in the Base class." << endl;
    }
};

// Derived class with public inheritance
class DerivedPublic : public Base {
public:
    void derivedPublicFunc() {
        cout << "This is a function in the DerivedPublic class." << endl;
        cout << "Accessing publicVar from Base class: " << publicVar << endl;
        publicFunc();
    }
};

// Derived class with private inheritance
class DerivedPrivate : private Base {
public:
    void derivedPrivateFunc() {
        cout << "This is a function in the DerivedPrivate class." << endl;
        cout << "Accessing publicVar from Base class: " << publicVar << endl;
        publicFunc();
    }
};

// Derived class with protected inheritance
class DerivedProtected : protected Base {
public:
    void derivedProtectedFunc() {
        cout << "This is a function in the DerivedProtected class." << endl;
        cout << "Accessing publicVar from Base class: " << publicVar << endl;
        publicFunc();
    }
};

int main() {
    DerivedPublic derivedPublic;
    derivedPublic.derivedPublicFunc();

    DerivedPrivate derivedPrivate;
    // derivedPrivate.derivedPrivateFunc(); // This line will cause a compilation error

    DerivedProtected derivedProtected;
    derivedProtected.derivedProtectedFunc();

    return 0;
}