#include <iostream>

using namespace std;

int main() {
    // For loop
    cout << "For loop:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl << endl;

    // While loop
    cout << "While loop:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl << endl;

    // Do-while loop
    cout << "Do-while loop:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl << endl;

    // Range-based for loop
    cout << "Range-based for loop:" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl << endl;

    return 0;
}