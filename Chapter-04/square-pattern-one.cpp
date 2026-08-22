#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;

    // using i = 1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
            // cout << "*" << " ";
        }

        cout << endl;
    }

    return 0;
}