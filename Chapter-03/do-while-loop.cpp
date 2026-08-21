#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Your Number Count: ";
    cin >> n;

    int i = 1;

    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);

    return 0;
}