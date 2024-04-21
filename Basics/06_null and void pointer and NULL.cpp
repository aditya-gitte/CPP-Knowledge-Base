#include <iostream>

#include <iostream>

using namespace std;


int main() {
    
    // - Void pointer is a pointer which has no data type associated with it
    // - It can hold the address (point to) of any type and can be typcasted to any type

    void *ptr=nullptr;
    int* newPtr = new int;
    ptr = newPtr;
    cout << "The address of the pointer is " << ptr << endl;   //0x158e06000


    //NULL vs nullptr
    /**
     * - NULL is a preprocessor macro which is defined as 0
     * - nullptr is a keyword which is defined in C++11 and is a pointer literal
     * - nullptr is type safe and NULL is not
     * - consider a function void foo(int) and an overloaded function void foo(int*). If you call foo(NULL), the foo(int) version will be called, because NULL is an integer. But if you call foo(nullptr), the foo(int*) version will be called, because nullptr is a pointer.
     * - In general, it is recommended to use nullptr when you want to represent a null pointer, because it is type-safe and makes your intentions clear.
    **/

}