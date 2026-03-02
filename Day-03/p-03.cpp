
// 👉 Write a program to check if a student has passed or failed based on their marks
// A student is considered to have passed if their marks are 35 or above, and failed if their marks are below 35.
// Given marks:

// =90 → A

// =75 → B

// =50 → C

// Else Fail


#include <iostream>
using namespace std;

int main() {

        int marks;
        cout << "Enter your marks: ";
        cin >> marks;

        if (marks > 90) {
            cout << "Grade: A+, Outstanding performance!" << endl;
        }
        else if (marks > 80) {
            cout << "Grade: A, Excellent work!" << endl;
        }
        else if (marks > 70) {
            cout << "Grade: B+, Good job!" << endl;
        }
        else if (marks > 60) {
            cout << "Grade: B, Keep up the good work!" << endl;
        }
        else if (marks > 50) {
            cout << "Grade: C, You're doing okay! but need improvement!" << endl;
        }
        else if (marks >= 35) {
            cout << "Grade: P, You just passed but need improvement!" << endl;
        }
        else {
            cout << "Grade: F, You failed. Better luck next time!" << endl;
        }

    return 0;
}