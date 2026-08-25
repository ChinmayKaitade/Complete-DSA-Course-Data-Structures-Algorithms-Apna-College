#include <iostream>
#include <climits>
using namespace std;

int reverseInteger(int n)
{
    int rev = 0;

    while (n != 0)
    {
        int lastDigit = n % 10;

        // Overflow checks for 32-bit signed integer range [-2^31, 2^31 - 1]
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && lastDigit > 7))
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && lastDigit < -8))
            return 0;

        rev = (rev * 10) + lastDigit;
        n /= 10;
    }

    return rev;
}

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "Reversed Integer: " << reverseInteger(n) << endl;
    return 0;
}