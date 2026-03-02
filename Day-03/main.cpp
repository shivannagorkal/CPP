# include <iostream>
using namespace std;

int main() {

// 2️⃣ Relational Operators (Comparison)

// | Operator | Meaning       |
// | -------- | ------------- |
// | ==       | Equal to      |
// | !=       | Not equal     |
// | >        | Greater       |
// | <        | Less          |
// | >=       | Greater equal |
// | <=       | Less equal    |

// 3️⃣ Logical Operators

// | Operator | Meaning |
// | -------- | ------- |
// | &&       | AND     |
// | ||       | OR      |
// | !        | NOT     |

// 4️⃣ Bitwise Operators

// | Operator | Meaning       |
// | -------- | ------------- | 
// | &        | Bitwise AND   |
// | |        | Bitwise OR    |
// | ^        | Bitwise XOR   |
// | ~        | Bitwise NOT   |

// 5️⃣ Assignment Operators

// | Operator | Meaning       |
// | -------- | ------------- |
// | =        | Assignment    | 
// | +=       | Add and assign|
// | -=       | Subtract and assign|
// | *=       | Multiply and assign|
// | /=       | Divide and assign|
// | %=       | Modulo and assign|

// 6️⃣ Miscellaneous Operators

// | Operator | Meaning       |
// | -------- | ------------- |
// | sizeof    | Size of a type or variable |   

// 7️⃣ Operator Precedence (from highest to lowest)   

// | Precedence Level | Operators                          |
// | ---------------- | ---------------------------------- |
// | 1                | () [] -> . ++ --                   |    
// | 2                | ! ~ ++ -- + - * & sizeof            |
// | 3                | * / %                              |
// | 4                | + -                                |
// | 5                | << >>                              |
// | 6                | < <= > >=                          |
// | 7                | == !=                              |
// | 8                | &                                  |
// | 9                | ^                                  |
// | 10               | |                                  |

// 8️⃣ Operator Associativity

// | Associativity | Operators                          |
// | ------------- | ---------------------------------- |
// | Left to Right | () [] -> . ++ -- + - * / % << >> < <= > >= == != & ^ | |
// | Right to Left | ! ~ ++ -- sizeof                   |   

// 📌 PART 2 – If / Else (Decision Making Brain 🧠)

// if(condition)
// {
//     // code
// }
// else
// {
//     // code
// }

    cout << endl;
// Example: Check if a number is positive, negative, or zero

    int n = 5;

    if (n % 2 == 0) {
        cout << "The number " << n << " is Even." << endl;

    }else if (n % 2 == 1) {
        cout << "The number " << n << " is Odd." << endl;
    }
    else {
        cout << "The number " << n << " is zero." << endl;
    }

    cout << endl;

// Example: Check if a person is eligible to vote

    string name = "Shiva";
    int age = 19;

    if (age >= 18) {
        cout << name << " is Eligible for vote." << endl;
    }
    else {
        cout << name << " is not Eligible for vote." << endl;
    }

    cout << endl;

// Example 2 – Largest of 3 Numbers

    int a = 2, b = 4, c = 8;

    if (a >= b && a >= c) {
        cout << a << " is the greatest number." << endl;
    }
    else if (b >= a && b >= c) {
        cout << b << " is the greatest number." << endl;
    }
    else {
        cout << c << " is the greatest number." << endl;
    }

    cout << endl;

// 📌 PART 3 – Nested If (Very Important for CP)

// if(condition1)
// {
//     if(condition2)
//     {
//         // code
//     }
// }

// Example: Check the number is composite or prime

    int num = 29;

    if (num > 1) {
        bool isPrime = true;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " is a prime number." << endl;
        }
        else {
            cout << num << " is a composite number." << endl;
        }
    }


    return 0;
}