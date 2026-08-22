#include <iostream>
using namespace std;

long long nthFibonacci(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    long long prev2 = 0; // F(0)
    long long prev1 = 1; // F(1)
    long long current = 0;

    for (int i = 2; i <= n; i++)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
    }
    else
    {
        cout << n << "th Fibonacci term = " << nthFibonacci(n) << endl;
    }

    return 0;
}