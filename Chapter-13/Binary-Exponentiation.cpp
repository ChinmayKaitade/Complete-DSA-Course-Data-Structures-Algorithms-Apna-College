// Power Function — Binary Exponentiation

#include <iostream>

using namespace std;

int main()
{
    // Base value
    double x = 2.0;

    // Power value
    int n = 10;

    // Handle special cases
    if (n == 0)
    {
        cout << 1.0 << endl;
        return 0;
    }

    if (x == 0)
    {
        cout << 0.0 << endl;
        return 0;
    }

    if (x == 1)
    {
        cout << 1.0 << endl;
        return 0;
    }

    // If x is -1:
    // Even power gives 1
    // Odd power gives -1
    if (x == -1 && n % 2 == 0)
    {
        cout << 1.0 << endl;
        return 0;
    }

    if (x == -1 && n % 2 != 0)
    {
        cout << -1.0 << endl;
        return 0;
    }

    // Use long because int can cause overflow
    // when n is INT_MIN (-2147483648)
    long binForm = n;

    // If power is negative:
    // x^(-n) = 1 / x^n
    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }

    // Stores the final answer
    double ans = 1;

    // Binary Exponentiation
    while (binForm > 0)
    {
        // If the current binary digit is 1,
        // multiply the answer by x
        if (binForm % 2 == 1)
        {
            ans *= x;
        }

        // Square x for the next power
        x *= x;

        // Move to the next binary digit
        binForm /= 2;
    }

    // Print the final answer
    cout << "Answer: " << ans << endl;

    return 0;
}
