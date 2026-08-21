#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter Your Odd Sum Number: ";
    cin >> n;

    int oddSum = 0;

    // print odd numbers
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            oddSum += i;
        }
    }

    cout << "Odd Sum is: " << oddSum << endl;

    return 0;
}