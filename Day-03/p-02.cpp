
// C++ program to check if a number is 3 digit or not
// Check if number is 3 digit

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num >= 100 && num <= 999) {
        cout << num << " is a 3 digit number." << endl;
    }
    else {
        cout << num << " is not a 3 digit number." << endl;
    } 


    return 0;
}