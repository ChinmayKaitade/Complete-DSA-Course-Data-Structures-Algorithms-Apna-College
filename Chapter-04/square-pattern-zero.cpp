#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;

    // using i = 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << j << " ";
            // cout << "*" << " ";
        }

        cout << endl;
    }

    return 0;
}