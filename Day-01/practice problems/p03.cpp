// Problem 5: Swap Two Numbers
// Task: Read two integers, print them swapped.

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter the 1st number: ";
    cin >> a; // Read the first integer from input and store it in variable a
    cout << "Enter the 2nd integer: ";
    cin >> b;
    cout << "a = " << a << ", b = " << b << endl; // Print the original values of a and b
    temp = a;
    a = b;
    b = temp;

    cout << " After swapping: " << "a = " << a << ", b = " << b << endl; // Print the swapped values of a and b3

    return 0;
}