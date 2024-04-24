/**
 * This program demonstrates the usage of structs and enums in C++.
 * 
 * Structs are used to define a custom data type that groups together related data elements.
 * They can have member variables and member functions, but by default, all members are public.
 * Structs are commonly used to represent simple data structures.
 * 
 * Enums, short for enumerations, are used to define a set of named values.
 * They provide a way to represent a fixed number of possible values for a variable.
 * Enums in C++ are defined using the enum keyword, followed by the name of the enum and a list of possible values enclosed in curly braces.
 * Each value in the enum is assigned an integer value starting from 0 by default, but you can specify custom values if needed.
 */

#include <iostream>

using namespace std;

// Define a struct to represent a person
struct Person {
    string name;
    int age;
};

// Define an enum to represent days of the week
enum class Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

//Enums, short for enumerations, are used in programming to define a set of named values. They provide a way to represent a fixed number of possible values for a variable. In C++, enums are defined using the enum keyword, followed by the name of the enum and a list of possible values enclosed in curly braces. Each value in the enum is assigned an integer value starting from 0 by default, but you can specify custom values if needed.

int main() {
    // Create an instance of the Person struct
    Person person;
    person.name = "John";
    person.age = 25;

    // Print the person's name and age
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;

    // Create an instance of the Day enum
    Day today = Day::Monday;

    // Print the current day
    cout << "Today is ";

    // Use a switch statement to handle different days
    switch (today) {
        case Day::Monday:
            cout << "Monday";
            break;
        case Day::Tuesday:
            cout << "Tuesday";
            break;
        case Day::Wednesday:
            cout << "Wednesday";
            break;
        case Day::Thursday:
            cout << "Thursday";
            break;
        case Day::Friday:
            cout << "Friday";
            break;
        case Day::Saturday:
            cout << "Saturday";
            break;
        case Day::Sunday:
            cout << "Sunday";
            break;
    }

    cout << endl;

    return 0;
}

