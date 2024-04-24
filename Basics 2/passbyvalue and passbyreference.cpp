#include <iostream>
#include <vector>
using namespace std;

// Function to demonstrate pass by value. 
void passByValue(vector<int> vec) {
    vec.push_back(10);
    cout << "Inside passByValue function: ";
    for (int num : vec) {
        cout << num << " ";
    } // output : 5 10
    cout << endl;
}

// Function to demonstrate pass by reference
void passByReference(vector<int>& vec) {
    vec.push_back(20);
    cout << "Inside passByReference function: ";
    for (int num : vec) {
        cout << num << " ";
    }// output : 5 20
    cout << endl;
}

// Function to demonstrate pass by reference using a pointer
void passByPointer(vector<int>* vec) {
    vec->push_back(30);
    cout << "Inside passByPointer function: ";
    for (int num : *vec) {
        cout << num << " ";
    }// output : 5 20 30
    cout << endl;
}


int main() {
    vector<int> vec = {5};

    cout << "Before function calls: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    // a copy of the vector is created and is passed to the function
    passByValue(vec);
    cout << "After passByValue function call: ";
    for (int num : vec) {
        cout << num << " ";
    } // output : 5
    cout << endl;

    // the reference of the vector is passed to the function
    passByReference(vec);
    cout << "After passByReference function call: ";
    for (int num : vec) {
        cout << num << " ";
    } // output : 5 20
    cout << endl;

    // pass by value can also be achhieved by passing a pointer of the vector to the function. The pointer to the vector is passed to the function
    passByPointer(&vec);
    cout << "After passByPointer function call: ";
    for (int num : vec) {
        cout << num << " ";
    } // output : 5 20 30
    cout << endl;

    return 0;

    

}