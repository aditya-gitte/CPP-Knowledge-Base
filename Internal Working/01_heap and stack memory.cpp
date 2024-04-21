#include <iostream>

using namespace std;

//stack memory is the memory that is allocated by the compiler when the program is executed.
//stack memory is used to store local variables and function call.
//stack memory is used in a LIFO (Last In First Out) manner.
//stack memory is faster than heap memory.
//stack memory is limited.
//stack memory is automatically deallocated when the program is terminated.
//stack memory is not accessible to the programmer.
//stack memory is not flexible.
//stack memory is not resizable.
//stack memory is thread-safe.
//stack memory is not suitable for large memory allocation.
//stack memory is not suitable for long term storage.
//stack memory is not suitable for dynamic memory allocation.
//stack memory is not suitable for recursive function calls.


//heap memory is the memory that is allocated by the programmer when the program is executed.
//heap memory is used to store global variables and static variables.

int main() {
    // Stack memory allocation
    int stackVariable = 10;
    cout << "Stack variable value: " << stackVariable << endl;

    // Heap memory allocation
    int* heapVariable = new int(20);
    cout << "Heap variable value: " << *heapVariable << endl;

    // Deallocate heap memory
    delete heapVariable;

    return 0;
}