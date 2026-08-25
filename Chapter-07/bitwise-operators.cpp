#include <iostream>
using namespace std;

int main()
{
    // Bitwise & Operator
    int a = 4, b = 8;
    cout << "Bitwise & of a and b is: " << (a & b) << endl; // 0

    // Bitwise | Operator
    int c = 4, d = 8;
    cout << "Bitwise | of c and d is: " << (c | d) << endl; // 12

    // Bitwise ^(XOR) Operator
    int i = 4, j = 8;
    cout << "Bitwise ^(XOR) of c and d is: " << (i | j) << endl; // 12

    // Bitwise << Operator
    int m = 10, n = 2;
    cout << "Bitwise << of m and n is: " << (m << n) << endl; // 40

    // Bitwise >> Operator
    int p = 10, q = 1;
    cout << "Bitwise >> of c and d is: " << (p >> q) << endl; // 5

    return 0;
}