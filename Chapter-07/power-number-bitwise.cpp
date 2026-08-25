#include <iostream>
using namespace std;

bool isPowerOfTwoBits(int n)
{
    // Condition: n must be positive and have only one bit set
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << (isPowerOfTwoBits(n) ? "Power of 2" : "NOT a power of 2") << endl;
    return 0;
}