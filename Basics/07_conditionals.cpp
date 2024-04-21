#include <iostream>

#include <iostream>

using namespace std;

int main() {
    int num = 10;

    // if statement
    if (num > 0) {
        cout << "Number is positive." << endl;
    }

    // if-else statement
    if (num % 2 == 0) {
        cout << "Number is even." << endl;
    } else {
        cout << "Number is odd." << endl;
    }

    // nested if-else statement
    if (num > 0) {
        if (num % 2 == 0) {
            cout << "Number is positive and even." << endl;
        } else {
            cout << "Number is positive and odd." << endl;
        }
    } else if (num < 0) {
        cout << "Number is negative." << endl;
    } else {
        cout << "Number is zero." << endl;
    }

    // switch statement
    switch (num) {
        case 0:
            cout << "Number is zero." << endl;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            cout << "Number is odd." << endl;
            break;
        case 2:
        case 4:
        case 6:
        case 8:
            cout << "Number is even." << endl;
            break;
        default:
            cout << "Number is out of range." << endl;
            break;
    }

    return 0;
}