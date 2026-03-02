

// Problem: Write a program to check if a year is a leap year or not. A leap year is defined as follows:
// - It is divisible by 4;
// - However, if it is divisible by 100, then it must also be divisible by 400 to be a leap year.
// Check leap year

#include <iostream>
using namespace std;

int main(){

    cout << endl;

    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year." << endl;
            }
            else {
                cout << year << " is not a leap year." << endl;
            }

        }
        else {
            cout << year << " is a leap year." << endl;
        }

    }
    else {
        cout << year << " is not a leap year." << endl;
    }

    cout << endl;

    return 0;
}