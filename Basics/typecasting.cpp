#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    // Convert int to string
    int num = 123;
    string str = to_string(num);
    cout << "String from int: " << str << endl;

    // Convert string to int
    string str2 = "456";
    int num2 = stoi(str2);
    cout << "Int from string: " << num2 << endl;

    // Convert float to string
    float f = 1.23f;
    stringstream ss;
    ss << f;
    string str3 = ss.str();
    cout << "String from float: " << str3 << endl;

    // Convert string to float
    string str4 = "4.56";
    float f2 = stof(str4);
    cout << "Float from string: " << f2 << endl;

    // Convert char to int
    char c = '7';
    int num3 = c - '0'; // Subtract '0' to get the integer value of the character
    cout << "Int from char: " << num3 << endl;

    // Convert int to char
    int num4 = 8;
    char c2 = num4 + '0'; // Add '0' to get the character representation of the integer
    cout << "Char from int: " << c2 << endl;

    // Convert char to string
    char c3 = 'a';
    string str5 = ""; // Initialize an empty string
    str5 += c3; // Append the character to the string
    cout << "String from char: " << str5 << endl;

    return 0;
}