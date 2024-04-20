#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";

    // size() - returns the length of the string
    cout << str.size() << endl; // Output: 13

    // at() - returns the character at a given index
    cout << str.at(0) << endl; // Output: H

    // substr() - returns a substring from the given position. The first argument is the starting position and the second argument is the length of the substring.
    cout << str.substr(7, 5) << endl; // Output: World

    // find() - returns the first occurrence of the given substring. If the substring is not found, it returns string::npos
    cout << str.find("World") << endl; // Output: 7

    // rfind() - returns the last occurrence of the given substring
    cout << str.rfind('o') << endl; // Output: 8

    // insert() - inserts a string at the given position
    cout << str.insert(5, ", dear") << endl; // Output: Hello, dear, World!

    // erase() - erases a part of the string
    cout << str.erase(5, 6) << endl; // Output: Hello, World!

    // replace() - replaces a part of the string with another string
    cout << str.replace(7, 5, "Universe") << endl; // Output: Hello, Universe!

    // append() - appends a string at the end
    cout << str.append(" How are you?") << endl; // Output: Hello, World! How are you?
    str+=" I am fine."; // Another way to append a string

    // clear() - clears the string
    str.clear();
    cout << str << endl; // Output: 

    return 0;
}