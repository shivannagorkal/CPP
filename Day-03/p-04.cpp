
// 👉 Write a program to check if a number is a "Special Number" or not
// A "Special Number" is defined as a number that is divisible by 7 and is even.
// 👉 Input a number
// If it is divisible by 7 AND even
// Print "Special Number"
// Else print "Normal Number"


#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 7 == 0 && num % 2 == 0) {
        cout << num << " is a special number." << endl;
    }
    else {
        cout << num << " is a normal number." << endl;
    }

    return 0;
}