#include <iostream>
using namespace std;

/*
function overloading is the process in which we can have multiple functions with the same name but different parameters.
The compiler will decide which function to call based on the number and type of parameters passed to the function.
*/

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to concatenate two strings
string add(string a, string b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10, num3 = 15;
    string str1 = "Hello", str2 = "World";

    // Calling the overloaded functions
    int sum1 = add(num1, num2);
    int sum2 = add(num1, num2, num3);
    string result = add(str1, str2);

    // Displaying the results
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum1 << endl;
    cout << "Sum of " << num1 << ", " << num2 << " and " << num3 << " is: " << sum2 << endl;
    cout << "Concatenation of \"" << str1 << "\" and \"" << str2 << "\" is: " << result << endl;

    return 0;
}