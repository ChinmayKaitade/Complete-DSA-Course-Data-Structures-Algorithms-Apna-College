#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Remainder: " << a % b << endl;
    cout << "***Arithmetic Operators Ends Here***" << endl;

    cout << (3 < 5) << endl;  // true -> 1
    cout << (3 > 5) << endl;  // false -> 0
    cout << (3 <= 5) << endl; // true -> 1
    cout << (3 >= 5) << endl; // false -> 0
    cout << (3 == 5) << endl; // false -> 0
    cout << (3 != 5) << endl; // true -> 1
    cout << "***Relational Operators Ends Here***" << endl;

    // OR(||), AND(&&) and NOT(!)
    cout << !(3 < 5) << endl; // false -> 0
    cout << "***Logical Operators Ends Here***" << endl;

    return 0;
}