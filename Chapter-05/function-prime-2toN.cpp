#include <iostream>
using namespace std;

// Function to check if a single number is prime
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to print all primes in range [2, n]
void printPrimes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    if (n < 2)
    {
        cout << "No prime numbers exist in the range up to " << n << "." << endl;
    }
    else
    {
        cout << "Prime numbers from 2 to " << n << ":\n";
        printPrimes(n);
    }

    return 0;
}