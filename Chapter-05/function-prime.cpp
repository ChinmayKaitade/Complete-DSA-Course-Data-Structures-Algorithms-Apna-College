#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    // Check divisibility up to sqrt(n)
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << num << (isPrime(num) ? " is a Prime Number" : " is Not a Prime Number") << endl;

    return 0;
}