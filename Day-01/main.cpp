#include <iostream>
using namespace std;

int main() {

    cout << "Hello world!" << endl;

    cout << "\n";

/*
    Data types:
    - int : integer numbers e.g. 1, 2, -1, 0 and size is 4 bytes.
    - long long : larg integer numbers e.g. 10^18, 38888888890000 and size is 8 bytes.
    - float : small decimals e.g. 3.14, 5.90, -0.5 and size is 4 bytes.
    - double : large decimals e.g. 3.141592653589793238, -0.573887622999000 and size is 8 bytes.
    - char : single charecter e.g. 'a', 'b', '0', '$', and size is 1 byte.
    - string : multiple charecters e.g. "Hello world!", "C++ programming", and size is variable.
    - bool : boolean values e.g. true, false and size is 1 byte.

*/



    int a = 10;
    long long b = 1000000000000;
    float e = 3.14;
    double f = 3.141592653589793238;
    char d = 'a';
    string s = "hello world!";
    bool c = true;

    cout << "int : " << a << endl;
    cout << "long long : " << b << endl;
    cout << "float : " << e << endl;
    cout << "double : " << f << endl;
    cout << "char : " << d << endl;
    cout << "string : " << s << endl;       
    cout << "bool : " << c << endl; 
    cout << "\n";

    // Input and output:
    int x;
    string name;

 // input a string and store it in variable name
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> x;

    cout << "Hello " << name << ", you are " << x << " years old!" << endl; // output a message using the input values

    cout << "\n";


    string fullname;
    cout << "Enter your full name: ";
    cin >> fullname;

    cout << "Your full name is " << fullname << endl;

    cout << "\n";

    string fullname2;

    cout << "Enter your full name: ";
    getline(cin, fullname2);

    cout << "Your full name is " << fullname2 << endl;



    /*
    | Operator | Meaning            | Example | Result         |
    | -------- | ------------------ | ------- | -------------- |
    | `+`      | Addition           | `5 + 3` | `8`            |
    | `-`      | Subtraction        | `5 - 3` | `2`            |
    | `*`      | Multiplication     | `5 * 3` | `15`           |
    | `/`      | Division           | `5 / 2` | `2` (integer!) |
    | `%`      | Modulo (remainder) | `5 % 2` | `1`            |
    | `++`     | Increment          | `a++`   | Add 1          |
    | `--`     | Decrement          | `a--`   | Subtract 1     |

*/



    int a = 10;
    int b = 3;

    cout << "a + b = " << a + b << endl; // Addition  // 10 + 3 = 13
    cout << "a - b = " << a - b << endl; // Subtraction  // 10 - 3 = 7
    cout << "a * b = " << a * b << endl; // Multiplication       // 10 * 3 = 30
    cout << "a / b = " << a / b << endl; // Division (integer division)  // 10 / 3 = 3 (not 3.33333 because both a and b are integers)
    cout << "a % b = " << a % b << endl; // Modulo (remainder) // 10 % 3 = 1 (because 10 divided by 3 is 3 with a remainder of 1)
    cout << "a++ = " << a++ << endl; // Increment (post-increment) // outputs 10, then a becomes 11
    cout << "a-- = " << a-- << endl; // Decrement (post-decrement) // outputs 11, then a becomes 10 again

    cout << "After increment and decrement operations, a = " << a << endl; 
    // value of a after increment and decrement
    
    cout << "\n";

    cout << (double)a/b << endl;

    cout << "\n";
    cout << a/b << endl; // integer division // 3
    cout << (double)a/b << endl; // floating-point division // 3.33333
    cout << static_cast<double>(a)/b << endl; // another way to perform floating-point division // 3.33333


    

    return 0;
}