#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Your Number: ";
    cin >> n;

    cout << (n >= 0 ? "Positive Number" : "Negative Number") << endl; // Ternary operator to find number is positive or negative

    return 0;
}