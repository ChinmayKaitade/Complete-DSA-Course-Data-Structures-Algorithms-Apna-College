#include <iostream>

using namespace std;

int main()
{
    // ==========================================
    // 1. PRE-INCREMENT (++a)
    // ==========================================

    int a = 10;

    // First increase a by 1
    // Then assign the new value to b
    int b = ++a;

    cout << "Pre-Increment (++a)" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    // ==========================================
    // 2. POST-INCREMENT (x++)
    // ==========================================

    int x = 10;

    // First assign the current value of x to y
    // Then increase x by 1
    int y = x++;

    cout << "\nPost-Increment (x++)" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;


    // ==========================================
    // 3. PRE-DECREMENT (--p)
    // ==========================================

    int p = 10;

    // First decrease p by 1
    // Then assign the new value to q
    int q = --p;

    cout << "\nPre-Decrement (--p)" << endl;
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;


    // ==========================================
    // 4. POST-DECREMENT (r--)
    // ==========================================

    int r = 10;

    // First assign the current value of r to s
    // Then decrease r by 1
    int s = r--;

    cout << "\nPost-Decrement (r--)" << endl;
    cout << "r = " << r << endl;
    cout << "s = " << s << endl;


    return 0;
}