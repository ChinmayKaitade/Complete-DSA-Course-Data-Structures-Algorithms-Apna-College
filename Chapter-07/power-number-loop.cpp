#include <iostream>
using namespace std;

bool isPowerOfTwoLoop(int n)
{
    if (n <= 0)
        return false;

    while (n % 2 == 0)
    {
        n /= 2;
    }

    return (n == 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << (isPowerOfTwoLoop(n) ? "Power of 2" : "NOT a power of 2") << endl;
    return 0;
}